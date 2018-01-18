#pragma once
#include <vector>
#include <memory>

class Level
{
public:
	class Creator
	{
	public:
		Creator ( const size_t i );
		virtual ~Creator ( ) = default;

		virtual std::unique_ptr<Level> create ( ) = 0;
	};

	template<typename LevelType>
	class CreatorFor : public Creator
	{
	public:
		CreatorFor ( const size_t i ) : Creator ( i )
		{

		}

		std::unique_ptr<Level> create ( ) override
		{
			return std::make_unique<LevelType> ( );
		}
	};

	static std::unique_ptr<Level> load_level ( const size_t i );

	Level ( ) = default;
	virtual ~Level ( ) = default;

	virtual void execute ( ) = 0;

private:
	class Loader
	{
	public:
		static Loader& get_instance ( );

		void add_creator ( const size_t i, Creator*const creator );

		std::unique_ptr<Level> load_level ( const size_t i );

	private:

		Loader ( ) = default;
		~Loader ( ) = default;

		std::vector<Creator*> level_creators_;
	};
};