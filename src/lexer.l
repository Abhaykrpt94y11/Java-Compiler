%{
#include "y.tab.h"
#include <stdlib.h>
#include <stdio.h>
int yyval;
int num_lines=0;
int num_slcomments=0;
int num_mlcomments=0;

char ch='p';
int i = 0;

%}
%%
"//"[^\n]* {num_slcomments++;}
"/""*"[^"*""/"]*"*""/"    {num_mlcomments++;}
[0-9]+[0-9]*	{ yylval.value=yytext[0]; return INT_CONST; }
([0-9]+\.([0-9]+)?|\.[0-9]+)([eE][+-]?[0-9]+)? {yylval.value=yytext[0];return FLOAT_CONST; }

[\t\f\r\s] {}
"\n"	{ }
"+=" {return PLUS_EQ; }
"++" {yylval.value=yytext[0];return PLUS_PLUS;}
"--" {yylval.value=yytext[0];return MINUS_MINUS;}
"-=" {yylval.value=yytext[0];return MINUS_EQ;}
"*=" {yylval.value=yytext[0];return MULT_EQ;}
"/=" {yylval.value=yytext[0];return DIV_EQ;}
"%=" {yylval.value=yytext[0];return MOD_EQ;}
"==" {yylval.value=yytext[0];return EQ_EQ;}
"!=" {yylval.value=yytext[0];return NOT_EQ;}
"&=" {yylval.value=yytext[0];return AND_EQ;}
"^=" {yylval.value=yytext[0];return XOR_EQ;}
"|=" {yylval.value=yytext[0];return OR_EQ;}
"," { yylval.value=yytext[0];return COMMA;}
"+" {yylval.value=yytext[0]; return OP_PLUS;} 
"("	{yylval.value=yytext[0]; return '('; }
")"	{yylval.value=yytext[0]; return  ')';}
"-" {yylval.value=yytext[0];return OP_MINUS;}
"*" {yylval.value=yytext[0];return OP_MULT;}
"/" {yylval.value=yytext[0];return OP_DIV;}
"=" {yylval.value=yytext[0];return OP_EQUAL;}
"^" {yylval.value=yytext[0];return OP_POW;}
";"	{yylval.value=yytext[0];return STMT_TERMINATOR;}
"[" {yylval.value=yytext[0];return L_BRACKET;}
"]" {yylval.value=yytext[0];return R_BRACKET;}
"{" {yylval.value=yytext[0];return L_BRACE;}
"}" {yylval.value=yytext[0];return R_BRACE;}
">=" {yylval.value=yytext[0];return OP_GTE;}
"<=" {yylval.value=yytext[0];return OP_LTE;}	
"<<" {yylval.value=yytext[0];return LSHIFT;}
">>" {yylval.value=yytext[0];return RSHIFT;}
">" {yylval.value=yytext[0];return OP_GT;}
"<" {yylval.value=yytext[0];return OP_LT;}
"&&" {yylval.value=yytext[0];return AND;}
"||" {yylval.value=yytext[0];return OR; }
"&" {yylval.value=yytext[0];return BITWISE_AND;}
"|" {yylval.value=yytext[0];return BITWISE_OR;}
"!" {yylval.value=yytext[0];return NOT;}
"case" {yylval.value=yytext[0];return KEYWORD_CASE;}
"switch" {yylval.value=yytext[0];return KEYWORD_SWITCH;}
":" {yylval.value=yytext[0];return KEYWORD_COLON;}
"default" {yylval.value=yytext[0];return KEYWORD_DEFAULT;}
"String" {yylval.value=yytext[0];return KEYWORD_STRING;}
"args"		{yylval.value=yytext[0]; return KEYWORD_ARGS;}
"boolean"	{yylval.value=yytext[0];return KEYWORD_BOOLEAN;}
"break"		{yylval.value=yytext[0];return KEYWORD_BREAK;}
"continue"	{yylval.value=yytext[0];return KEYWORD_CONTINUE;}
"do"		{yylval.value=yytext[0];return KEYWORD_DO;}
"double"	{yylval.value=yytext[0];return KEYWORD_DOUBLE;}
"else"		{yylval.value=yytext[0];return KEYWORD_ELSE;}
"final"		{yylval.value=yytext[0];return KEYWORD_FINAL;}
"float"		{yylval.value=yytext[0]; return KEYWORD_FLOAT;}
"for"		{yylval.value=yytext[0];return KEYWORD_FOR;}
"if"		{yylval.value=yytext[0];return KEYWORD_IF;}
"int"		{yylval.value=yytext[0];  return KEYWORD_INT;}
"class"     {yylval.value=yytext[0]; return KEYWORD_CLASS;}
"long"		{yylval.value=yytext[0];return KEYWORD_LONG;}
"private"	{yylval.value=yytext[0]; return KEYWORD_PRIVATE;}	
"public"	{yylval.value=yytext[0]; return KEYWORD_PUBLIC;}
"return"	{yylval.value=yytext[0];return KEYWORD_RETURN;}
"static"	{yylval.value=yytext[0];return KEYWORD_STATIC;}
"void"		{yylval.value=yytext[0];return KEYWORD_VOID;}
"while"		{yylval.value=yytext[0];return KEYWORD_WHILE;}
"null"		{yylval.value=yytext[0];return KEYWORD_NULL;}
"true"		{yylval.value=yytext[0];return KEYWORD_TRUE;}
"false"		{yylval.value=yytext[0];return KEYWORD_FALSE;}
[a-zA-Z]|[a-zA-Z0-9]|[_a-zA-Z]|[_a-zA-Z0-9]|[$a-zA-Z]|[$a-zA-Z0-9]{0,30}  {yylval.value=yytext[0];return IDENTIFIER;}
%%
