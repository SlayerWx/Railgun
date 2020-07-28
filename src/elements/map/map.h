#ifndef MAP_H
#define MAP_H
#include <stdlib.h>
#include <time.h>
#include "raylib.h"
#include "objects/obstacle/obstacle.h"
namespace railgun
{
class Map
{
public:
	Map();
	~Map();
	void MapGenerator();
	void Draw();
private:
	static const int maxQuantityObs = 30;
	Obstacle* obs[maxQuantityObs];
};
}
#endif