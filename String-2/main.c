#include <stdio.h>
#include <stdlib.h>

//String Predefined Functions:
//
//    1. String Length
//    2. String copy
//    3. String Compare
//    4. String Concatenation/Joining
//    5. String LowerCase
//    6. String UpperCase

int main()
{
    char name[10];
    char str1[10] = "Welcome";
    char str2[10] = "Welcome";

    printf("Enter any string:");
    gets(name);

    printf("Length of the String: %d\n", strlen(name));

    //printf("String Concatenation is: %s\n", strcat(str1, str2));

//    printf("String Copy: %s\n", strcpy(str1, str2));
//
//    printf("String Copy: %s\n", strcpy(str1, "Brain"));
//
//    printf("String LowerCase is: %s\n", strlwr(str1));
//
//    printf("String UpperCase is: %s\n", strupr(str2));

    if(strcmp(str1, str2) == 0)
    {
        printf("Both Strings are Same");
    }
    else
    {
        printf("Strings are not Same");
    }

    return 0;
}
