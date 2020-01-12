#ifndef CAT_H_
#define CAT_H_

#include "animals.h"

class Cat : public Animals
{
public:
	Cat():Animals()
	{

	};

	Cat(string name) : Animals(name)
	{

	};

	string GetShoutSound()
	{
		return "喵";
	}
};

#endif /* CAT_H_ */