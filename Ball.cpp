#include "Ball.h"

#include <stdlib.h>
#include <time.h>

const int TOP_SPEED = 400;
const int DEGREES_IN_CIRCLE = 360;

Ball::Ball(int worldWidth, int worldHeight)
{
	// Class attributes
	topSpeed = TOP_SPEED;

	// Set texture
	texture.loadFromFile("Assets/Images/paddleRed.png");

	// Set random vertical position
	int x = worldWidth / 2 - sprite.getGlobalBounds().width / 2;
	srand(time(NULL)); // Initialize random seed
	int y = (rand() % (worldHeight - static_cast<int>(sprite.getGlobalBounds().height)) + sprite.getGlobalBounds().height / 2;
	sprite.setPosition(x, y);

	// Set random velocity direction;
	velocity.x = topSpeed;
	int degrees = rand() % DEGREES_IN_CIRCLE;
	float radians = degrees / 180 * M_PI;
	float newX = cos(radians) * velocity.x - sin(radians) * velocity.y;
	float newY = sin(radians) * velocity.x + cos(radians) * velocity.y;
	velocity.x = newX;
	velocity.y = newY;
}
