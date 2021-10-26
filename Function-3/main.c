#include <stdio.h>
#include <stdlib.h>

//3. function without arguments and with return type.


int Add()
{
    int a, b;

    printf("Enter any number for a and b:");
    scanf("%d %d", &a, &b);

    //printf("Addition is: %d\n", (a + b));
    return (a + b);
}

int main()
{

    int result = Add();

    printf("Addition is: %d", result);

    return 0;
}
