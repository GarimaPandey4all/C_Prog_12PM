#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    a = 5, b = 10

    printf("Equal to: %d\n", (a == b));// 0
    printf("Not Equal to: %d\n", (a != b)); // 1
    printf("Greater than: %d\n", (a > b)); // 0
    printf("Less than: %d\n", (a < b)); // 1
    printf("Greater than and Equal to: %d\n", (a >= b)); // 0
    printf("Less than and Equal to: %d\n", (a <= b)); // 1

    return 0;
}
