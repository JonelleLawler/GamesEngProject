#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <iostream>
#include <thread>
#include <queue>
#include <functional>
#include <mutex>
#include <condition_variable>
class ThreadPool {
public:
	ThreadPool();
	~ThreadPool();
	void addTask(std::function<void()>);
private:
	std::vector<std::thread> m_threads;
	std::queue<std::function<void()>> m_tasks;
	std::mutex mutex_queue;
	std::condition_variable conditionVar;
};
#endif // !THREAD_POOL_H

