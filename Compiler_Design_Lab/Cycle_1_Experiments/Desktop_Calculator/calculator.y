/*
Question:
Use LEX and YACC to implement parser for Ambiguous grammar
*/

Yacc File:
%{
	#include<stdio.h>
	void yyerror(char*);
	extern int yylex(void);
	int val[26];
%}
%token NUM ID
%% 
		 
S:
S E '\n'		{printf("%d\n",$2);} 
| S ID '=' E '\n'	{val[$2]=$4;}
|
;
E:
E '+' T		{$$=$1+$3;}
|E '-' T		{$$=$1-$3;}
|T			{$$=$1;}
T:
T '*' F		{$$=$1*$3;}
|T '/' F		{$$=$1/$3;}
|F			{$$=$1;}
F:
'(' E ')'		{$$=$2;}
|NUM		{$$=$1;} 
|ID			{$$=val[$1];}
%%
void yyerror(char *s)
{
printf("%s",s);
}
int main()
{
yyparse();
return 0;
}		 

