
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#define YYDEBUG 1
	extern void yyerror(char*);
	extern int mylineno;


  int yylex(void);

%}


%union {
	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;
};
%start Root

%token <stringValue> INT
%token <intValue> INT_VALUE

%token <stringValue> BOOL

%token <stringValue> FLOAT
%token <floatValue> FLOAT_VALUE

%token <stringValue> CHAR
%token <charValue> CHAR_VALUE

%token <stringValue> STRING
%token <stringValue> STRING_VALUE

%token <identifier> IDENTIFIER
%token <comment> COMMENT
%token IF THEN WHILE FOR SWITCH CASE DO DEFAULT ELIF ELSE RETURN MAIN INCLUDE HASH CLASS FUNC BREAK CONTINUE
%token SINGLE_QUOTE DOUBLE_QUOTE SEMI_COLON COLON OBRACKET CBRACKET OBRACE CBRACE OSQ_BRACKET CSQ_BRACKET COMMA TWO_DOTS DOT
%token TRUE FALSE AND OR EQUAL_EQUAL NOT_EQUAL GREATER_THAN GREATER_THAN_EQUAL SMALLER_THAN SMALLER_THAN_EQUAL NOT
%token REMAINDER PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL DIVIDE_EQUAL PLUS_PLUS MINUS_MINUS EQUAL
%token CONST
%token VOID
%right MINUS
%left  PLUS
%right DIVIDE
%left   MULTIPLY
%left POWER
%%
Root:Program;

Program:statements;

statements: statement|statement statements ;

statement:declerations  
          |ifstmts
          |forstmt
          |dowhilestmt
          |whilestmt
          |switchstmt
          |assignments;
          |func_call
          |classstmt
          |BREAK
          |CONTINUE
          |returnstmt
          |blockstmt;

returnstmt: RETURN DataVAL;
//////////// class statement  ////////////

classstmt: CLASS IDENTIFIER OBRACE vars funcs CBRACE;

var_decs: Var_Dec|Arr_Dec;

vars: var_decs| vars var_decs;
funcs: Func_Dec|funcs Func_Dec;
//////////// if statement  ////////////

ifstmts:ifstmt  {printf("if is working \n");}
        |ifstmt elsestmt
        |ifstmt elifs
        |ifstmt elifs elsestmt;

ifstmt: IF OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE;

elifs: elifstmt| elifstmt elifs;

elifstmt: ELIF OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE;

elsestmt: ELSE OBRACE statements CBRACE;

//////////// for statement  ////////////

forstmt:FOR OBRACKET Var_Dec LOG_EXPR SEMI_COLON LOG_EXPR CBRACKET OBRACE statements CBRACE {printf("for loop is working \n");};

//////////// while statement  ////////////

whilestmt:WHILE OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE {printf("WHILE loop is working \n");};

////////////do  while statement  ////////////

dowhilestmt:DO OBRACE statements CBRACE WHILE OBRACKET LOG_EXPR CBRACKET {printf("DO WHILE loop is working \n");};

////////////  switch statement  ////////////

switchstmt: SWITCH OBRACKET IDENTIFIER CBRACKET OBRACE switchcases CBRACE {printf("SWITCH loop is working \n");};

switchcases:caselist DEFAULT COLON statements|DEFAULT COLON statements;

caselist: case|case caselist;

case: CASE OBRACKET DataVAL CBRACKET COLON statements;

////////////  block decleration  ////////////
blockstmt:OBRACE statements CBRACE;

////////////  function declerations and definitions  ////////////

Func_Dec: FUNC IDENTIFIER Args super_data_type OBRACE statements CBRACE
          |FUNC IDENTIFIER Args OBRACE statements CBRACE
          |FUNC Args super_data_type OBRACE statements CBRACE
          |FUNC Args OBRACE statements CBRACE;

Args:OBRACKET CBRACKET
     | OBRACKET Args_list CBRACKET;

Args_list: Data_Type IDENTIFIER | Data_Type OSQ_BRACKET CSQ_BRACKET IDENTIFIER | Args_list COMMA Data_Type IDENTIFIER;

//////////// Variable Declarations and Definition ////////////

declerations:Var_Dec {printf("Variavle Declaration is working \n");}
              |Arr_Dec
              |Func_Dec;

assignments: Array_Assign|generic_assign;

Var_Dec:CONST Data_Type Assign SEMI_COLON
        |Data_Type Assign SEMI_COLON
        |Data_Type identifier_list SEMI_COLON;

Arr_Dec:CONST array_data_type Array_Assign SEMI_COLON
        |array_data_type Array_Assign SEMI_COLON;

Expr_list:Expr
          |Expr COMMA identifier_list;

Array_Assign: identifier_list EQUAL OSQ_BRACKET Expr_list CSQ_BRACKET
              |identifier_list EQUAL IDENTIFIER
              |identifier_list EQUAL func_call
              |identifier_list;

super_data_type:array_data_type|Data_Type;

array_data_type:Data_Type OSQ_BRACKET CSQ_BRACKET
                |Data_Type OSQ_BRACKET INT_VALUE CSQ_BRACKET;

Data_Type: INT | FLOAT | BOOL | STRING | CHAR;

//////////// check making different equals i.e int x=0,y=1 ////////////
Assign: identifier_list EQUAL Expr;

generic_assign:Assign SEMI_COLON {printf("Variable Assign is working \n")}
              |IDENTIFIER OSQ_BRACKET INT_VALUE CSQ_BRACKET EQUAL Expr; 

identifier_list: IDENTIFIER 
                |IDENTIFIER COMMA identifier_list ;

func_call: IDENTIFIER OBRACKET identifier_list CBRACKET| IDENTIFIER OBRACKET CBRACKET;


Expr:  LOG_EXPR;

DataVAL: CHAR_VALUE|
            TRUE|
            FALSE|
          MATH_EXPR;

LOG_EXPR: LOG_EXPR AND DataVAL {printf("Logical expression AND \n");}
          | LOG_EXPR OR DataVAL {printf("Logical expression OR \n");}
          | LOG_EXPR GREATER_THAN DataVAL {printf("Logical expression GREATER_THAN \n");}
          | LOG_EXPR GREATER_THAN_EQUAL DataVAL {printf("Logical expression GREATER_THAN_EQUAL \n");}
          | LOG_EXPR SMALLER_THAN DataVAL {printf("Logical expression SMALLER_THAN \n");}
          | LOG_EXPR SMALLER_THAN_EQUAL DataVAL {printf("Logical expression SMALLER_THAN_EQUAL \n");}
          | LOG_EXPR EQUAL_EQUAL DataVAL {printf("Logical expression EQUAL_EQUAL  \n");}
          | LOG_EXPR NOT_EQUAL DataVAL {printf("Logical expression NOT_EQUAL \n");}
          | NOT DataVAL
          | DataVAL
          |OBRACKET LOG_EXPR CBRACKET;




MATH_EXPR:Casting|
          Casting MINUS MATH_EXPR|
          Casting PLUS MATH_EXPR|
          Casting DIVIDE MATH_EXPR|
          Casting MULTIPLY MATH_EXPR|
          Casting REMAINDER MATH_EXPR|
          Casting POWER MATH_EXPR|
          UniaryEXP;
Casting: MATH_CALC| OBRACKET Data_Type CBRACKET MATH_CALC {printf("Casting");};
MATH_CALC: INT_VALUE|
            FLOAT_VALUE|
            IDENTIFIER|
            IDENTIFIER OSQ_BRACKET INT_VALUE CSQ_BRACKET
            |func_call;


UniaryEXP: IDENTIFIER PLUS_PLUS|
            IDENTIFIER MINUS_MINUS|
            PLUS_PLUS IDENTIFIER|
            MINUS_MINUS IDENTIFIER;

%%
#include"lex.yy.c"

void yyerror(char * s){
	fprintf(stderr,"%s\n",s);
}

int main(void) {
  //yylex();
   return yyparse();
}
