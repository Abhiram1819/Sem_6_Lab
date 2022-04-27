/*
Question: Write a C program to parse the given string using Recursive Descent Parser.

Note: Take len variable's value as 3 and increment i value (in both user defined function) according to the number of variables in the given production.

Input: abbc

Output: $z +z*z$ shift->z$L +z*z$ Reduce by L->z$L+ z*z$ shift->+$L+z *z$ shift->z$L+L *z$ Reduce by L->z$L *z$ Reduce by L->L+L$L* z$ shift->*$L*z $ shift->z$L*L $ Reduce by L->z$L $ Reduce by L->L*L$L $ Accept
*/

#include<stdio.h>
#include<string.h>

int i=0 ,f=0;
char str[30];
int S();
int B();

int S()
{
printf("S->aBc");
i++;
B();
return 0;
}


int B()
{
	if(str[i]=='b')
		{
		printf("B->bc");
		i=i+2;
		}
	else if(str[i]=='c')
	{
		printf("B->c");
	}
	else
		f=1;
return 0;
}

int main()
{
int len;
scanf("%s",str);
len=3;
str[len]='$';
S();
if((str[i]=='$')&&(f==0))
printf("String sucessfully parsed!");
else
printf("Syntax Error!");
return 0;
}
