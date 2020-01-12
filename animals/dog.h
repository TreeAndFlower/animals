#ifndef DOG_H_
#define DOG_H_

#include "animals.h"

class Dog : public Animals
{
public:
	Dog() : Animals()
	{

	};

	Dog(string name) : Animals(name)
	{

	};

	string GetShoutSound()
	{
		return "汪";
	}

};

#endif /* DOG_H_ */