#include "NPC.h"

NPC::NPC(Tile* t_spawnTile, float t_size, Tile* t_targetTile, float t_outline, int t_id)
{
}

void NPC::update(sf::Time t_dt)
{
}

void NPC::render(sf::RenderWindow& t_window)
{
}

sf::Vector2f NPC::getPos()
{
    return sf::Vector2f();
}

sf::Vector2f NPC::getPreviousPos()
{
    return sf::Vector2f();
}

Tile* NPC::getCurrentTile()
{
    return nullptr;
}

void NPC::setMapPointer(Map* t_map)
{
}
