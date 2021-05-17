#include "Game.h"
#include <iostream>

Game::Game() :
	m_window{ sf::VideoMode{ 1000, 1000, 32 }, "Game Eng Project" }
{

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
	m_map.render(m_window);
	m_window.display();
}