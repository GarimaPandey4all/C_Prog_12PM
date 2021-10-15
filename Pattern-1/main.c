#include <stdio.h>
#include <stdlib.h>

//*****
//*****
//*****
//*****
//*****
//
//rows = 5
//cols = 5

/*
    11111
    22222
    33333
    44444
    55555

    12345
    12345
    12345
    12345
    12345


*/

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++) // rows
    {
        for(j = 1; j <= 5; j++) // cols
        {
            //printf("*");
            //printf("%d", i);
            printf("%d", j);
        }
        printf("\n");
    }


    return 0;
}
