#include "animals.h"
#include "cat.h"
#include "dog.h"
#include "cattle.h"
#include "sheep.h"

#include <stdio.h>
#include <string>

#define ANIMASNUM 10
using namespace std;

int main()
{
	Animals* cuteAnimals[ANIMASNUM];

	cuteAnimals[0] = new Cat("小奶");
	cuteAnimals[1] = new Cat("小橘");
	cuteAnimals[2] = new Dog("妞妞");
	cuteAnimals[3] = new Cat("端午");
	cuteAnimals[4] = new Dog("二哈");
	cuteAnimals[5] = new Cattle("telunsu");
	cuteAnimals[6] = new Cattle("mosilian");
	cuteAnimals[7] = new Cattle("anmuxi");
	cuteAnimals[8] = new Sheep("xiyangyang");
	cuteAnimals[9] = new Sheep("meiyangyang");
	string animalsSounds = "";
	for(int i=0; i < ANIMASNUM; ++i)
	{
		animalsSounds = cuteAnimals[i]->Shout();
		printf("%s \n", animalsSounds.c_str());
	}

	return 0;
}