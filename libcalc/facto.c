#include "calc.h"

int facto(int a)
{
	if (a < 0)
	{
		printf("Error: Factorial of negative number!\n");
		return 0;
	}

	if (a == 0)
	{
		return 1;
	}

	return (a * facto(a - 1));
}

