#include <stdio.h>
#include <stdlib.h>

//2. function with arguments and without return type.

//Function prototype: void Add(int a, int b)
void Add(int a, int b) // int a, int b - Formal Arguments / Function Parameters
{
    printf("Addition is: %d\n", (a + b));
}

int main()
{
    Add(10, 20); // 10, 20 - Actual Arguments / function arguments
    Add(30, 50);

    return 0;
}
