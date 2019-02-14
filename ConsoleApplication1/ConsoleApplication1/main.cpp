#include <iostream>
#include "profile.h"

int main()
{
	LOG_DURATION("test")
	for (int i = 0; i < 10000000; i++)
	{
			;
	}

	//std::cout << "Hello world!";
	return 0;
}