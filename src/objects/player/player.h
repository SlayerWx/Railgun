#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
namespace railgun
{
class Player
{
public:
	Player();
	~Player();
	void Input(float timeScale);
	void Move(float timeScale);
	void Draw();
	void SetX(float newX);
	float GetX();
	void SetY(float newY);
	float GetY();
	void SetLife(int newLife);
	int GetLife();
private:
	Rectangle body;
	Color myColor = RED;
	int life;
	float width = 50.0f;
	float height = 50.0f;
	float speed = 150.0f;
};
}
#endif