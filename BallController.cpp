#include "BallController.h"

const float SPAWN_RATE = 3.0;

BallController::BallController(World& w)
	: EntityController(w),
	spawnTimer(SPAWN_RATE) // Spawn first ball immediately
{
}

void BallController::update(float dt)
{
	spawnBalls(dt);

	for (auto iter = world.pBalls.begin(); iter != world.pBalls.end();)
	{
		setPosition(**iter, dt);
		collisionDetect(**iter);
		if (boundsCheck(**iter))
		{
			delete* iter;
			iter = world.pBalls.erase(iter); // Delete ball
		}
		else // Do not delete ball; increment iterator normally
		{
			iter++;
		}
	}
}

bool BallController::boundsCheck(Entity& entity)
{
	// Left wall
	if (entity.sprite.getPosition().x < 0)
	{
		return true;
	}

	// Right wall
	else if (entity.sprite.getPosition().x + entity.sprite.getGlobalBounds().width > world.width)
	{
		return true;
	}

	// Top wall
	if (entity.sprite.getPosition().y < 0)
	{
		entity.sprite.setPosition(entity.sprite.getPosition().x, 0);
		entity.velocity.y *= -1;
	}

	// Bottom wall
	else if (entity.sprite.getPosition().y + entity.sprite.getGlobalBounds().height > world.height)
	{
		entity.sprite.setPosition(entity.sprite.getPosition().x,
			world.height - entity.sprite.getGlobalBounds().height);
		entity.velocity.y *= -1;
	}

	return false;
}

void BallController::spawnBalls(float dt)
{
	spawnTimer += dt;

	if (spawnTimer >= SPAWN_RATE)
	{
		Ball* pBall;
		pBall = new Ball(world.width, world.height);
		world.pBalls.push_back(pBall);
		spawnTimer = 0;
	}
}

// Handles collisions between paddles and balls
void BallController::collisionDetect(Ball& ball)
{
	// Player
	// Velocity condition prevents balls sticking to paddles
	if (ball.sprite.getGlobalBounds().intersects(world.player.sprite.getGlobalBounds())
		&& ball.velocity.x < 0)
	{
		ball.velocity.x *= -1;
	}

	else if (ball.sprite.getGlobalBounds().intersects(world.enemy.sprite.getGlobalBounds())
		&& ball.velocity.x > 0)
	{
		ball.velocity.x *= -1;
	}
}
