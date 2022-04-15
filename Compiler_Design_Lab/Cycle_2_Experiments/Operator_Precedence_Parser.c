/*
Question: Write a C program to parse the given string using Operator Precedence Parser.

Input: ->>><><><>>><<<-

Output: Shift aReduceShift +Shift aReduceShift *Shift aReduceReduceReduceString is accepted
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char stack[20], opt[10][10];
    int i, j, k, n = 4, top = 0, col, row;
    char ter[] = {'a', '+', '*', '$'};
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%c", &opt[i][j]);
        }
    }
    stack[top] = '$';
    char ip[] = {'a', '+', 'a', '*', 'a', '$'};
    i = 0;
    while (i <= strlen(ip))
    {
        for (k = 0; k < n; k++)
        {
            if (stack[top] == ter[k])
                row = k;
            if (ip[i] == ter[k])
                col = k;
        }
        if ((stack[top] == '$') && (ip[i] == '$'))
        {
            printf("String is accepted");
            break;
        }
        else if ((opt[row][col] == '<') || (opt[row][col] == '='))
        {
            stack[++top] = opt[row][col];
            stack[++top] = ip[i];
            printf("Shift %c", ip[i]);
            i++;
        }
        else
        {
            if (opt[row][col] == '>')
            {
                while (stack[top] != '<')
                    --top;
                top = top - 1;
                printf("Reduce");
            }
            else
            {
                printf("String is not accepted");
                break;
            }
        }
    }
    return 0;
}
