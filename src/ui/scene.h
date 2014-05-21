
#ifndef scene_h__
#define scene_h__

#include <vector>
#include "cocos2d.h"

namespace dt
{
	class scene : public cocos2d::Layer
	{
	public:
		//	construct function
		scene();

		//	destruction function
		~scene();

		//	Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
		virtual bool init();  

		//	define a create function for a specific type
		CREATE_FUNC(scene);

	private:
		//	disable copy construct and copy assignment
		scene(const scene&);
		scene& operator = (const scene&);

	};
}

#endif // scene_h__
