/*
Question: Write a C program for the below given production and parse the corresponding string using Recursive Descent Parser.

S -> ABCDE

A -> a | ε

B -> b | ε

C -> c

D -> d | ε

E -> e | ε

Input: abcde

Output: S->ABCDEA->aB->bC->cD->dE->estring sucessfully parsed!
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int S();
int A();
int B();
int C();
int D();
int E();

int i = 0, f = 0;
char str[30];

int main()
{
    int len;
    scanf("%s", str);
    len = strlen(str);
    str[len] = '$';
    S();
    if ((str[i] == '$') && (f == 0))
        printf("string sucessfully parsed!");
    else
        printf("syntax Error!");
    return 0;
}

int S()
{
    printf("S->ABCDE");
    A();
    B();
    C();
    D();
    E();
    return 0;
}

int A()
{
    if (str[i] == 'a')
    {
        printf("A->a");
        i++;
    }
    else
    {
        printf("A->^");
        i++;
    }
    return 0;
}

int B()
{
    if (str[i] == 'b')
    {
        printf("B->b");
        i++;
    }
    else
    {
        printf("B->^");
        i++;
    }
    return 0;
}

int C()
{
    if (str[i] == 'c')
    {
        printf("C->c");
        i++;
    }
    else
    {
        f = 1;
    }
    return 0;
}

int D()
{
    if (str[i] == 'd')
    {
        printf("D->d");
        i++;
    }
    else
    {
        printf("D->^");
        i++;
    }
    return 0;
}

int E()
{
    if (str[i] == 'e')
    {
        printf("E->e");
        i++;
    }
    else
    {
        printf("E->^");
        i++;
    }
    return 0;
}
