#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 15;

    if(age > 5)
    {
        if(age == 10)
        {
            printf("True");
        }
        else {
            printf("False");
        }
    }
    else {
        printf("Invalid Age");
    }
    return 0;
}
