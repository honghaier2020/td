
#ifndef ui_scene_h__
#define ui_scene_h__

#include "cocos2d.h"

namespace dt
{
	class ui_scene : public cocos2d::Layer
	{
	public:
		//	construct function
		ui_scene();

		//	destruction function
		~ui_scene();

		//	Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
		virtual bool init();  

		//	define a create function for a specific type
		CREATE_FUNC(ui_scene);

	private:
		//	disable copy construct and copy assignment
		ui_scene(const ui_scene&);
		ui_scene& operator = (const ui_scene&);

	};
}
#endif // ui_scene_h__



