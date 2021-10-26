#include <stdio.h>
#include <stdlib.h>
//
//n = 121
//
//121 = 121 = p
//123 = 321 = np

int main()
{
    int n, temp, rem, sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        // n = 123
        //n = 121, 12, 1
        rem = n % 10; // 1, 2, 1, 3
        sum = sum * 10 + rem; // 1, 12, 121, 3
        n = n / 10; // 12, 1, 0, 12
    }

    n = temp;

    if(n == sum)
    {
        printf("Palindrome Number");
    }
    else {
        printf("Not a Palindrome Number");
    }

    return 0;
}
