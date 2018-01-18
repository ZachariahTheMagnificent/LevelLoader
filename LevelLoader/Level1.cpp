#include <iostream>
#include "Level.h"

class Level1 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level1 executed\n";
	}
};

static Level::CreatorFor<Level1> creator { 1 };