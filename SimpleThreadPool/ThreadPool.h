#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <iostream>
#include <thread>
#include <queue>
#include <functional>
#include <mutex>
#include <condition_variable>
#include<future>
class ThreadPool {
public:
	ThreadPool();
	~ThreadPool();
	void addTask(std::function<void()>);

	template<class F, class... Args>
	auto queue(F&& f, Args&&... args)->std::future<typename std::result_of<F(Args...)>::type>;
	bool isShutdown;

private:
	std::vector<std::thread> m_threads;
	std::queue<std::function<void()>> m_tasks;
	std::mutex mutex_queue;
	std::condition_variable conditionVar;
};
#endif // !THREAD_POOL_H

