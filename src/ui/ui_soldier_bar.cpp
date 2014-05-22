#include "ui_soldier_bar.h"

namespace td{

	ui_soldier_bar::ui_soldier_bar()
	{

	}

	ui_soldier_bar::~ui_soldier_bar()
	{

	}

	bool ui_soldier_bar::init()
	{
		if(Layer::init())
		{
			return true;
		}
		return false;
	}

}