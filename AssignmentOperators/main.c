#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10; // = assignment operator

    a += 20; // shorthand: a = a + 20;

    printf("%d", a);

    a %= 5;

    a <<= 6;

    return 0;
}
