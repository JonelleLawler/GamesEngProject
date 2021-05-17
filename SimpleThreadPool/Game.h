#pragma once
#include "Map.h"
#include "ThreadPool.h"
#include <queue>
class Game
{
public:
	Game();
	~Game();
	void run();

	Map m_map;

private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	sf::RenderWindow m_window;
	ThreadPool m_threadPool;
};