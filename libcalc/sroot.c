#include "calc.h"
#include <math.h>

double sroot(int a)
{
	if (a < 0)
	{
		printf("Error: square root of negative number!\n");
		return 0;
	}

	return sqrt(a);
}

