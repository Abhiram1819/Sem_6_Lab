/*
Question:
Use LEX and YACC to implement parser for Unambiguous grammar
*/

LEX File:
%option noyywrap 
%{
	#include<stdio.h>
	#include"y.tab.h"
	void yyerror(char *s);
	extern int yylval;
%}
digit [0-9]
%%
{digit}+	{yylval=atoi(yytext);return NUM;}  
[-+*/\n]	{return *yytext;}
\(		{return *yytext;}
\)		{return *yytext;}
.		{yyerror("syntax error");}
%%
