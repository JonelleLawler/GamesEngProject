#include "Player.h"

Player::Player(Tile* t_spawnTile, float t_size, Tile* t_targetTile, float t_outline)
{
}

void Player::update(sf::Time t_dt)
{
}

void Player::render(sf::RenderWindow& t_window)
{
}

sf::Vector2f Player::getPos()
{
    return sf::Vector2f();
}

sf::Vector2f Player::getPreviousPos()
{
    return sf::Vector2f();
}

Tile* Player::getCurrentTile()
{
    return nullptr;
}

void Player::setMapPointer(Map* t_map)
{
}
