#include <stdio.h>
#include <stdlib.h>

//4 function with arguments and with return type.


int Add(int a, int b)
{
    return (a + b);
}

int main()
{

    int result = Add(10, 20);

    printf("Addition is: %d", result);

    return 0;
}
