#include "ui_scene.h"

namespace dt
{
	bool ui_scene::init()
	{
		if(Layer::init())
		{
			return true;
		}
		return false;
	}

	ui_scene::ui_scene()
	{

	}

	ui_scene::~ui_scene()
	{

	}
}


