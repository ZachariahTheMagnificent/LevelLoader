#include <iostream>
#include "Level.h"

class Level9 : public Level
{
public:
	void execute ( ) override
	{
		std::cout << "Level9 executed\n";
	}
};

static Level::CreatorFor<Level9> creator { 9 };