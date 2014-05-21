#ifndef ui_soldier_bar_h__
#define ui_soldier_bar_h__
#include "cocos2d.h"

namespace td{
	class ui_soldier_bar : public cocos2d::Layer
	{
	public:
		ui_soldier_bar();

		~ui_soldier_bar();

		virtual bool init();

		//	define a create function for a specific type
		CREATE_FUNC(ui_soldier_bar);

	private:
		//	disable copy construct and copy assignment
		ui_soldier_bar(const ui_soldier_bar&);
		ui_soldier_bar& operator = (const ui_soldier_bar&);
	};
}

#endif // ui_soldier_bar_h__
