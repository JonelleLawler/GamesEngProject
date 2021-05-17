#pragma once
#include<SFML/Graphics.hpp>
class Map
{
public:
	Map();
	~Map();

	void update(sf::Time t_dt);
};