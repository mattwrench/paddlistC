#include "EnemyController.h"
#include <cmath>

const int SLOWDOWN_RANGE = 30;

EnemyController::EnemyController(World& w)
	: PaddleController(w)
{
}

void EnemyController::update(float dt)
{
	setVelocity(world.enemy);
	setPosition(world.enemy, dt);
	boundsCheck(world.enemy);
}

// Enemy AI: move towards nearest ball
// Assumes enemy is on right team
void EnemyController::setVelocity(Paddle& paddle)
{
	float farthestX = 0;
	Ball* pNearestBall = nullptr;
	for (auto iter = world.pBalls.begin(); iter != world.pBalls.end(); iter++)
	{
		if ((**iter).sprite.getPosition().x > farthestX && (**iter).velocity.x > 0)
		{
			pNearestBall = *iter;
			farthestX = (**iter).sprite.getPosition().x;
		}
	}

	// Move towards nearest ball
	paddle.velocity.y = 0;
	if (pNearestBall != nullptr)
	{
		float ballCenter = pNearestBall->sprite.getPosition().y + pNearestBall->sprite.getGlobalBounds().height / 2;
		float enemyCenter = world.enemy.sprite.getPosition().y + world.enemy.sprite.getGlobalBounds().height / 2;

		// Ball is below enemy
		if (ballCenter > enemyCenter)
		{
			paddle.velocity.y = paddle.topSpeed;
		}

		// Ball is above enemy
		else
		{
			paddle.velocity.y = -paddle.topSpeed;
		}

		// Slow down if ball and paddle are vertically close together
		float dist = abs(ballCenter - enemyCenter);
		if (dist < SLOWDOWN_RANGE)
		{
			paddle.velocity.y *= (dist / SLOWDOWN_RANGE);
		}
	}
}
