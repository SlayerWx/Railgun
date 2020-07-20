#include "railgun.h"

#include "raylib.h"
#include "elements/gameplay/gameplay.h"
namespace railgun
{
Railgun::Railgun()
{
	InitWindow(initialWindowsSizeWidth, initialWindowSizeHeight, (title +' '+ version).c_str());
	currentStage = Stage_Gameplay;
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
	switch (currentStage)
	{
	case Stage_SplashScreen:
		break;
	case Stage_Menu:
		break;
	case Stage_Gameplay:
		gameplay->Input();
		break;
	}
}
void Railgun::Update()
{
	switch (currentStage)
	{
	case Stage_SplashScreen:
		break;
	case Stage_Menu:
		break;
	case Stage_Gameplay:
		gameplay->Update();
		break;

	}
}
void Railgun::Draw()
{
	BeginDrawing();
	ClearBackground(BLACK);
	switch (currentStage)
	{
	case Stage_SplashScreen:
		break;
	case Stage_Menu:
		break;
	case Stage_Gameplay:
		gameplay->Draw();
		break;
	}
	EndDrawing();
}
}