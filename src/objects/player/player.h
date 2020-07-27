#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
#include "objects/object.h"
namespace railgun
{
struct DirectionChecker
{
	bool right = false;
	bool left = false;
	bool up = false;
	bool down = false;
};
class Player : public Object
{
public:
	Player();
	~Player();
	void Input();
	void Move(float timeScale);
	void CheckCollision(float xCol,float yCol,float widthCol,float heightCol);
	void SetLife(int newLife);
	int GetLife();
private:
	int life;
	float width = 50.0f;
	float height = 50.0f;
	float speed = 150.0f;
	DirectionChecker movement;
	DirectionChecker canMove;
	static const float distanceCheckerMaxDetection;
};
}
#endif