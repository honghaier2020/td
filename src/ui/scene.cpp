#include "scene.h"

namespace dt
{
	bool scene::init()
	{
		if(Layer::init())
		{
			return true;
		}
		return false;
	}

	scene::scene()
	{

	}

	scene::~scene()
	{

	}
}


