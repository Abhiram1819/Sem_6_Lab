/*
Question: Write a C program for the below given production and parse the corresponding string using Recursive Descent Parser.

S -> (E) | b

E -> SE'

E' -> ,SE' | ^

Input: ((a,a),a)

Output: S->(L)L->SL'S->(L)L->SL'S->aL'->,SL'S->aL'->^L'->,SL'S->aL'->^string sucessfully parsed!
*/

#include <stdio.h>
#include <string.h>
int i = 0, f = 0;
char str[30];

int S();
int L();
int Lprime();

int S()
{
    if (str[i] == '(')
    {
        printf("S->(L)");
        i++;
        L();
        if (str[i] == ')')
        {
            i++;
        }
    }
    else if ((str[i] == 'a'))
    {
        printf("S->a");
        i++;
    }
    else
    {
        f = 1;
    }
    return 0;
}

int L()
{
    printf("L->SL'");
    S();
    Lprime();
    return 0;
}

int Lprime()
{
    if (str[i] == ',')
    {
        printf("L'->,SL'");
        i++;
        S();
        Lprime();
    }
    else if ((str[i] == '^') || (str[i] == ')'))
    {
        printf("L'->^");
    }
    return 0;
}

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
