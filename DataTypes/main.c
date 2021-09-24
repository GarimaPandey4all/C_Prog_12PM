#include <stdio.h>
#include <stdlib.h>

    //1 byte = 8 bits

int main()
{
    int a = 10;  // 2 or 4 bytes

    //2 - 16 bit compiler - turbo
    //4 - 32 bit compiler - code::blocks

    float b = 34.6f; // 4 bytes = 32 bits
    char c = 'F'; // 1 byte
    double d = 67.89; // 8 bytes

    printf("Size of Int: %d\n", sizeof(a));
    printf("Size of char: %d\n", sizeof(char));
    printf("Size of float: %d\n", sizeof(float));
    printf("Size of double: %d\n", sizeof(d));

    return 0;
}
