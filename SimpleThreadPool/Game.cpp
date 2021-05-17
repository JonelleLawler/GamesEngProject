#include "Game.h"
#include <iostream>

Game::Game() :
	m_window{ sf::VideoMode{ 1000, 1000, 32 }, "Game Eng Project" }
{
	player.setPos(sf::Vector2f(50, 50));
}

Game::~Game()
{

}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents(); // at least 60 fps
			update(timePerFrame); //60 fps
		}
		render(); // as many as possible
	}
}



void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{

		if (event.type == sf::Event::KeyPressed)
		{
			if (event.key.code == sf::Keyboard::Escape)
			{
				m_window.close();
			}
			if (event.key.code == sf::Keyboard::W)
			{
				player.setPos(player.getPos() + sf::Vector2f(15, 0));
			}
			if (event.key.code == sf::Keyboard::A)
			{
				player.setPos(player.getPos() + sf::Vector2f(0, -15));
			}
			if (event.key.code == sf::Keyboard::S)
			{
				player.setPos(player.getPos() + sf::Vector2f(-15, 0));
			}
			if (event.key.code == sf::Keyboard::D)
			{
				player.setPos(player.getPos() + sf::Vector2f(0, 15));
			}
		}
		if (sf::Event::Closed == event.type)
		{
			m_window.close();
		}
	}
}

void Game::update(sf::Time t_deltaTime)
{

}


void Game::render()
{
	m_window.clear();
	player.render(m_window);
	m_map.render(m_window);
	npc.render(m_window);
	m_window.display();
}