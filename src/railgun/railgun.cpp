#include "railgun.h"
namespace railgun
{
Railgun::Railgun()
{
	InitWindow(500, 500, (title +' '+ version).c_str());
	cin.get();
}
Railgun::~Railgun()
{
	CloseWindow();
}
void Railgun::Play()
{
}
}