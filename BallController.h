#pragma once

#include "EntityController.h"
#include "World.h"

class BallController : public EntityController
{
public:
	BallController(World& w);
	void update(float dt);
private:
	bool boundsCheck(Entity& entity);
	void spawnBalls(float dt);
	void collisionDetect(Ball& ball);
	float spawnTimer;
};

