/*
Question:
Write a C program to find the sum of digits of a number until a single digit is occurred
*/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x == 0)
        printf("%d", 0);
    else if (x % 9 == 0)
        printf("%d", 9);
    else
        printf("%d", x % 9);

    printf("\n");
 
   return 0;
}
