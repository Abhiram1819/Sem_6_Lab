/*
Question:
Write a c program to check the given number is palindrome
*/

#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("Given number is palindrome");
    else
        printf("Given number is not a palindrome");
    return 0;
}
