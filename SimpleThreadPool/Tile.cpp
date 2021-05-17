#include "Tile.h"

Tile::Tile()
{
	setUp();
}

Tile::~Tile()
{
}

void Tile::setUp()
{
	tileBody.setSize(sf::Vector2f(5, 5));
	tileBody.setFillColor(sf::Color::Green);
	tileBody.setOutlineColor(sf::Color::Black);
	tileBody.setOutlineThickness(1);
}

void Tile::render(sf::RenderWindow &t_window)
{
	t_window.draw(tileBody);
}


void Tile::setPos(sf::Vector2f pos)
{
	tileBody.setPosition(sf::Vector2f(pos));
}


