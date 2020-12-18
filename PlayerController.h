#pragma once
#include "PaddleController.h"

class PlayerController : public PaddleController
{
public:
	PlayerController(World& w);
	void update(float dt);
private:
	void setVelocity(Paddle& paddle);
};

