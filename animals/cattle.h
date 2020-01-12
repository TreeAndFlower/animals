#ifndef CATTLE_H_
#define CATTLE_H_

#include "animals.h"

class Cattle : public Animals
{
public:
	Cattle():Animals()
	{

	};

	Cattle(string name) : Animals(name)
	{

	};

	string GetShoutSound()
	{
		return "哞";
	}
};

#endif /* CATTLE_H_ */