#include <iostream>
#include "Level.h"

class Level3 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level3 executed\n";
	}
};

static Level::CreatorFor<Level3> creator { 3 };