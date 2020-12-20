#pragma once

#include "Paddle.h"
#include "Ball.h"
#include <vector>

// Container class for all models
class World
{
public:
	World(int w, int h);
	Paddle player, enemy;
	std::vector<Ball*> pBalls;
	int width, height;
};

