#include "railgun.h"
namespace railgun
{
Railgun::Railgun()
{
	InitWindow(initialWindowsSizeWidth, initialWindowSizeHeight, (title +' '+ version).c_str());
	cin.get();
}
Railgun::~Railgun()
{
	CloseWindow();
}
void Railgun::Play()
{
	Init();
	while (!WindowShouldClose())
	{
		Input();
		Update();
		Draw();
	}
}
void Railgun::Init()
{
}
void Railgun::Input()
{

}
void Railgun::Update()
{
}
void Railgun::Draw()
{
}
}