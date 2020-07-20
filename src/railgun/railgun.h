#ifndef RAILGUN_H
#define RAILGUN_H
#include <iostream>

#include "raylib.h"

#include "elements/gameplay/gameplay.h"
namespace railgun
{
using namespace std;
enum GameStage
{
	Stage_SplashScreen, Stage_Menu, Stage_Gameplay
};
class Railgun
{
public:
	Railgun();
	~Railgun();
	void Play();
private:
	const int initialWindowSizeHeight = 500;
	const int initialWindowsSizeWidth = 800;
	const string title = "Railgun";
	const string version = "V0.1";
	Gameplay* gameplay;
	GameStage currentStage;
	void Input();
	void Update();
	void Draw();
};
}
#endif