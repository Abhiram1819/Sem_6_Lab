/*
Question:
Implement Token Separation for given expression using LEX
*/

%option noyywrap
%{
	#include<stdio.h>
%}
letter [a-zA-Z]
digit [0-9]
operator [-+*/=]
special [;:.,'"]
ws [\n\t ]
%%
int|float|main|printf|scanf|if   printf("%s is a keyword\n",yytext);
{letter}({letter}|{digit})*      printf("%s is a variable\n",yytext);
{digit}+			 printf("%s is a integer number\n",yytext);
{digit}+.{digit}+		 printf("%s is a floating point number\n",yytext);
{operator}			 printf("%s is an operator\n",yytext);
{special}			 printf("%s is a punctuation\n",yytext);
\{				 printf("%s is a set open brackets\n",yytext);
\}				 printf("%s is a set close brackets\n",yytext);
\(				 printf("%s is a open brackets\n",yytext);
\)				 printf("%s is a close brackets\n",yytext);
{ws}	;
%%
int main(int argc,char *argv[])
{
	FILE *fp;
	fp=fopen("input.txt","r");
	if(fp==NULL)
	printf("no file exist");
	else
	{
	yyin=fp;
	yylex();
	}
	return 0;
}
