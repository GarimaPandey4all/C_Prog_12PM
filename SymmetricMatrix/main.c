#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5], i, j, temp[5][5], rows, cols, status = 1;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    printf("Enter number of columns:");
    scanf("%d", &cols);

    printf("Enter values in Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Values in Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    //Transpose

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            temp[j][i] = matrix[i][j];
        }
    }

    printf("Transpose Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", temp[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(temp[i][j] != matrix[i][j])
            {
                status++; // 2
                break;
            }
        }
    }

    if(status == 1)
    {
        printf("Symmetric Matrix");
    }
    else {
        printf("Not Symmetric Matrix");
    }

    return 0;
}
