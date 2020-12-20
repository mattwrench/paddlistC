#pragma once
#include "EntityController.h"

class PaddleController : public EntityController
{
public:
	PaddleController(World& w);
protected:
	virtual void setVelocity(Paddle& paddle) = 0;
	bool boundsCheck(Entity& entity);
};

