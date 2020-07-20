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
	void Move();
	void SetX(int newX);
	int GetX();
	void SetY(int newY);
	int GetY();
	void SetLife(int newLife);
	int GetLife();
private:
	int x;
	int y;
	int life;
};
}
#endif