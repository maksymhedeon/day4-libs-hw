#include "convert.h"
  
void lower()
{
        char str[1024];

        printf("Enter text in uppercase: ");
        scanf("%s", str);

        for (int i = 0; str[i] != 0; ++i)
        {
                printf("%c", tolower(str[i]));
        }
}

