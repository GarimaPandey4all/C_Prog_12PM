#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2][2];

    printf("Enter values in 3D-Array");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            scanf("%d", &arr[i][j][k]);
        }
    }

    printf("Values in 3D-Array are:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            printf("%d  ", arr[i][j][k]);
        }
    }

    return 0;
}

