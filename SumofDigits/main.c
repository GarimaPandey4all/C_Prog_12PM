#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rem, sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10; // 1, 2, 1, 3
        sum = sum + rem; // 1, 12, 121, 3
        n = n / 10; // 12, 1, 0, 12
    }

    printf("Sum of Digits is: %d", sum);

}
