#include "Demo.h"

Demo factory(Demo example)
{
	return example;
}

int main()
{
	Demo val = factory(Demo());//Move constructor
}
