#include "floor.h"
#include "raylib.h"
namespace railgun 
{
Floor::Floor()
{
	body.x = 0.0f;
	body.y = 0.0f;
	body.height = 50.0f;
	body.width = 90.0f;
}

Floor::~Floor()
{
}
}
