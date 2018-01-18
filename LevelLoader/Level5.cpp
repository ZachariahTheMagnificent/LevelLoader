#include <iostream>
#include "Level.h"

class Level5 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level5 executed\n";
	}
};

static Level::CreatorFor<Level5> creator { 5 };