#include "Demo.h"

Demo factory(Demo example) 
{ 
	return example; 
}

int main()
{
	Demo val;
	val = factory(Demo());//Move assignment
}
