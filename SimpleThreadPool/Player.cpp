#include "Player.h"

Player::Player()
{
    playerBody.setFillColor(sf::Color::Red);
    playerBody.setPosition(sf::Vector2f(50.0f, 50.0f));
}

void Player::update(sf::Time t_dt)
{
}

void Player::render(sf::RenderWindow& t_window)
{
    t_window.draw(playerBody);
}

sf::Vector2f Player::getPos()
{
    return sf::Vector2f();
}

sf::Vector2f Player::getPreviousPos()
{
    return sf::Vector2f();
}

void Player::setPos(sf::Vector2f pos)
{
    playerBody.setPosition(pos);
}

Tile* Player::getCurrentTile()
{
    return nullptr;
}

void Player::setMapPointer(Map* t_map)
{
}
