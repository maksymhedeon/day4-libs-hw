#include "calc.h"

double div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division by 0!\n");
		return 0;
	}

	return a / (double)b;
}

