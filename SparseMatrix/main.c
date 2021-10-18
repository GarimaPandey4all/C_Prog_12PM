#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5], i, j, rows, cols, count = 0;

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

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if(count > (rows * cols)/2)
    {
        printf("Sparse Matrix");
    }
    else {
        printf("Not Sparse Matrix");
    }

    return 0;
}
