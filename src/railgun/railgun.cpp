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
}
void Railgun::Init()
{
}
void Railgun::Update()
{
}
void Railgun::Draw()
{
}
}