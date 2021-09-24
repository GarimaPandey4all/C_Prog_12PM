#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variable= vary or change = container
   // constant = fixed value

    int a, b; // variable Declaration/Creation
    const float pi = 3.14f;

    // pi = 35.7f; // error

    printf("%.2f\n", pi);

    //Initialization / Assignment
    a = 10;
    b = 20;

    printf("%d %d\n", a, b); // \n - new line or enter

    a = 40;
    b = 60;

    printf("%d %d", a, b);

    return 0;
}
