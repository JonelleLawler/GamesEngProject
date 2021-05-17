#include "NPC.h"

NPC::NPC()
{
    npcBody.setPosition(10, 10);
    npcBody.setSize(sf::Vector2f(10, 10));
    npcBody.setFillColor(sf::Color::Blue);
  //  setTarget(t_targetTile);
}

void NPC::update(sf::Time t_dt)
{
}

void NPC::render(sf::RenderWindow& t_window)
{
    t_window.draw(npcBody);
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

void NPC::setTarget(Tile* tile)
{
    target = tile;
}
