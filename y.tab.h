/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT_CONST = 258,
    FLOAT_CONST = 259,
    IDENTIFIER = 260,
    OP_EQUAL = 261,
    OP_POW = 262,
    STMT_TERMINATOR = 263,
    OP_PLUS = 264,
    OP_MINUS = 265,
    OP_MULT = 266,
    OP_DIV = 267,
    KEYWORD_CONTINUE = 268,
    KEYWORD_IF = 269,
    KEYWORD_ELSE = 270,
    COMMA = 271,
    L_BRACE = 272,
    R_BRACE = 273,
    AND = 274,
    OR = 275,
    OP_LT = 276,
    OP_GT = 277,
    OP_LTE = 278,
    OP_GTE = 279,
    NOT = 280,
    NOT_EQ = 281,
    EQ_EQ = 282,
    KEYWORD_FOR = 283,
    KEYWORD_WHILE = 284,
    KEYWORD_RETURN = 285,
    NEWLINE = 286,
    KEYWORD_PUBLIC = 287,
    KEYWORD_PRIVATE = 288,
    KEYWORD_PROTECTED = 289,
    KEYWORD_ARGS = 290,
    KEYWORD_CLASS = 291,
    KEYWORD_STRING = 292,
    KEYWORD_INT = 293,
    KEYWORD_FLOAT = 294,
    KEYWORD_BOOLEAN = 295,
    KEYWORD_LONG = 296,
    KEYWORD_DOUBLE = 297,
    KEYWORD_BREAK = 298,
    XOR_EQ = 299,
    MINUS_EQ = 300,
    KEYWORD_VOID = 301,
    KEYWORD_STATIC = 302,
    KEYWORD_TRUE = 303,
    KEYWORD_FALSE = 304,
    KEYWORD_FINAL = 305,
    LSHIFT = 306,
    RSHIFT = 307,
    BITWISE_AND = 308,
    BITWISE_OR = 309,
    PLUS_EQ = 310,
    PLUS_PLUS = 311,
    MULT_EQ = 312,
    DIV_EQ = 313,
    MOD_EQ = 314,
    OR_EQ = 315,
    KEYWORD_NULL = 316,
    KEYWORD_DO = 317,
    MINUS_MINUS = 318,
    AND_EQ = 319,
    L_BRACKET = 320,
    R_BRACKET = 321,
    KEYWORD_CASE = 322,
    KEYWORD_DEFAULT = 323,
    KEYWORD_SWITCH = 324,
    KEYWORD_COLON = 325
  };
#endif
/* Tokens.  */
#define INT_CONST 258
#define FLOAT_CONST 259
#define IDENTIFIER 260
#define OP_EQUAL 261
#define OP_POW 262
#define STMT_TERMINATOR 263
#define OP_PLUS 264
#define OP_MINUS 265
#define OP_MULT 266
#define OP_DIV 267
#define KEYWORD_CONTINUE 268
#define KEYWORD_IF 269
#define KEYWORD_ELSE 270
#define COMMA 271
#define L_BRACE 272
#define R_BRACE 273
#define AND 274
#define OR 275
#define OP_LT 276
#define OP_GT 277
#define OP_LTE 278
#define OP_GTE 279
#define NOT 280
#define NOT_EQ 281
#define EQ_EQ 282
#define KEYWORD_FOR 283
#define KEYWORD_WHILE 284
#define KEYWORD_RETURN 285
#define NEWLINE 286
#define KEYWORD_PUBLIC 287
#define KEYWORD_PRIVATE 288
#define KEYWORD_PROTECTED 289
#define KEYWORD_ARGS 290
#define KEYWORD_CLASS 291
#define KEYWORD_STRING 292
#define KEYWORD_INT 293
#define KEYWORD_FLOAT 294
#define KEYWORD_BOOLEAN 295
#define KEYWORD_LONG 296
#define KEYWORD_DOUBLE 297
#define KEYWORD_BREAK 298
#define XOR_EQ 299
#define MINUS_EQ 300
#define KEYWORD_VOID 301
#define KEYWORD_STATIC 302
#define KEYWORD_TRUE 303
#define KEYWORD_FALSE 304
#define KEYWORD_FINAL 305
#define LSHIFT 306
#define RSHIFT 307
#define BITWISE_AND 308
#define BITWISE_OR 309
#define PLUS_EQ 310
#define PLUS_PLUS 311
#define MULT_EQ 312
#define DIV_EQ 313
#define MOD_EQ 314
#define OR_EQ 315
#define KEYWORD_NULL 316
#define KEYWORD_DO 317
#define MINUS_MINUS 318
#define AND_EQ 319
#define L_BRACKET 320
#define R_BRACKET 321
#define KEYWORD_CASE 322
#define KEYWORD_DEFAULT 323
#define KEYWORD_SWITCH 324
#define KEYWORD_COLON 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 15 "./src/parser.y" /* yacc.c:1909  */

char value;

#line 198 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
