#pragma once

#include <SFML/Graphics.hpp>

class Entity
{
public:
	Entity();
	sf::Sprite sprite;
	float topSpeed;
	sf::Vector2f velocity;
protected:
	sf::Texture texture;
};

