#pragma once
#ifndef NPC_H
#define NPC_H
#include <SFML/Graphics.hpp>
#include"Map.h"
class NPC
{
public:

	NPC();

	void update(sf::Time t_dt);

	void render(sf::RenderWindow& t_window);


	sf::Vector2f getPos();
	sf::Vector2f getPreviousPos();


	std::vector<Tile*> m_path;

	Tile* getCurrentTile();

	static void setMapPointer(Map* t_map);

	sf::RectangleShape npcBody;

	Tile* target;
	void setTarget(Tile* tile);

private:
};
#endif // !NPC_H