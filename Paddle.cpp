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
	// Static casts prevent bad interpolation happening at beginning of the game while paddles are stationary
	int x, y;
	if (team == LEFT)
	{
		x = static_cast<int>(OFF_WALL - sprite.getGlobalBounds().width / 2);
		y = static_cast<int>(worldHeight / 2 - sprite.getGlobalBounds().height / 2);
	}
	else
	{
		x = static_cast<int>(worldWidth - OFF_WALL - sprite.getGlobalBounds().width / 2);
		y = static_cast<int>(worldHeight / 2 - sprite.getGlobalBounds().height / 2);
	}
	sprite.setPosition(x, y);
}
