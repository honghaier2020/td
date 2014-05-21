#include "soldier_bar.h"

namespace td{

	soldier_bar::soldier_bar()
	{

	}

	soldier_bar::~soldier_bar()
	{

	}

	bool soldier_bar::init()
	{
		if(Layer::init())
		{
			return true;
		}
		return false;
	}

}