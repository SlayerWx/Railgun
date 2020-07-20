#include "railgun.h"

#include "raylib.h"
namespace railgun
{
Railgun::Railgun()
{
	InitWindow(initialWindowsSizeWidth, initialWindowSizeHeight, (title +' '+ version).c_str());
	gameplay = new Gameplay();
}
Railgun::~Railgun()
{
	if (gameplay) delete gameplay;
	CloseWindow();
}
void Railgun::Play()
{
	while (!WindowShouldClose())
	{
		Input();
		Update();
		Draw();
	}
}
void Railgun::Input()
{
	gameplay->Input();
}
void Railgun::Update()
{
	gameplay->Update();
}
void Railgun::Draw()
{
	BeginDrawing();
	ClearBackground(BLACK);

	gameplay->Draw();
	EndDrawing();
}
}