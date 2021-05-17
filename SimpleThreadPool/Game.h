#pragma once
#include "Map.h"
#include "ThreadPool.h"
#include <queue>
#include "NPC.h"
#include "Player.h"
class Game
{
public:
	Game();
	~Game();
	void run();

	Map m_map;
	NPC npc;
	Player player;


private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	sf::RenderWindow m_window;
	ThreadPool m_threadPool;
};