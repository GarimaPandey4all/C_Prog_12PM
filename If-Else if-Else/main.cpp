#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    printf("Enter a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("A is Greater");
    }
    else if(b > c)
    {
        printf("B is Greater");
    }
    else {
        printf("C is Greater");
    }

    return 0;
}
