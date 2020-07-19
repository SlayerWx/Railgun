#ifndef RAILGUN_H
#define RAILGUN_H
#include <iostream>
#include "raylib.h"
namespace railgun
{
using namespace std;
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
	void Init();
	void Input();
	void Update();
	void Draw();
};
}
#endif