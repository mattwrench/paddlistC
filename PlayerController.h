#pragma once
#include "PaddleController.h"
#include "InputHandler.h"

class PlayerController : public PaddleController
{
public:
	PlayerController(World& w, InputHandler& i);
	void update(float dt);
	InputHandler& input;
private:
	void setVelocity(Paddle& paddle);
};

