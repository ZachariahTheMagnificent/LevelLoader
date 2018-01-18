#include <iostream>
#include "Level.h"

class Level6 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level6 executed\n";
	}
};

static Level::CreatorFor<Level6> creator { 6 };