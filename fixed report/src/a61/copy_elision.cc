#include "Demo.h"

Demo factory()
{
	Demo example;
	return example;//Copy elision - Return value
			//optimization
}

int main()
{
	factory();
}
