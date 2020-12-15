#pragma once

#include "Paddle.h"
// Container class for all models
class World
{
public:
	World(int w, int h);
	Paddle player, enemy;
private:
	int width, height;
};

