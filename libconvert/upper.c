#include "convert.h"

void upper()
{
	char str[1024];

	printf("Enter text in lowercase: ");
	scanf("%s", str);

	for (int i = 0; str[i] != 0; ++i)
	{
		printf("%c", toupper(str[i]));
	}
}

