#include <iostream>
#include "Level.h"

class Level7 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level7 executed\n";
	}
};

static Level::CreatorFor<Level7> creator { 7 };