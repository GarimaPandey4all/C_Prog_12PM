#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    a = 10, b = 0

    printf("And Logical: %d\n", (a < 20 && b > 5)); // 0
    printf("OR Logical: %d\n", (a < 20 || b > 5)); // 1
    printf("Not Logical: %d\n", !(a && b)); // 1

    return 0;
}
