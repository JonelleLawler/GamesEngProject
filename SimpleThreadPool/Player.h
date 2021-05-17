#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include"Map.h"
class Player
{
public:

	Player(Tile* t_spawnTile, float t_size, Tile* t_targetTile, float t_outline);

	void update(sf::Time t_dt);

	void render(sf::RenderWindow& t_window);


	sf::Vector2f getPos();
	sf::Vector2f getPreviousPos();


	std::vector<Tile*> m_path;

	Tile* getCurrentTile();


	static void setMapPointer(Map* t_map);

private:

	int m_id = 0;
};
#endif // !NPC_H