#include "ThreadPool.h"

ThreadPool::ThreadPool() {
	int cores = std::thread::hardware_concurrency() - 1;
	for (int i = 0; i < cores; i++)
	{
		m_threads.push_back(std::thread());
		// Need to add a function thats listens for 
		// Tasks to be added to the queue
	}
}

ThreadPool::~ThreadPool() {}


void ThreadPool::addTask(std::function<void()> task) 
{
	m_tasks.push(task);
}

template<class F, class... Args>
auto ThreadPool::queue(F&& f, Args&&... args)
->std::future<typename std::result_of<F(Args...)>::type>
{
    using return_type = typename std::result_of<F(Args...)>::type;

    auto task = std::make_shared< std::packaged_task<return_type()> >(
        std::bind(std::forward<F>(f), std::forward<Args>(args)...)
        );

  // Returns a future object associated with the same shared state as* this.
  // An exception is thrown if* this has no shared state or get_future has already been called.
    std::future<return_type> res = task->get_future();
    {
        std::unique_lock<std::mutex> lock(mutex_queue);

        // stop if shutdown called
        if (isShutdown)
        {
            throw std::runtime_error("queue stopped");
        }

        m_tasks.emplace([task]() { (*task)(); });
    }
    conditionVar.notify_one();
    return res;
}
