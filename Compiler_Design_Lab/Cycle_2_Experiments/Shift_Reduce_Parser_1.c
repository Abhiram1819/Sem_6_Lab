/*
Question:
Write a C program that gets string as input, checks whether the string satisfies the given Context Free Grammar and displays the parsing 
table as output.

Input: z+z*z

Output: $z +z*z$ shift->z$L +z*z$ Reduce by L->z$L+ z*z$ shift->+$L+z *z$ shift->z$L+L *z$ Reduce by L->z$L *z$ Reduce by L->L+L$L* z$ shift->*$L*z $ shift->z$L*L $ Reduce by L->z$L $ Reduce by L->L*L$L $ Accept
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
        if (a[j] == 'z')
        {
            stk[i] = a[j];
            stk[i + 1] = '\0';
            a[j] = ' ';
            printf("%s %s shift->z", stk, a);
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
        if ((stk[1] == 'L') && (stk[2] == '\0'))
            printf("%s %s Accept", stk, a);
        else
            printf("%s %serror", stk, a);
    }

    return 0;
}

void reduce()
{
    for (z = 1; z <= c; z++)
        if (stk[z] == 'z')
        {
            stk[z] = 'L';
            stk[z + 1] = '\0';
            printf("%s %s Reduce by L->z", stk, a);
        }
    for (z = 1; z <= c; z++)
        if (stk[z] == 'L' && stk[z + 1] == '+' && stk[z + 2] == 'L')
        {
            stk[z] = 'L';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("%s %s Reduce by L->L+L", stk, a);
            i = i - 2;
        }
    for (z = 1; z <= c; z++)
        if (stk[z] == 'L' && stk[z + 1] == '*' && stk[z + 2] == 'L')
        {
            stk[z] = 'L';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("%s %s Reduce by L->L*L", stk, a);
            i = i - 2;
        }
    for (z = 1; z <= c; z++)
        if (stk[z] == '(' && stk[z + 1] == 'L' && stk[z + 2] == ')')
        {
            stk[z] = 'L';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0';
            printf("%s %s Reduce by L->(L)", stk, a);
            i = i - 2;
        }
}
