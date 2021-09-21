#include<stdio.h>
/*
# - Pre-Processor Directive
stdio.h : header file
standard Input / Output
*/

void main()    // main() - entry point
{
   int a, b;
   clrscr(); //clear screen
   printf("Enter any value for a and b:"); // print the output on the output screen
   scanf("%d", &a);	   // Read User Input
   scanf("%d", &b);
  // %d - Format Specifier
  // & - address of operator
  printf("Addition is: %d", (a + b));
  getch(); //get character
}