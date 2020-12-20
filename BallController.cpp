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

	for (auto iter = world.pBalls.begin(); iter != world.pBalls.end(); iter++)
	{
		setPosition(**iter, dt);
		boundsCheck(**iter);
	}
}

void BallController::boundsCheck(Entity& entity)
{
	// TODO
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
