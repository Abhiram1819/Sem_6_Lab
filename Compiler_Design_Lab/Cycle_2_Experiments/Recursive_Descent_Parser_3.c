/*
Question: Write a C program for the below given production and parse the corresponding string using Recursive Descent Parser.

L -> VWXYZ

V -> z | ε

W -> y | ε

X -> x

Y -> w | ε

Z -> v | ε

Input: zyxwv

Output: L->VWXYZV->zW->yX->xY->wZ->vstring sucessfully parsed!
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int L();
int V();
int W();
int X();
int Y();
int Z();

int i = 0, f = 0;
char str[30];

int main()
{
    int len;
    scanf("%s", str);
    len = strlen(str);
    str[len] = '$';
    L();
    if ((str[i] == '$') && (f == 0))
        printf("string sucessfully parsed!");
    else
        printf("syntax Error!");
    return 0;
}

int L()
{
    printf("L->VWXYZ");
    V();
    W();
    X();
    Y();
    Z();
    return 0;
}

int V()
{
    if (str[i] == 'z')
    {
        printf("V->z");
        i++;
    }
    else
    {
        printf("V->^");
        i++;
    }
    return 0;
}

int W()
{
    if (str[i] == 'y')
    {
        printf("W->y");
        i++;
    }
    else
    {
        printf("W->^");
        i++;
    }
    return 0;
}

int X()
{
    if (str[i] == 'x')
    {
        printf("X->x");
        i++;
    }
    else
    {
        f = 1;
    }
    return 0;
}

int Y()
{
    if (str[i] == 'w')
    {
        printf("Y->w");
        i++;
    }
    else
    {
        printf("Y->^");
        i++;
    }
    return 0;
}

int Z()
{
    if (str[i] == 'v')
    {
        printf("Z->v");
        i++;
    }
    else
    {
        printf("Z->^");
        i++;
    }
    return 0;
}