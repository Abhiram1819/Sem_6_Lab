/*
Question:
Write a C program that gets string as input, checks whether the string satisfies the given Context Free Grammar and displays the parsing 
table as output.

Input: a+a*a

Output: $a  +a*a$ shift->a$E  +a*a$ Reduce by E->a$E+   a*a$ shift->+$E+a    *a$ shift->a$E+E    *a$ Reduce by E->a$E    *a$ Reduce by E->E+E$E*     a$ shift->*$E*a      $ shift->a$E*E      $ Reduce by E->a$E      $ Reduce by E->E*E$E      $ Accept
*/

#include <stdio.h>
#include <string.h>
int z, i, j, c;
char a[16], stk[15];
void reduce();
int main()
{
    scanf("%s", a);
    c = strlen(a);
    a[c] = '$';
    stk[0] = '$';
    for (i = 1, j = 0; j < c; i++, j++)
    {
        if (a[j] == 'a')
        {
            stk[i] = a[j];
            stk[i + 1] = '\0';
            a[j] = ' ';
            printf("%s %s shift->a", stk, a);
            reduce();
        }
        else
        {
            stk[i] = a[j];
            stk[i + 1] = '\0';
            a[j] = ' ';
            printf("%s %s shift->%c", stk, a, stk[i]);
            reduce();
        }
    }
    if (a[j] == '$')
    {
        reduce();
        if ((stk[1] == 'E') && (stk[2] == '\0'))
            printf("%s %s Accept", stk, a);
        else
            printf("%s %serror", stk, a);
    }

    return 0;
}

void reduce()
{
    for (z = 1; z <= c; z++)
        if (stk[z] == 'a')
        {
            stk[z] = 'E';
            stk[z + 1] = '\0';
            printf("%s %s Reduce by E->a", stk, a);
        }
    for (z = 1; z <= c; z++)
        if (stk[z] == 'E' && stk[z + 1] == '+' && stk[z + 2] == 'E')
        {
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("%s %s Reduce by E->E+E", stk, a);
            i = i - 2;
        }
    for (z = 1; z <= c; z++)
        if (stk[z] == 'E' && stk[z + 1] == '*' && stk[z + 2] == 'E')
        {
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("%s %s Reduce by E->E*E", stk, a);
            i = i - 2;
        }
    for (z = 1; z <= c; z++)
        if (stk[z] == '(' && stk[z + 1] == 'E' && stk[z + 2] == ')')
        {
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("%s %s Reduce by E->(E)", stk, a);
            i = i - 2;
        }
}