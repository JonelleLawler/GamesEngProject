#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include"Map.h"
class Player
{
public:

	Player();

	void update(sf::Time t_dt);

	void render(sf::RenderWindow& t_window);


	sf::Vector2f getPos();
	sf::Vector2f getPreviousPos();

	void setPos(sf::Vector2f pos);

	sf::RectangleShape playerBody;

	std::vector<Tile*> m_path;

	Tile* getCurrentTile();


	static void setMapPointer(Map* t_map);

private:

	int m_id = 0;
};
#endif // !NPC_H