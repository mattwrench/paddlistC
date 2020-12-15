#pragma once

#include <SFML/Graphics.hpp>

class Entity
{
public:
	Entity();
	sf::Sprite sprite;
protected:
	sf::Texture texture;
	float topSpeed;
	sf::Vector2f velocity;
};

