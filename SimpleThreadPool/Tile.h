#pragma once
#include<SFML/Graphics.hpp>
class Tile
{
public:
	Tile();
	~Tile();

	void setUp();
	void render(sf::RenderWindow &t_window);
	void setPos(sf::Vector2f pos);

	sf::RectangleShape tileBody;
	int tileSize;
	const float radius = 30;


};