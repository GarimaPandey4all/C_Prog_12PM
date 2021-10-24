#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10] = "Mumbai";
    int i;

    for(i = 0; str[i] != '\0'; i++) // '\0' - terminator
    {

    }

    printf("Length of the String is: %d\n", i);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }

        else if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }

    printf("String is: %s", str);

    return 0;
}
