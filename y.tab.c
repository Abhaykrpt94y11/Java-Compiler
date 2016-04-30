/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "./src/parser.y" /* yacc.c:339  */

    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    using namespace std;
    extern FILE* yyin;
    void yyerror(const char *);
    int yylex(void);
    int lineno= 0;
    char v = 'a'-1;
    

#line 80 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 15 "./src/parser.y" /* yacc.c:355  */

char value;

#line 264 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   423

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      62,    63,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    64,    65,    66,
      67,    68,    69,    70,    71,    72
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    50,    51,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    79,    80,
      81,    82,    87,    88,    91,    96,    97,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   113,   114,   117,   118,
     119,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   139,   143,   144,   147,   151,   152,
     155,   156,   159,   160,   161,   162,   163,   164,   168,   169,
     172,   173,   174,   175,   176,   180,   181,   182,   186,   190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_CONST", "FLOAT_CONST", "IDENTIFIER",
  "OP_EQUAL", "OP_POW", "STMT_TERMINATOR", "OP_PLUS", "OP_MINUS",
  "OP_MULT", "OP_DIV", "KEYWORD_CONTINUE", "KEYWORD_IF", "KEYWORD_ELSE",
  "COMMA", "L_BRACE", "R_BRACE", "AND", "OR", "OP_LT", "OP_GT", "OP_LTE",
  "OP_GTE", "NOT", "NOT_EQ", "EQ_EQ", "KEYWORD_FOR", "KEYWORD_WHILE",
  "KEYWORD_RETURN", "NEWLINE", "KEYWORD_PUBLIC", "KEYWORD_PRIVATE",
  "KEYWORD_PROTECTED", "KEYWORD_ARGS", "KEYWORD_CLASS", "KEYWORD_STRING",
  "KEYWORD_INT", "KEYWORD_FLOAT", "KEYWORD_BOOLEAN", "KEYWORD_LONG",
  "KEYWORD_DOUBLE", "KEYWORD_BREAK", "XOR_EQ", "MINUS_EQ", "KEYWORD_VOID",
  "KEYWORD_STATIC", "KEYWORD_TRUE", "KEYWORD_FALSE", "KEYWORD_FINAL",
  "LSHIFT", "RSHIFT", "BITWISE_AND", "BITWISE_OR", "PLUS_EQ", "PLUS_PLUS",
  "MULT_EQ", "DIV_EQ", "MOD_EQ", "OR_EQ", "KEYWORD_NULL", "'('", "')'",
  "KEYWORD_DO", "MINUS_MINUS", "AND_EQ", "L_BRACKET", "R_BRACKET",
  "KEYWORD_CASE", "KEYWORD_DEFAULT", "KEYWORD_SWITCH", "KEYWORD_COLON",
  "$accept", "program", "class", "listofstatement", "statement",
  "variabledecl", "listofvars", "expression", "ifelse", "condition",
  "relationalexp", "forloop", "whileloop", "switch", "caselist", "case",
  "function", "parameters", "vartype", "return", "continue", "break", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41,   317,   318,   319,   320,   321,   322,
     323,   324,   325
};
# endif

#define YYPACT_NINF -54

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-54)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,   -22,     8,   -54,    13,   -54,    12,   262,   -54,   -54,
      88,    14,   -42,   -32,   -25,    28,   246,   231,   316,   -54,
     -54,   -54,   -54,   -54,    30,   316,    38,    27,   -17,    21,
     -54,   -54,   404,   -54,   -54,   -54,   -54,   -54,    47,   -54,
     -54,   -54,    93,    38,    38,    38,    49,    38,    38,    38,
      38,    60,    38,   -54,    93,    38,    93,   -54,   -54,    61,
     329,   268,    86,   316,    90,    94,   -54,    96,   110,   262,
      55,   -54,   -54,    38,    38,    38,    38,    38,     3,    95,
      38,   190,   105,   335,   341,   356,   -54,   362,   368,   374,
     380,   -54,   386,   308,    -7,   -54,   392,   171,   -54,   -54,
      97,   109,     5,   108,    96,    62,    68,    -1,   123,   -54,
     118,   129,   131,    16,    16,   131,   131,    38,    96,   316,
     136,   -54,   404,   -54,    38,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,    93,    93,   125,    38,   152,
     119,   126,   316,   -54,   162,   316,   316,   -54,   142,   122,
     404,   -54,   132,   187,   137,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   -54,   -54,   262,
     398,   262,   167,   316,   143,   -54,   155,   156,   163,   211,
     212,   214,   168,   220,    38,   221,   173,   182,   232,   236,
     237,    93,   -53,   262,   316,   252,   247,   116,   -54,   195,
     257,   262,   262,   262,   174,   261,   205,   117,   -54,   260,
     -54,   215,   280,   281,   244,   262,   293,   295,   298,   -54,
     227,   304,   -54,   -54,   -54,   -54,   262,   262,   259,   305,
     -54,   -54,   -54,   395,   262,   307,   399,   401,   -54,   262,
     402,   -54,   -54,   262,   403,   -54,   218,   -54,   -54
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     0,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    12,    11,     0,    13,
      15,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,    45,    86,     0,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,     3,     4,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,    21,     0,     0,     0,    50,     0,     0,    87,    85,
       0,     0,    36,     0,     0,     0,     0,    36,     0,    42,
       0,     0,    41,    37,    38,    39,    40,     0,     0,     0,
       0,    28,    60,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    26,    19,    18,
      22,    23,    24,    27,    25,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,    29,     0,     0,
      35,    32,     0,     0,     0,    59,    61,    51,    52,    53,
      54,    55,    56,    57,    58,    62,    63,    48,    49,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,    79,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,    66,
       0,     0,    67,    68,    72,    34,     0,     0,     0,     0,
      73,    75,    76,     0,     0,     0,     0,     0,    74,     0,
       0,    47,    64,     0,     0,    71,     0,    70,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -54,   -54,   -54,   166,   -29,   -54,    11,    32,   -54,   -50,
     -35,   -54,   -54,   -54,   -54,   206,   -54,    20,   -15,   -54,
     -54,   -54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    29,    30,    31,    79,    32,    33,    94,
      95,    34,    35,    36,   217,   218,    37,   162,    38,    39,
      40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      72,    62,    64,    65,     1,   117,    97,    82,     5,   117,
      67,   117,   145,   146,     4,   118,   215,   216,     6,   118,
      54,   118,    53,    73,     8,     9,    10,    76,    77,     7,
      55,     8,     9,    57,    11,    12,    58,    56,    66,    71,
     110,     8,     9,    57,    69,    70,   101,    60,   104,    13,
      14,    15,    78,    16,    17,    18,   147,    86,    68,    19,
      20,    21,    22,    23,    24,   119,   120,   152,    91,    98,
     120,    25,   120,   103,    81,    83,    84,    85,   108,    87,
      88,    89,    90,    26,    92,    27,    93,    96,    93,    59,
      26,   102,    28,   111,    42,   105,     8,     9,    57,   106,
      26,   107,   150,   121,   163,   112,   113,   114,   115,   116,
     177,   178,   122,   136,   151,   154,   153,    73,    80,    74,
      75,    76,    77,    73,   155,    74,    75,    76,    77,   161,
     156,   157,    43,    44,   159,   232,   158,   163,    73,   164,
     163,   163,   179,    45,    46,    47,    48,    49,    50,   160,
     193,   214,   195,    51,    52,    26,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   163,   181,
     185,   188,   184,   109,   219,   186,   187,    93,    93,   223,
     180,   182,   226,   227,   228,   189,   215,   216,   183,   163,
     145,   146,   191,   145,   146,   190,   239,    73,   123,    74,
      75,    76,    77,   197,   196,   192,   198,   245,   246,   124,
     125,   126,   127,   128,   129,   250,   130,   131,   199,   200,
     254,     8,     9,    10,   220,   201,   207,    72,   202,   203,
     204,    11,    12,    93,   149,   205,   258,   229,   206,   208,
     209,   132,   133,   134,   135,   210,    13,    14,    15,   211,
      16,    17,    18,   212,   213,   221,    19,    20,    21,    22,
      23,    24,   222,   224,   230,     8,     9,    10,    25,    19,
      20,    21,    22,    23,   225,    11,    12,   231,   234,   238,
      26,    63,    27,   235,    19,    20,    21,    22,    23,    28,
      13,    14,    15,    61,    16,    17,    18,   236,   237,   243,
      19,    20,    21,    22,    23,    24,    19,    20,    21,    22,
      23,   240,    25,   241,   100,    73,   242,    74,    75,    76,
      77,   244,   247,   248,    26,   251,    27,   124,   125,   126,
     127,   128,   129,    28,   130,   131,    73,    99,    74,    75,
      76,    77,    73,   137,    74,    75,    76,    77,    73,   138,
      74,    75,    76,    77,    19,    20,    21,    22,    23,   132,
     133,   134,   135,    73,   139,    74,    75,    76,    77,    73,
     140,    74,    75,    76,    77,    73,   141,    74,    75,    76,
      77,    73,   142,    74,    75,    76,    77,    73,   143,    74,
      75,    76,    77,    73,   144,    74,    75,    76,    77,    73,
     148,    74,    75,    76,    77,    73,   194,    74,    75,    76,
      77,    73,   249,    74,    75,    76,    77,   252,   253,   256,
     255,   257,     0,   233
};

static const yytype_int16 yycheck[] =
{
      29,    16,    17,    18,    32,     6,    56,    42,     0,     6,
      25,     6,    19,    20,    36,    16,    69,    70,     5,    16,
      62,    16,     8,     7,     3,     4,     5,    11,    12,    17,
      62,     3,     4,     5,    13,    14,     8,    62,     8,    18,
      69,     3,     4,     5,    17,    62,    61,    15,    63,    28,
      29,    30,     5,    32,    33,    34,    63,     8,    26,    38,
      39,    40,    41,    42,    43,    62,    67,    62,     8,     8,
      67,    50,    67,    62,    42,    43,    44,    45,    67,    47,
      48,    49,    50,    62,    52,    64,    54,    55,    56,    61,
      62,     5,    71,    38,     6,     5,     3,     4,     5,     5,
      62,     5,     5,     8,   119,    73,    74,    75,    76,    77,
     145,   146,    80,     8,     5,   104,     8,     7,    25,     9,
      10,    11,    12,     7,    62,     9,    10,    11,    12,   118,
      62,     8,    44,    45,     5,    18,    18,   152,     7,     3,
     155,   156,    17,    55,    56,    57,    58,    59,    60,   117,
     179,   201,   181,    65,    66,    62,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   183,    17,
       8,    29,   152,    63,   203,   155,   156,   145,   146,    63,
     148,    62,   211,   212,   213,    63,    69,    70,    62,   204,
      19,    20,     5,    19,    20,    63,   225,     7,     8,     9,
      10,    11,    12,   183,    37,    68,    63,   236,   237,    19,
      20,    21,    22,    23,    24,   244,    26,    27,    63,    63,
     249,     3,     4,     5,   204,    62,   194,   256,    17,    17,
      16,    13,    14,   201,    63,    67,    18,    63,    18,    18,
      67,    51,    52,    53,    54,    63,    28,    29,    30,    17,
      32,    33,    34,    17,    17,     3,    38,    39,    40,    41,
      42,    43,    15,    68,     3,     3,     4,     5,    50,    38,
      39,    40,    41,    42,    17,    13,    14,    72,    18,    35,
      62,    50,    64,    68,    38,    39,    40,    41,    42,    71,
      28,    29,    30,    47,    32,    33,    34,    17,    17,    72,
      38,    39,    40,    41,    42,    43,    38,    39,    40,    41,
      42,    18,    50,    18,    46,     7,    18,     9,    10,    11,
      12,    17,    63,    18,    62,    18,    64,    19,    20,    21,
      22,    23,    24,    71,    26,    27,     7,     8,     9,    10,
      11,    12,     7,     8,     9,    10,    11,    12,     7,     8,
       9,    10,    11,    12,    38,    39,    40,    41,    42,    51,
      52,    53,    54,     7,     8,     9,    10,    11,    12,     7,
       8,     9,    10,    11,    12,     7,     8,     9,    10,    11,
      12,     7,     8,     9,    10,    11,    12,     7,     8,     9,
      10,    11,    12,     7,     8,     9,    10,    11,    12,     7,
       8,     9,    10,    11,    12,     7,     8,     9,    10,    11,
      12,     7,    17,     9,    10,    11,    12,    18,    17,   253,
      18,    18,    -1,   217
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    74,    75,    36,     0,     5,    17,     3,     4,
       5,    13,    14,    28,    29,    30,    32,    33,    34,    38,
      39,    40,    41,    42,    43,    50,    62,    64,    71,    76,
      77,    78,    80,    81,    84,    85,    86,    89,    91,    92,
      93,    94,     6,    44,    45,    55,    56,    57,    58,    59,
      60,    65,    66,     8,    62,    62,    62,     5,     8,    61,
      80,    47,    91,    50,    91,    91,     8,    91,    80,    17,
      62,    18,    77,     7,     9,    10,    11,    12,     5,    79,
      25,    80,    83,    80,    80,    80,     8,    80,    80,    80,
      80,     8,    80,    80,    82,    83,    80,    82,     8,     8,
      46,    91,     5,    79,    91,     5,     5,     5,    79,    63,
      77,    38,    80,    80,    80,    80,    80,     6,    16,    62,
      67,     8,    80,     8,    19,    20,    21,    22,    23,    24,
      26,    27,    51,    52,    53,    54,     8,     8,     8,     8,
       8,     8,     8,     8,     8,    19,    20,    63,     8,    63,
       5,     5,    62,     8,    79,    62,    62,     8,    18,     5,
      80,    79,    90,    91,     3,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    83,    83,    17,
      80,    17,    62,    62,    90,     8,    90,    90,    29,    63,
      63,     5,    68,    77,     8,    77,    37,    90,    63,    63,
      63,    62,    17,    17,    16,    67,    18,    80,    18,    67,
      63,    17,    17,    17,    82,    69,    70,    87,    88,    77,
      90,     3,    15,    63,    68,    17,    77,    77,    77,    63,
       3,    72,    18,    88,    18,    68,    17,    17,    35,    77,
      18,    18,    18,    72,    17,    77,    77,    63,    18,    17,
      77,    18,    18,    17,    77,    18,    76,    18,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    85,    85,    86,    87,    87,
      88,    88,    89,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    92,    92,    92,    93,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       3,     3,     4,     4,     4,     4,     4,     4,     3,     4,
       4,     5,     3,     4,     7,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     7,    11,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,    11,     7,     8,     8,     2,     1,
       6,     5,     8,     9,    10,     9,     9,    13,     4,     2,
       1,     1,     1,     1,     1,     3,     2,     3,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
#line 55 "./src/parser.y" /* yacc.c:1646  */
    {lineno++; cout << lineno << ", =, X, "<< (yyval.value) << endl;}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", =, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl;}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 65 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", =, "<<(yyvsp[-3].value)<<", "<<(yyvsp[-1].value)<<endl;}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", +, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl;}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", -, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl;}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "./src/parser.y" /* yacc.c:1646  */
    { lineno++;cout<<lineno<<", +, "<<(yyvsp[-2].value)<<" , "<<(yyvsp[-2].value)<<" , "<<"1"<<endl;}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "./src/parser.y" /* yacc.c:1646  */
    { lineno++;cout<<lineno<<", -, "<<(yyvsp[-2].value)<<" , "<<(yyvsp[-2].value)<<" , "<<"1"<<endl; }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 70 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", *, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl; }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 71 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", /, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl; }
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 72 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", MOD, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl;}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 73 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", &, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl;}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 74 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", XOR, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl;}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 75 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;cout<<lineno<<", OR, "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-3].value)<<" , "<<(yyvsp[-1].value)<<endl;}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 88 "./src/parser.y" /* yacc.c:1646  */
    {v++;lineno++; cout <<lineno<< ", =, " << (yyvsp[-3].value) <<", " << (yyvsp[-1].value) <<endl;
                                                    lineno++; cout <<lineno<< ", *, " << (yyvsp[-3].value) <<", " <<(yyvsp[-3].value)<< ", "<<4 <<endl;
                                                    lineno++;cout<<lineno<<", +, "<<v<<", "<<v<<", "<<(yyvsp[-3].value)<<endl;}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 91 "./src/parser.y" /* yacc.c:1646  */
    { v++;lineno++; cout<< lineno<< ", *, "<< (yyvsp[-6].value)<< ", "<<(yyvsp[-4].value)<<", "<<(yyvsp[-1].value)<<endl;
        lineno++; cout<< lineno<< ", *, "<<(yyvsp[-6].value)<<", "<<(yyvsp[-6].value)<<", "<<4<<endl;
        lineno++; cout<<lineno<<", +, "<<v<<", "<<v<<", "<<(yyvsp[-6].value)<<endl;

        }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 96 "./src/parser.y" /* yacc.c:1646  */
    {lineno++; cout << lineno << ", =, " << (yyvsp[-2].value) <<", " << (yyvsp[0].value) << endl;}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 101 "./src/parser.y" /* yacc.c:1646  */
    {v++; lineno++; cout << lineno << ", +, "<< v <<", " << (yyvsp[-2].value) <<", "<< (yyvsp[0].value) << endl; (yyval.value)=v;}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 102 "./src/parser.y" /* yacc.c:1646  */
    {v++; lineno++; cout << lineno << ", -, "<< v <<", " << (yyvsp[-2].value) <<", "<< (yyvsp[0].value) << endl; (yyval.value)=v;}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 103 "./src/parser.y" /* yacc.c:1646  */
    {v++; lineno++; cout << lineno << ", *, "<< v <<", " << (yyvsp[-2].value) <<", "<< (yyvsp[0].value) << endl; (yyval.value)=v;}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 104 "./src/parser.y" /* yacc.c:1646  */
    {v++; lineno++; cout << lineno << ", /, "<< v <<", " << (yyvsp[-2].value) <<", "<< (yyvsp[0].value) << endl; (yyval.value)=v;}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 105 "./src/parser.y" /* yacc.c:1646  */
    {v++; lineno++; cout << lineno << ", ^, "<< v <<", " << (yyvsp[-2].value) <<", "<< (yyvsp[0].value) << endl; (yyval.value)=v;}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 106 "./src/parser.y" /* yacc.c:1646  */
    {(yyval.value) = (yyvsp[-1].value);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 107 "./src/parser.y" /* yacc.c:1646  */
    {(yyval.value) = (yyvsp[0].value);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 108 "./src/parser.y" /* yacc.c:1646  */
    {(yyval.value) = (yyvsp[0].value);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 109 "./src/parser.y" /* yacc.c:1646  */
    {(yyval.value) = (yyvsp[0].value);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 123 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", <, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 124 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", >, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 125 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", <=, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 126 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", >=, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 127 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", !=, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 128 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", ==, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 129 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", <<, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 130 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", >>, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 131 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", &&, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 132 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", !, "<<v<<", "<<(yyvsp[-1].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 133 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", ||, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 134 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", &, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 135 "./src/parser.y" /* yacc.c:1646  */
    {lineno++;v++;cout<<lineno<<", |, "<<v<<", "<<(yyvsp[-2].value)<<", "<<(yyvsp[0].value)<<endl;(yyval.value)=v;}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 159 "./src/parser.y" /* yacc.c:1646  */
    {}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 160 "./src/parser.y" /* yacc.c:1646  */
    {}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1805 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 192 "./src/parser.y" /* yacc.c:1906  */


main(int argc, char **argv)
{
    FILE *fp = fopen(argv[1], "r");
        yyin=fp;
    yyparse();
    return 0;
}


void yyerror(const char *s)
{
   fprintf(stderr, "%s\n", s);
}


