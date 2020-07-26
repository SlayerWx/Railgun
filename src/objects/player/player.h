#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
#include "objects/object.h"
namespace railgun
{
class Player : public Object
{
public:
	Player();
	~Player();
	void Input(float timeScale);
	void Move(float timeScale);
	void SetLife(int newLife);
	int GetLife();
private:
	int life;
	float width = 50.0f;
	float height = 50.0f;
	float speed = 150.0f;
};
}
#endif