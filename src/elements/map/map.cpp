#include "map.h"
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "raylib.h"
#include "objects/obstacle/obstacle.h"
#include <iostream>
using namespace std;
namespace railgun
{
Map::Map()
{
	myLimitDown = static_cast<float>(GetScreenHeight()) - myLimitLeft;
	(time(NULL));
	for (int i = 0; i < maxQuantityObs; i++)
	{
		obs[i] = new Obstacle();
		obs[i]->SetColor(obstacleColorDebug);
	}
	MapGenerator();
}
Map::~Map()
{
	if (obs)
	{
		for (int i = 0; i < maxQuantityObs; i++)
		{
			delete obs[i];
		}
	}
}
void Map::MapSelector()
{
	
}
void Map::MapGenerator()
{
	system("cls");
	cout << "up:" << myLimitUp << endl;
	cout << "down:" << myLimitDown << endl;
	cout << "left:" << myLimitLeft << endl;
	cout << "right:" << myLimitRight << endl;
	cout << "Map: trying to create new map..." << endl;
	fstream fs("maps/map1.dat", fstream::out);
	if (fs.is_open())
	{
		cout << "Map: archive creation success!" << endl;

	}
	fs.close();
}
void Map::Draw()
{
	for (int i = 0; i < maxQuantityObs; i++)
	{
		obs[i]->Draw();
	}
}
Vector4 Map::LimitMap()
{
	return {myLimitLeft,myLimitUp,myLimitRight,myLimitDown};
}
}