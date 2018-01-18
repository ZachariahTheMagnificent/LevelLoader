#include <iostream>
#include "Level.h"

int main ( )
{
	for ( auto i = size_t { 1 }; i < 10; ++i )
	{
		auto level = Level::load_level ( i );
		level->execute ( );
	}

	system ( "pause" );
	return 0;
}