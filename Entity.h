#pragma once

#include <SFML/Graphics.hpp>

class Entity
{
public:
	Entity();
protected:
	sf::Texture texture;
	sf::Sprite sprite;
	float topSpeed;
	sf::Vector2f velocity;
};

