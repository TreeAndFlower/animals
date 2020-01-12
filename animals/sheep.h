#ifndef SHEEP_H_
#define SHEEP_H_

#include "animals.h"

class Sheep : public Animals
{
public:
	Sheep() : Animals()
	{

	};

	Sheep(string name) : Animals(name)
	{

	};

	string GetShoutSound()
	{
		shoutNums = 7;
		return "咩";
	}


};

#endif /* SHEEP_H_ */