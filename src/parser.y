%{
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
    %}

%union
{
char value;
}

%token <value> INT_CONST FLOAT_CONST IDENTIFIER
%token <value> OP_EQUAL OP_POW STMT_TERMINATOR OP_PLUS OP_MINUS OP_MULT OP_DIV  KEYWORD_CONTINUE
KEYWORD_IF KEYWORD_ELSE COMMA L_BRACE R_BRACE AND OR OP_LT OP_GT OP_LTE OP_GTE NOT NOT_EQ EQ_EQ KEYWORD_FOR KEYWORD_WHILE KEYWORD_RETURN NEWLINE KEYWORD_PUBLIC KEYWORD_PRIVATE KEYWORD_PROTECTED  KEYWORD_ARGS KEYWORD_CLASS  KEYWORD_STRING  KEYWORD_INT KEYWORD_FLOAT KEYWORD_BOOLEAN  KEYWORD_LONG KEYWORD_DOUBLE KEYWORD_BREAK XOR_EQ MINUS_EQ KEYWORD_VOID
KEYWORD_STATIC KEYWORD_TRUE KEYWORD_FALSE KEYWORD_FINAL LSHIFT RSHIFT BITWISE_AND BITWISE_OR PLUS_EQ PLUS_PLUS MULT_EQ DIV_EQ MOD_EQ OR_EQ KEYWORD_NULL '(' ')' KEYWORD_DO MINUS_MINUS AND_EQ L_BRACKET R_BRACKET KEYWORD_CASE KEYWORD_DEFAULT KEYWORD_SWITCH KEYWORD_COLON

%left COMMA
%right OP_EQUAL PLUS_EQ MINUS_EQ MULT_EQ DIV_EQ MOD_EQ AND_EQ OR_EQ XOR_EQ

%left OR
%left AND
%left BITWISE_OR
%left BITWISE_AND
%left  OP_LT OP_LTE OP_GT OP_GTE NOT_EQ EQ_EQ 
%left  LSHIFT RSHIFT
%left  OP_PLUS OP_MINUS   
%left  OP_MULT OP_DIV  
%right OP_POW
%right NOT PLUS_PLUS MINUS_MINUS 


%start program
%type <value>    program statement expression variabledecl listofvars ifelse condition relationalexp forloop whileloop function parameters  return continue break class listofstatement switch caselist case
%type <value> vartype           

%%

program:class
        ;

class :KEYWORD_PUBLIC KEYWORD_CLASS IDENTIFIER L_BRACE listofstatement R_BRACE
      ;
listofstatement: listofstatement statement
                | statement
                ;
statement: 
        variabledecl
        |expression     {lineno++; cout << lineno << ", =, X, "<< $$ << endl;}             
        | ifelse
        | forloop
        | whileloop
        | function 
        | switch
        | return
        | break
        | continue
        | IDENTIFIER OP_EQUAL relationalexp STMT_TERMINATOR  {lineno++;cout<<lineno<<", =, "<<$1<<" , "<<$3<<endl;} 
        | IDENTIFIER OP_EQUAL expression STMT_TERMINATOR  {lineno++;cout<<lineno<<", =, "<<$1<<", "<<$3<<endl;} 
        | IDENTIFIER PLUS_EQ expression STMT_TERMINATOR  {lineno++;cout<<lineno<<", +, "<<$1<<" , "<<$1<<" , "<<$3<<endl;} 
        | IDENTIFIER MINUS_EQ expression STMT_TERMINATOR {lineno++;cout<<lineno<<", -, "<<$1<<" , "<<$1<<" , "<<$3<<endl;}
        | IDENTIFIER PLUS_PLUS  STMT_TERMINATOR     { lineno++;cout<<lineno<<", +, "<<$1<<" , "<<$1<<" , "<<"1"<<endl;}
        | IDENTIFIER MINUS_MINUS  STMT_TERMINATOR   { lineno++;cout<<lineno<<", -, "<<$1<<" , "<<$1<<" , "<<"1"<<endl; }
        | IDENTIFIER MULT_EQ expression STMT_TERMINATOR  {lineno++;cout<<lineno<<", *, "<<$1<<" , "<<$1<<" , "<<$3<<endl; }
        | IDENTIFIER DIV_EQ expression STMT_TERMINATOR   {lineno++;cout<<lineno<<", /, "<<$1<<" , "<<$1<<" , "<<$3<<endl; }
        | IDENTIFIER MOD_EQ expression STMT_TERMINATOR   {lineno++;cout<<lineno<<", MOD, "<<$1<<" , "<<$1<<" , "<<$3<<endl;}
        | IDENTIFIER AND_EQ expression STMT_TERMINATOR  {lineno++;cout<<lineno<<", &, "<<$1<<" , "<<$1<<" , "<<$3<<endl;}
        | IDENTIFIER XOR_EQ expression STMT_TERMINATOR  {lineno++;cout<<lineno<<", XOR, "<<$1<<" , "<<$1<<" , "<<$3<<endl;}
        | IDENTIFIER OR_EQ expression STMT_TERMINATOR   {lineno++;cout<<lineno<<", OR, "<<$1<<" , "<<$1<<" , "<<$3<<endl;}
        ;
        
variabledecl:
        vartype listofvars STMT_TERMINATOR
        | KEYWORD_FINAL vartype listofvars STMT_TERMINATOR
        | KEYWORD_PUBLIC vartype listofvars STMT_TERMINATOR
        | KEYWORD_PRIVATE KEYWORD_FINAL vartype listofvars STMT_TERMINATOR


        ;
listofvars:
        IDENTIFIER COMMA listofvars
        |IDENTIFIER L_BRACKET INT_CONST R_BRACKET {v++;lineno++; cout <<lineno<< ", =, " << $1 <<", " << $3 <<endl;
                                                    lineno++; cout <<lineno<< ", *, " << $1 <<", " <<$1<< ", "<<4 <<endl;
                                                    lineno++;cout<<lineno<<", +, "<<v<<", "<<v<<", "<<$1<<endl;}
        |IDENTIFIER L_BRACKET INT_CONST R_BRACKET L_BRACKET INT_CONST R_BRACKET { v++;lineno++; cout<< lineno<< ", *, "<< $1<< ", "<<$3<<", "<<$6<<endl;
        lineno++; cout<< lineno<< ", *, "<<$1<<", "<<$1<<", "<<4<<endl;
        lineno++; cout<<lineno<<", +, "<<v<<", "<<v<<", "<<$1<<endl;

        } 
        | IDENTIFIER OP_EQUAL expression {lineno++; cout << lineno << ", =, " << $1 <<", " << $3 << endl;}
        | IDENTIFIER
        ;

expression:
        expression OP_PLUS expression    {v++; lineno++; cout << lineno << ", +, "<< v <<", " << $1 <<", "<< $3 << endl; $$=v;}
        | expression OP_MINUS expression {v++; lineno++; cout << lineno << ", -, "<< v <<", " << $1 <<", "<< $3 << endl; $$=v;}
        | expression OP_MULT expression  {v++; lineno++; cout << lineno << ", *, "<< v <<", " << $1 <<", "<< $3 << endl; $$=v;}
        | expression OP_DIV expression   {v++; lineno++; cout << lineno << ", /, "<< v <<", " << $1 <<", "<< $3 << endl; $$=v;}
        | expression OP_POW expression    {v++; lineno++; cout << lineno << ", ^, "<< v <<", " << $1 <<", "<< $3 << endl; $$=v;}
        | '(' expression ')'         {$$ = $2;}
        | INT_CONST                 {$$ = $1;}
        | FLOAT_CONST               {$$ = $1;}                
        | IDENTIFIER                {$$ = $1;}
        ;

ifelse:
        KEYWORD_IF '(' condition ')' L_BRACE statement R_BRACE
        | KEYWORD_IF '(' condition ')' L_BRACE statement R_BRACE KEYWORD_ELSE L_BRACE statement R_BRACE
        ;
condition:
        condition AND relationalexp
        |condition OR relationalexp
        |relationalexp
        ;

relationalexp:
         expression OP_LT expression {lineno++;v++;cout<<lineno<<", <, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression OP_GT expression {lineno++;v++;cout<<lineno<<", >, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression OP_LTE expression {lineno++;v++;cout<<lineno<<", <=, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression OP_GTE expression {lineno++;v++;cout<<lineno<<", >=, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression NOT_EQ expression {lineno++;v++;cout<<lineno<<", !=, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression EQ_EQ expression  {lineno++;v++;cout<<lineno<<", ==, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression LSHIFT expression {lineno++;v++;cout<<lineno<<", <<, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression RSHIFT expression {lineno++;v++;cout<<lineno<<", >>, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression AND expression    {lineno++;v++;cout<<lineno<<", &&, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | NOT expression        {lineno++;v++;cout<<lineno<<", !, "<<v<<", "<<$1<<", "<<$2<<endl;$$=v;}
        | expression OR expression    {lineno++;v++;cout<<lineno<<", ||, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression BITWISE_AND expression {lineno++;v++;cout<<lineno<<", &, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        | expression BITWISE_OR expression {lineno++;v++;cout<<lineno<<", |, "<<v<<", "<<$1<<", "<<$3<<endl;$$=v;}
        ;
                 
forloop:
        KEYWORD_FOR '(' expression STMT_TERMINATOR expression STMT_TERMINATOR expression ')' L_BRACE statement R_BRACE
        ;

whileloop:
        KEYWORD_WHILE '(' condition ')' L_BRACE statement R_BRACE 
        | KEYWORD_DO L_BRACE statement R_BRACE KEYWORD_WHILE '(' condition ')'  
        ;
switch:
        KEYWORD_SWITCH '(' KEYWORD_INT IDENTIFIER ')' L_BRACE caselist  R_BRACE
        ;

caselist:
        caselist case 
        | case 
        ;
case :
     KEYWORD_CASE INT_CONST KEYWORD_COLON L_BRACE statement R_BRACE 
     |KEYWORD_DEFAULT KEYWORD_COLON L_BRACE statement R_BRACE 
    ;
function: 
        vartype IDENTIFIER '(' parameters ')'  L_BRACE statement R_BRACE{}
        |KEYWORD_PUBLIC vartype IDENTIFIER '(' parameters ')'  L_BRACE statement R_BRACE{}
        | KEYWORD_PUBLIC KEYWORD_STATIC vartype IDENTIFIER '(' parameters ')'  L_BRACE statement R_BRACE
        | KEYWORD_PRIVATE vartype IDENTIFIER '(' parameters ')'  L_BRACE statement R_BRACE
        | KEYWORD_PROTECTED vartype IDENTIFIER '(' parameters ')'  L_BRACE statement R_BRACE
        | KEYWORD_PUBLIC KEYWORD_STATIC KEYWORD_VOID IDENTIFIER '(' KEYWORD_STRING L_BRACKET R_BRACKET KEYWORD_ARGS ')' L_BRACE  listofstatement R_BRACE 
        ;

parameters:
        vartype IDENTIFIER COMMA parameters
        | vartype IDENTIFIER 
        ;
vartype:
        KEYWORD_INT
        | KEYWORD_FLOAT
        | KEYWORD_BOOLEAN
        | KEYWORD_LONG        
        | KEYWORD_DOUBLE
      ;

return:
        KEYWORD_RETURN expression STMT_TERMINATOR
        |KEYWORD_RETURN STMT_TERMINATOR
        |KEYWORD_RETURN KEYWORD_NULL STMT_TERMINATOR


continue:
        KEYWORD_CONTINUE STMT_TERMINATOR
        ;

break:
        KEYWORD_BREAK STMT_TERMINATOR
        ;
%%

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


