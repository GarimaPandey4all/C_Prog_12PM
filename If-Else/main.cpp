#include <iostream>

using namespace std;

//Decision Making/Conditional Statement:
//
//    1. If- else
//    2. If- else if - else
//    3. Switch
//    4. conditional operator/ Ternary Operator (Shorthand of if-else)


int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf(" A is Greater");
    }
    else {
        printf("B is Greater");
    }


    return 0;
}
