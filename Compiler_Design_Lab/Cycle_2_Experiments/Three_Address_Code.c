/*
Question: Write a C program to generate intermediate code in three address code format for any given string.

Input: a:=b+c-d*e/f

Output: Z:=e/fa:=b+c-d*ZY:=d*Za:=b+c-YX:=b+ca:=X-YW:=X-Ya:=Wa:=W
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i = 1, j = 0, no = 0, tmpch = 90;
char str[100], left[15], right[15];
int findopr();
int explore();
int fleft(int);
int fright(int);
struct exp
{
    int pos;
    char op;
} k[15];
int main()
{
    scanf("%s", str);
    findopr();
    explore();
    return 0;
}
int findopr()
{
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == ':')
        {
            k[j].pos = i;
            k[j++].op = ':';
        }
    }
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == '/')
        {
            k[j].pos = i;
            k[j++].op = '/';
        }
    }
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == '*')
        {
            k[j].pos = i;
            k[j++].op = '*';
        }
    }
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == '+')
        {
            k[j].pos = i;
            k[j++].op = '+';
        }
    }
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == '-')
        {
            k[j].pos = i;
            k[j++].op = '-';
        }
    }
    return 0;
}
int explore()
{
    i = 1;
    while (k[i].op != 0)
    {
        fleft(k[i].pos);
        fright(k[i].pos);
        str[k[i].pos] = tmpch--;
        printf("%c:=%s%c%s", str[k[i].pos], left, k[i].op, right);
        for (j = 0; j < strlen(str); j++)
            if (str[j] != '$')
                printf("%c", str[j]);
        i++;
    }
    fright(-1);
    if (no == 0)
    {
        fleft(strlen(str));
        printf("%s:=%s", right, left);
        exit(0);
    }
    printf("%s:=%c", right, str[k[--i].pos]);
    return 0;
}
int fleft(int x)
{
    int w = 0, flag = 0;
    x--;
    while (x != -1 && str[x] != '+' && str[x] != '*' && str[x] != '=' && str[x] != 0 && str[x] != '-' && str[x] != '/' && str[x] != ':')
    {
        if (str[x] != '$' && flag == 0)
        {
            left[w++] = str[x];
            left[w] = 0;
            str[x] = '$';
            flag = 1;
        }
        x--;
    }
    return 0;
}
int fright(int x)
{
    int w = 0, flag = 0;
    x++;
    while (x != -1 && str[x] != '+' && str[x] != '*' && str[x] != 0 && str[x] != '=' && str[x] != ':' && str[x] != '-' && str[x] != '/')
    {
        if (str[x] != '$' && flag == 0)
        {
            right[w++] = str[x];
            right[w] = 0;
            str[x] = '$';
            flag = 1;
        }
        x++;
    }
    return 0;
}
