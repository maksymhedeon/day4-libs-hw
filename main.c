#include "libcalc/calc.h"
#include <convert.h>
#include <stdio.h>

void getNumber(int* a)
{
	printf("Enter a number: ");
	scanf("%d%*c", a);
}

void getNumbers(int* a, int* b)
{
	printf("Enter first number: ");
	scanf("%d%*c", a);
	printf("Enter second number: ");
        scanf("%d%*c", b);
}

int main()
{
	int n = 0;
	int a = 0, b = 0;

	while (1)
	{
		n = 0;
		printf("Choose option:\n\
				1. Add two numbers\n\
				2. Substruct two numbers\n\
				3. Multiply two numbers\n\
				4. Division of two nubers\n\
				5. Factorial of a number\n\
				6. Square root of a number\n\
				7. Uppercase to lowercase\n\
				8. Lowercase to uppercase\n\
				0. Exit\n");
		scanf("%d%*c", &n);

		switch (n)
		{
			case 0:
			return 0;

			case 1:
			getNumbers(&a, &b);
			printf("Sum of %d and %d is %d\n", a, b, sum(a, b));
			break;

			case 2:
			getNumbers(&a, &b);
                        printf("Diff of %d and %d is %d\n", a, b, diff(a, b));
			break;
			
			case 3:
			getNumbers(&a, &b);
                        printf("Multiply of %d and %d is %d\n", a, b, mul(a, b));
			break;

			case 4:
			getNumbers(&a, &b);
                        printf("Division of %d and %d is %f\n", a, b, div(a, b));
			break;

			case 5:
			getNumber(&a);
                        printf("Factorial of %d is %d\n", a, facto(a));
			break;

			case 6:
			getNumber(&a);
                        printf("Sqare root of %d is %f\n", a, sroot(a));
			break;

			case 7:
			lower();
			break;

			case 8:
			upper();
			break;
		}
	}

	return 0;
}

