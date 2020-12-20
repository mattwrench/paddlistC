#pragma once
#include "PaddleController.h"

class EnemyController : public PaddleController
{
public:
	EnemyController(World& w);
	void update(float dt);
private:
	void setVelocity(Paddle& paddle);
};

