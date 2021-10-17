#include <stdio.h>
#include <stdlib.h>

//Array: Initial Address / First Location's Address
//
//&arr[0] ---> base address
//
//Initial address or name of the array
//&arr[0] or arr

int main()
{
    int arr[2][3]; //2 - rows and 3 - cols, table or matrix

    printf("Enter values in 2D-Matrix");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Values in 2D-Matrixare:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
