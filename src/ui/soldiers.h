#ifndef soldiers_h__
#define soldiers_h__

#include <vector>
#include "cocos2d.h"

//	class forward declaration 
class soldier_bar;

namespace dt
{
	class soldiers : public cocos2d::Layer
	{
	public:
		//	construct function
		soldiers();

		//	destruction function
		~soldiers();

		//	Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
		virtual bool init();  

		//	define a create function for a specific type
		CREATE_FUNC(soldiers);

	private:
		//	disable copy construct and copy assignment
		soldiers(const soldiers&);
		soldiers& operator = (const soldiers&);

	private:
		std::vector<soldier_bar*>	soldier_bar_;
	};
}

#endif // soldiers_h__
