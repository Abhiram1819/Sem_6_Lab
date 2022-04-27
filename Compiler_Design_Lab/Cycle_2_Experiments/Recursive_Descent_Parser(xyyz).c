/*
Question: Write a C program for the below given production and parse the corresponding string using Recursive Descent Parser.

L -> xL'z

L' -> yz | z

Input: xyyz

Output: L->xL'zL'->yzString sucessfully parsed!
*/

#include<stdio.h>
#include<string.h>

int i=0 ,f=0;
char str[30];
int L();
int LPrime();

int L()
{
printf("L->xL'y");
i++;
LPrime();
return 0;
}


int LPrime()
{
	if(str[i]=='y')
		{
		printf("L'->yz");
		i=i+2;
		}
	else if(str[i]=='z')
	{
		printf("L'->z");
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
L();
if((str[i]=='$')&&(f==0))
printf("String sucessfully parsed!");
else
printf("Syntax Error!");
return 0;
}
