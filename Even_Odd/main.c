#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter any number:");
    scanf("%d", &n);

//    Conditional Operator / Ternary
//
//    Ternary - 3, ? :
//
//    (Condition) ? True : False;

//    if((n % 2) == 0)
//    {
//        printf("Number is Even");
//    }
//    else {
//        printf("Number is Odd");
//    }

    ((n % 2) == 0) ? printf("Number is Even") : printf("Number is Odd");

    return 0;
}
