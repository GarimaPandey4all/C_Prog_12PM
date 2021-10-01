#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("And Bitwise: %d\n", (a & b));
    printf("Or Bitwise: %d\n", (a | b));
    printf("Not/Ones Bitwise: %d\n", (~a));
    printf("X-Or Bitwise: %d\n", (a ^ b));
    printf("Left Shift Bitwise: %d\n", (a << 1));
    printf("Right Shift Bitwise: %d\n", (a >> 1));

    return 0;
}
