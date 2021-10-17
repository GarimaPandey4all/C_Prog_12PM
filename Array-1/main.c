#include <stdio.h>
#include <stdlib.h>

int main()
{
//    Array: It is used to store multiple values in a single variable.
//    - It is a collection of similar types of data.
//    - by using index number we can access any location of the array.
//
//    int marks[5]; // [] - subscript operator / closed bracket

    int arr[5]; // array declaration

    //Traditional way of initialization
    int arr2[5] = {10, 20, 30, 40, 50}; // array declaration and initialization

    printf("%d\n", arr2[2]);
    printf("%d\n", arr2[4]);

    for(int i = 0; i < 5; i++)
    {
        printf("%d  ", arr2[i]);
    }

    //Compile time way of initialization
    int arr3[] = {1, 2, 3};

    for(int i = 0; i < 3; i++)
    {
        printf("%d  ", arr3[i]);
    }

    printf("\nEnter values:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Values in array are:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d  ", arr[i]);
    }


    return 0;
}
