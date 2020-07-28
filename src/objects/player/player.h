#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
#include "objects/object.h"
#include "objects/with_mobility/with_mobility.h"
namespace railgun
{
class Player : public WithMobility
{
public:
	Player();
	~Player();
	void Input();
	void SetLife(int newLife);
	int GetLife();
private:
	int life;
};
}
#endif