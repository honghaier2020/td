#ifndef ui_soldiers_h__
#define ui_soldiers_h__

#include <vector>
#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "ui/CocosGUI.h"
#include "cocostudio/CocoStudio.h"
//	class forward declaration 
class ui_soldier_bar;

namespace dt
{
	class ui_soldiers : public cocos2d::Layer
	{
	public:
		//	construct function
		ui_soldiers();

		//	destruction function
		~ui_soldiers();

		//	Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
		virtual bool init();  

		//	define a create function for a specific type
		CREATE_FUNC(ui_soldiers);

	private:
		//	disable copy construct and copy assignment
		ui_soldiers(const ui_soldiers&);
		ui_soldiers& operator = (const ui_soldiers&);

	private:
		std::vector<ui_soldier_bar*>	ui_soldier_bar_;
		
		cocos2d::ui::Layout*		layout_;
	};
}

#endif // ui_soldiers_h__
