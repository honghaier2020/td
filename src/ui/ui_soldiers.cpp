#include "ui_soldiers.h"

namespace dt
{
	bool ui_soldiers::init()
	{
		if(Layer::init())
		{
			return true;
		}
		
		return false;
	}

	ui_soldiers::ui_soldiers()
	{
		layout_ = NULL;
	}

	ui_soldiers::~ui_soldiers()
	{

	}
}


