#include <stdio.h>
#include <stdlib.h>

//0, 1, 1, 2, 3, 5, ..........

int main()
{
    int n1 = 0, n2 = 1, n3, n;

    printf("Enter any number:");
    scanf("%d", &n);

    printf("Fibonacci Series of %d is: %d %d", n, n1, n2);
    for(int i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
