#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char i, j;
    int i, j;

//    ASCII Characters:
//
//    A - 65 to Z - 90
//    a - 97 to z - 122

//    for(i = 'A'; i <= 'E'; i++)
//    {
//        for(j = 'A'; j <= 'E'; j++)
//        {
//    for(i = 65; i <= 69; i++)
//    {
//        for(j = 65; j <= 69; j++)
//        {
    for(i = 97; i <= 101; i++)
    {
        for(j = 97; j <= 101; j++)
        {
            //printf("%c", i);
            printf("%c", j);
        }

        printf("\n");
    }

    return 0;
}
