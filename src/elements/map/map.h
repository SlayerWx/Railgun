#ifndef MAP_H
#define MAP_H
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "raylib.h"
#include "objects/obstacle/obstacle.h"
using namespace std;
namespace railgun
{
class Map
{
public:
	Map();
	~Map();
	void MapSelector();
	void MapGenerator();
	void Draw();
	Vector4 LimitMap(); // x = left, y = up, z = right, w = down
private:
	static const int maxQuantityObs = 30;
	Obstacle* obs[maxQuantityObs];
	int mapSelection;
	Color obstacleColorDebug = GREEN;
	float myLimitUp = 100.0f;
	float myLimitDown;//screenLimit
	float myLimitLeft = 25.0f;
	float myLimitRight = 800.0f;
};
}
#endif