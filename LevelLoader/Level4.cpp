#include <iostream>
#include "Level.h"

class Level4 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level4 executed\n";
	}
};

static Level::CreatorFor<Level4> creator { 4 };