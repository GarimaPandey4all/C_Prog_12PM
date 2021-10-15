#include <stdio.h>
#include <stdlib.h>

/*
    Loops: Repetition/Iteration

    1. for loop
    2. while loop
    3. do-while loop

*/

int main()
{
    int i = 1, n;

    printf("Enter any number:");
    scanf("%d", &n);

    do {

        printf("%d * %d = %d\n", n, i, n * i);
        i++;

    }while(i <= 10);


//    while(i <= 10)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//        i++;
//    }

//    for(i = 1; i <= 10; i++)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//    }

//    for(i = 1; i <= 10; i++)
//    {
//        printf("Hello World\n");
//    }

    return 0;
}
