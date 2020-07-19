#include "railgun/railgun.h"
using namespace railgun;
int main()
{	
	Railgun* game = new Railgun();
	game->Play();
	if(game) delete game;
	return 0;
}