#ifndef soldier_bar_h__
#define soldier_bar_h__
#include "cocos2d.h"

namespace td{
	class soldier_bar : public cocos2d::Layer
	{
	public:
		soldier_bar();

		~soldier_bar();

		virtual bool init();

		//	define a create function for a specific type
		CREATE_FUNC(soldier_bar);

	private:
		//	disable copy construct and copy assignment
		soldier_bar(const soldier_bar&);
		soldier_bar& operator = (const soldier_bar&);
	};
}

#endif // soldier_bar_h__
