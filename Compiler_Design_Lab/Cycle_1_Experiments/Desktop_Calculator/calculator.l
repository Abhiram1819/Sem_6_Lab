/*
Question:
Use LEX and YACC to implement parser for Ambiguous grammar
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
{digit}+		{yylval=atoi(yytext);return NUM;}  
[a-z]		{yylval=toascii(*yytext)-97;return ID;}
[A-Z]		{yylval=toascii(*yytext)-65;return ID;}
[-+*/=\n]		{return *yytext;}
\(			{return *yytext;}
\)			{return *yytext;}
.			{yyerror("syntax error");}
%%
