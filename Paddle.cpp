#include "Paddle.h"

const int TOP_SPEED = 550;
const int OFF_WALL = 50;

Paddle::Paddle(Team t, int worldWidth, int worldHeight)
	: team(t)
{
	topSpeed = TOP_SPEED;

	if (team == LEFT)
	{
		texture.loadFromFile("Assets/Images/paddleRed.png");
	}
	else
	{
		texture.loadFromFile("Assets/Images/paddleBlue.png");
	}
	sprite.setTexture(texture);

	// Set position
	if (team == LEFT)
	{
		sprite.setPosition(OFF_WALL - sprite.getGlobalBounds().width / 2, 
			worldHeight / 2 - sprite.getGlobalBounds().height / 2);
	}
	else
	{
		sprite.setPosition(worldWidth - OFF_WALL - sprite.getGlobalBounds().width / 2,
			worldHeight / 2 - sprite.getGlobalBounds().height / 2);
	}
}
