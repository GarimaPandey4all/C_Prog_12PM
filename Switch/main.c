#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Menu Driven Program / Switch

    int choice;
    int a, b;

    while(1) // always true - infinite loop
    {

        printf("\nPress 1. Addition");
        printf("\nPress 2. Subtraction");
        printf("\nPress 3. Multiplication");
        printf("\nPress 4. Division");
        printf("\nPress 5. Exit");
        printf("\n\nEnter Your Choice:");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);
            printf("Addition is: %d\n", (a + b));
            break;

        case 2:
            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);
            printf("Subtraction is: %d\n", (a - b));
            break;

        case 3:
            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);
            printf("Multiplication is: %d\n", (a * b));
            break;

        case 4:
            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);
            printf("Division is: %d\n", (a / b));
            break;

        case 5:
            exit(0); // exit the program

        default:
            printf("Invalid Choice");

        }
    }
    //printf("Outside the Switch");

    return 0;
}
