#include <iostream>
#include "Level.h"

class Level2 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level2 executed\n";
	}
};

static Level::CreatorFor<Level2> creator { 2 };