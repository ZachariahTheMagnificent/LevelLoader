#include <iostream>
#include "Level.h"

class Level8 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level8 executed\n";
	}
};

static Level::CreatorFor<Level8> creator { 8 };