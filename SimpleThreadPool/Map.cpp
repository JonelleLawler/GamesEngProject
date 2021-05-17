#include "Map.h"

Map::Map()
{
    tiles = new Tile* [30];
    for (int i = 0; i < 30; i++)
    { 
        tiles[i] = new Tile[30];
    }
       

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            
            float outlineThickness = 0;
            float r = outlineThickness + tiles[i][j].radius;// *1.25;
            tiles[i][j].setPos(startPos + sf::Vector2f((r * (float)i), (r * (float)j)));
        }
    }
}

Map::~Map()
{
}

void Map::update(sf::Time t_dt)
{
}

void Map::render(sf::RenderWindow& t_window)
{
    int counter = 0;      
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            tiles[i][j].render(t_window);
        }
    }
}

float Map::length(sf::Vector2f t_vector)
{
    return 0.0f;
}

sf::Vector2f Map::getTileLocation(int x, int y)
{
    return sf::Vector2f();
}

int Map::getTileX(sf::Vector2i location)
{
    return 0;
}

int Map::getTileY(sf::Vector2i location)
{
    return 0;
}
