#include <stdio.h>
#include <stdlib.h>

//function has four types:
//
//    1. function without arguments and without return type.
//    2. function with arguments and without return type.
//    3. function without arguments and with return type.
//    4. function with arguments and with return type.

//returntype functionname()
//{
//
//}

//1. function without arguments and without return type.

//function declaration (optional)
//void Add();

//function definition
//no return - void - null or empty
void Add()
{
    int a, b;

    printf("Enter any number for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition is: %d\n", (a + b));
}

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        Add();
    }
//    Add(); // function calling
//    Add();
//    Add();

    return 0;
}
