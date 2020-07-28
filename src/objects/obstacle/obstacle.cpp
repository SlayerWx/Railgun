#include "obstacle.h"
#include "raylib.h"
namespace railgun 
{
Obstacle::Obstacle()
{
	body.x = 0.0f;
	body.y = 0.0f;
	body.height = 20.0f;
	body.width = 40.0f;
}
Obstacle::~Obstacle()
{
}
}
