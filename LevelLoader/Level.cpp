#include "Level.h"

Level::Creator::Creator ( const size_t i )
{
	Level::Loader::get_instance ( ).add_creator ( i, this );
}

Level::Loader& Level::Loader::get_instance ( )
{
	static Loader instance;

	return instance;
}

void Level::Loader::add_creator ( const size_t i, Creator* const creator )
{
	if ( i >= level_creators_.size ( ) )
	{
		level_creators_.resize ( i + 1 );
	}

	level_creators_ [ i ] = creator;
}

std::unique_ptr<Level> Level::Loader::load_level ( const size_t i )
{
	return level_creators_ [ i ]->create ( );
}

std::unique_ptr<Level> Level::load_level ( const size_t i )
{
	return Loader::get_instance ( ).load_level ( i );
}
