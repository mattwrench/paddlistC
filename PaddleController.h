#pragma once
#include "EntityController.h"

class PaddleController : public EntityController
{
public:
	PaddleController(World& w);
protected:
	void boundsCheck(Entity& entity);
};

