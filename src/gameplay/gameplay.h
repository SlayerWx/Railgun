#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "raylib.h"
namespace railgun
{
class Gameplay
{
public:
	Gameplay();
	~Gameplay();
	void Restart();
	void Input();
	void Update();
	void Draw();
private:

};
}
#endif