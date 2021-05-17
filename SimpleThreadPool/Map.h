#pragma once
#include<SFML/Graphics.hpp>
#include"Tile.h"
class Map
{
public:
	Map();
	~Map();

	void update(sf::Time t_dt);
	void render(sf::RenderWindow &t_window);

	// Tile variables
	int numTiles;
	float length(sf::Vector2f t_vector);

	sf::Vector2f getTileLocation(int x, int y);
	int getTileX(sf::Vector2i location);
	int getTileY(sf::Vector2i location);

	Tile** tiles;
	int mapSize = 90;
	sf::Vector2f startPos = sf::Vector2f(50.0f, 50.0f);
	
};