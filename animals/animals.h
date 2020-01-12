#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <string>

using namespace std;

class Animals
{
public:
	Animals(string name)
	{
		animalNames = name;
	}

	Animals()
	{
		animalNames = "无名";
	}

	string Shout()
	{
		string strRet = "";
		string sound = "";
		for(int i=0; i < shoutNums; ++i)
			sound += GetShoutSound();

		strRet = "我的名字是"+animalNames+",我的叫声是"+sound;
		return strRet;
	}

	virtual string GetShoutSound()
	{
		return "";
	}

protected:
	int shoutNums = 3;
	string animalNames;
};

#endif /* ANIMALS_H_ */
