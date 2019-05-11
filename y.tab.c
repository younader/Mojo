/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
        #include "structs.h"
	#define YYDEBUG 1
	extern void yyerror(char*);
	extern int mylineno;
nodeType *opr(int oper, int nops, ...); 
nodeType *id(int index,int type,stateEnum state,char* name); 
nodeType *con(int value,int type); 
nodeType *getId(char* name;int scope)
void freeNode(nodeType *p); 
int ex(nodeType *p); 

  int yylex(void);

int index=0;
int scope=0;


#line 89 "y.tab.c" /* yacc.c:339  */

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
    INT = 258,
    INT_VALUE = 259,
    BOOL = 260,
    FLOAT = 261,
    FLOAT_VALUE = 262,
    CHAR = 263,
    CHAR_VALUE = 264,
    STRING = 265,
    STRING_VALUE = 266,
    IDENTIFIER = 267,
    COMMENT = 268,
    IF = 269,
    THEN = 270,
    WHILE = 271,
    FOR = 272,
    SWITCH = 273,
    CASE = 274,
    DO = 275,
    DEFAULT = 276,
    ELIF = 277,
    ELSE = 278,
    RETURN = 279,
    MAIN = 280,
    INCLUDE = 281,
    HASH = 282,
    CLASS = 283,
    FUNC = 284,
    BREAK = 285,
    CONTINUE = 286,
    SINGLE_QUOTE = 287,
    DOUBLE_QUOTE = 288,
    SEMI_COLON = 289,
    COLON = 290,
    OBRACKET = 291,
    CBRACKET = 292,
    OBRACE = 293,
    CBRACE = 294,
    OSQ_BRACKET = 295,
    CSQ_BRACKET = 296,
    COMMA = 297,
    TWO_DOTS = 298,
    DOT = 299,
    TRUE = 300,
    FALSE = 301,
    AND = 302,
    OR = 303,
    EQUAL_EQUAL = 304,
    NOT_EQUAL = 305,
    GREATER_THAN = 306,
    GREATER_THAN_EQUAL = 307,
    SMALLER_THAN = 308,
    SMALLER_THAN_EQUAL = 309,
    NOT = 310,
    REMAINDER = 311,
    PLUS_EQUAL = 312,
    MINUS_EQUAL = 313,
    MULTIPLY_EQUAL = 314,
    DIVIDE_EQUAL = 315,
    PLUS_PLUS = 316,
    MINUS_MINUS = 317,
    EQUAL = 318,
    CONST = 319,
    VOID = 320,
    MINUS = 321,
    PLUS = 322,
    DIVIDE = 323,
    MULTIPLY = 324,
    POWER = 325
  };
#endif
/* Tokens.  */
#define INT 258
#define INT_VALUE 259
#define BOOL 260
#define FLOAT 261
#define FLOAT_VALUE 262
#define CHAR 263
#define CHAR_VALUE 264
#define STRING 265
#define STRING_VALUE 266
#define IDENTIFIER 267
#define COMMENT 268
#define IF 269
#define THEN 270
#define WHILE 271
#define FOR 272
#define SWITCH 273
#define CASE 274
#define DO 275
#define DEFAULT 276
#define ELIF 277
#define ELSE 278
#define RETURN 279
#define MAIN 280
#define INCLUDE 281
#define HASH 282
#define CLASS 283
#define FUNC 284
#define BREAK 285
#define CONTINUE 286
#define SINGLE_QUOTE 287
#define DOUBLE_QUOTE 288
#define SEMI_COLON 289
#define COLON 290
#define OBRACKET 291
#define CBRACKET 292
#define OBRACE 293
#define CBRACE 294
#define OSQ_BRACKET 295
#define CSQ_BRACKET 296
#define COMMA 297
#define TWO_DOTS 298
#define DOT 299
#define TRUE 300
#define FALSE 301
#define AND 302
#define OR 303
#define EQUAL_EQUAL 304
#define NOT_EQUAL 305
#define GREATER_THAN 306
#define GREATER_THAN_EQUAL 307
#define SMALLER_THAN 308
#define SMALLER_THAN_EQUAL 309
#define NOT 310
#define REMAINDER 311
#define PLUS_EQUAL 312
#define MINUS_EQUAL 313
#define MULTIPLY_EQUAL 314
#define DIVIDE_EQUAL 315
#define PLUS_PLUS 316
#define MINUS_MINUS 317
#define EQUAL 318
#define CONST 319
#define VOID 320
#define MINUS 321
#define PLUS 322
#define DIVIDE 323
#define MULTIPLY 324
#define POWER 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "parser.y" /* yacc.c:355  */

	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;
        nodeType *nPtr;

#line 279 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 296 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    69,    71,    71,    73,    74,    75,    76,
      77,    78,    80,    81,    82,    83,    84,    85,    87,    90,
      92,    93,    95,    96,    97,    98,   101,   102,   103,   104,
     106,   108,   108,   110,   112,   116,   120,   124,   128,   130,
     131,   133,   134,   136,   139,   143,   144,   145,   146,   148,
     149,   151,   152,   153,   157,   158,   159,   165,   166,   167,
     168,   170,   171,   173,   174,   176,   177,   178,   179,   181,
     181,   183,   184,   186,   187,   188,   189,   190,   198,   199,
     201,   202,   205,   207,   208,   209,   210,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   228,   229,
     230,   231,   232,   233,   234,   235,   237,   238,   240,   241,
     242,   247,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "INT_VALUE", "BOOL", "FLOAT",
  "FLOAT_VALUE", "CHAR", "CHAR_VALUE", "STRING", "STRING_VALUE",
  "IDENTIFIER", "COMMENT", "IF", "THEN", "WHILE", "FOR", "SWITCH", "CASE",
  "DO", "DEFAULT", "ELIF", "ELSE", "RETURN", "MAIN", "INCLUDE", "HASH",
  "CLASS", "FUNC", "BREAK", "CONTINUE", "SINGLE_QUOTE", "DOUBLE_QUOTE",
  "SEMI_COLON", "COLON", "OBRACKET", "CBRACKET", "OBRACE", "CBRACE",
  "OSQ_BRACKET", "CSQ_BRACKET", "COMMA", "TWO_DOTS", "DOT", "TRUE",
  "FALSE", "AND", "OR", "EQUAL_EQUAL", "NOT_EQUAL", "GREATER_THAN",
  "GREATER_THAN_EQUAL", "SMALLER_THAN", "SMALLER_THAN_EQUAL", "NOT",
  "REMAINDER", "PLUS_EQUAL", "MINUS_EQUAL", "MULTIPLY_EQUAL",
  "DIVIDE_EQUAL", "PLUS_PLUS", "MINUS_MINUS", "EQUAL", "CONST", "VOID",
  "MINUS", "PLUS", "DIVIDE", "MULTIPLY", "POWER", "$accept", "Root",
  "Program", "statements", "statement", "returnstmt", "classstmt",
  "var_decs", "vars", "funcs", "ifstmts", "ifstmt", "elifs", "elifstmt",
  "elsestmt", "forstmt", "whilestmt", "dowhilestmt", "switchstmt",
  "switchcases", "caselist", "case", "blockstmt", "Func_Dec", "Args",
  "Args_list", "declerations", "Var_Dec", "Arr_Dec", "Expr_list",
  "Array_Assign", "super_data_type", "array_data_type", "Data_Type",
  "identifier_list", "func_call", "Expr", "DataVAL", "LOG_EXPR",
  "MATH_EXPR", "Casting", "MATH_CALC", "UniaryEXP", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

#define YYPACT_NINF -142

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-142)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -142,  -142,  -142,  -142,  -142,   -27,   -23,   -16,    -4,
      15,    28,   157,    33,    66,  -142,  -142,     9,   257,    85,
    -142,  -142,     9,  -142,  -142,  -142,    86,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,    58,    18,  -142,     6,
     129,   129,   129,    51,    79,     9,  -142,  -142,  -142,    49,
     257,  -142,  -142,  -142,  -142,   254,  -142,  -142,    55,    59,
     212,   189,    60,    58,    32,  -142,  -142,    68,    74,    91,
     104,  -142,    87,    97,    76,    -3,     7,  -142,   100,   145,
     157,  -142,  -142,   264,   184,   203,    77,   257,   129,   132,
     108,   107,  -142,  -142,   119,    70,    70,    70,    70,    70,
      70,   122,   201,  -142,    39,    43,     9,   120,  -142,   127,
    -142,   126,   105,   129,     9,  -142,  -142,    58,  -142,    56,
    -142,   129,   131,  -142,  -142,   221,  -142,   157,   157,   157,
     157,   157,   157,   157,   157,   138,   139,   158,   194,   140,
     163,    80,  -142,  -142,  -142,  -142,  -142,  -142,  -142,    95,
    -142,  -142,     9,   142,  -142,   257,  -142,   141,   146,     9,
    -142,   129,   229,   148,  -142,   152,   129,  -142,   155,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,     9,
       9,   129,    67,   160,  -142,  -142,  -142,    -5,  -142,   159,
       9,   193,   198,  -142,   173,   180,   185,  -142,   183,   187,
    -142,   186,   191,   247,   223,   226,   225,   270,   274,   129,
    -142,  -142,  -142,   280,  -142,  -142,  -142,  -142,     9,  -142,
      58,  -142,  -142,   287,   157,     9,  -142,   291,  -142,   255,
    -142,   288,  -142,     9,   292,  -142,     9,  -142,  -142,   289,
     295,  -142,  -142,     9,  -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    73,    75,    74,    77,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       2,     3,     4,    16,    13,     7,    26,     8,    10,     9,
      11,    17,    56,     6,    54,    55,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,   108,   109,    83,   110,
       0,    84,    85,    18,    86,    98,   106,   105,     0,     0,
       0,     0,     0,     0,     0,     1,     5,     0,     0,    28,
      31,    27,    78,     0,    68,     0,     0,    81,     0,     0,
       0,    59,    96,    82,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,    69,    70,
      44,     0,     0,     0,     0,    29,    32,     0,    62,     0,
      60,     0,     0,    71,    80,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,    99,   100,   101,   102,   104,    22,     0,
      20,    21,     0,     0,    50,     0,    51,     0,     0,     0,
      61,     0,     0,     0,    79,    66,     0,    67,     0,    72,
      97,    87,    88,    93,    94,    89,    90,    91,    92,     0,
       0,     0,     0,     0,   110,   107,    23,     0,    24,     0,
       0,     0,     0,    48,     0,     0,     0,    34,     0,    63,
      58,     0,     0,     0,     0,     0,     0,     0,    41,     0,
      19,    25,    46,     0,    53,    52,    47,    57,     0,    65,
       0,    30,    36,     0,     0,     0,    38,     0,    42,     0,
      45,     0,    64,     0,     0,    40,     0,    37,    33,     0,
       0,    39,    35,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   -17,  -142,  -142,  -142,   182,  -142,  -142,
    -142,  -142,   262,  -142,   265,  -142,  -142,  -142,  -142,  -142,
     125,  -142,  -142,  -141,   276,  -142,  -142,   -36,   -85,  -142,
     273,   235,   -12,    -8,   -37,   219,   -99,   -11,   -38,   190,
    -142,   199,  -142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    24,   148,   149,   187,
      25,    26,    69,    70,    71,    27,    28,    29,    30,   206,
     207,   208,    31,    32,    61,   104,    33,    34,    35,   198,
      73,   107,    36,    37,    74,    38,    81,    82,    83,    54,
      55,    56,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,    53,    78,    84,    85,    66,    63,    88,   188,    39,
      64,   122,     1,    41,     2,     3,   151,     4,    72,     5,
      42,     6,   168,     7,    14,     8,     9,    10,    91,    11,
      75,   120,    43,    12,   210,    89,    40,    13,    14,    15,
      16,   125,    94,    77,   112,    58,   211,    17,   123,   108,
     138,    44,   105,   109,     1,   156,     2,     3,    76,     4,
     121,     5,   195,    86,   151,   150,    45,   199,   165,   126,
      72,    94,    76,    18,    46,   162,   154,    47,    59,   137,
     164,   155,    49,   157,    46,    65,   204,    47,   205,   158,
     108,    90,   184,   101,   109,    60,   166,   163,     1,   110,
       2,     3,    60,     4,   113,     5,    50,    86,    67,    68,
      92,    93,   114,   150,    68,    87,   171,   172,   173,   174,
     175,   176,   177,   178,    14,     1,    67,     2,     3,   117,
       4,   118,     5,    46,    86,   189,    47,   124,    48,   119,
      40,    49,   194,   203,    75,   139,   140,   191,     1,    46,
       2,     3,    47,     4,    48,     5,   141,    49,   159,    18,
     160,    46,   201,   202,    47,    79,    48,    76,   161,    49,
     112,   229,   169,   213,    51,    52,   179,   180,   182,   183,
     190,    79,   192,   232,    80,   193,    18,   197,    39,   200,
      51,    52,     1,    50,     2,     3,   209,     4,   212,     5,
      80,   231,    51,    52,     1,   214,     2,     3,   235,     4,
     215,     5,   216,   234,   217,     1,   239,     2,     3,   241,
       4,   135,     5,   218,   219,   221,   244,   106,   181,   220,
     222,   127,   128,   129,   130,   131,   132,   133,   134,   152,
     136,   127,   128,   129,   130,   131,   132,   133,   134,   103,
     127,   128,   129,   130,   131,   132,   133,   134,   170,   224,
       1,   225,     2,     3,   226,     4,   196,     5,   127,   128,
     129,   130,   131,   132,   133,   134,   127,   128,   129,   130,
     131,   132,   133,   134,   223,   142,   143,   144,   145,   146,
     147,   227,   237,   204,   127,   128,   129,   130,   131,   132,
     133,   134,   127,   128,   129,   130,   131,   132,   133,   134,
      95,   127,   128,   129,   130,   131,   132,   133,   134,   230,
      96,    97,    98,    99,   100,   233,   236,   238,   242,   240,
     243,   186,   116,   228,   115,   102,   111,   153,   167,     0,
     185
};

static const yytype_int16 yycheck[] =
{
      17,    12,    39,    41,    42,    22,    18,    43,   149,    36,
      18,     4,     3,    36,     5,     6,   101,     8,    12,    10,
      36,    12,   121,    14,    29,    16,    17,    18,    45,    20,
      12,    34,    36,    24,    39,    43,    63,    28,    29,    30,
      31,    79,    50,    37,    12,    12,   187,    38,    41,    61,
      88,    36,    60,    61,     3,    12,     5,     6,    40,     8,
      63,    10,   161,    12,   149,   101,    38,   166,    12,    80,
      12,    79,    40,    64,     4,   113,    37,     7,    12,    87,
     117,    42,    12,    40,     4,     0,    19,     7,    21,   106,
     102,    12,    12,    38,   102,    36,    40,   114,     3,    39,
       5,     6,    36,     8,    36,    10,    36,    12,    22,    23,
      61,    62,    38,   149,    23,    64,   127,   128,   129,   130,
     131,   132,   133,   134,    29,     3,    22,     5,     6,    42,
       8,    34,    10,     4,    12,   152,     7,    37,     9,    63,
      63,    12,   159,   181,    12,    37,    39,   155,     3,     4,
       5,     6,     7,     8,     9,    10,    37,    12,    38,    64,
      34,     4,   179,   180,     7,    36,     9,    40,    63,    12,
      12,   209,    41,   190,    45,    46,    38,    38,    38,    16,
      38,    36,    41,   220,    55,    39,    64,    39,    36,    34,
      45,    46,     3,    36,     5,     6,    36,     8,    39,    10,
      55,   218,    45,    46,     3,    12,     5,     6,   225,     8,
      12,    10,    39,   224,    34,     3,   233,     5,     6,   236,
       8,    37,    10,    38,    41,    39,   243,    38,    34,    42,
      39,    47,    48,    49,    50,    51,    52,    53,    54,    38,
      37,    47,    48,    49,    50,    51,    52,    53,    54,    37,
      47,    48,    49,    50,    51,    52,    53,    54,    37,    36,
       3,    35,     5,     6,    39,     8,    37,    10,    47,    48,
      49,    50,    51,    52,    53,    54,    47,    48,    49,    50,
      51,    52,    53,    54,    37,    95,    96,    97,    98,    99,
     100,    21,    37,    19,    47,    48,    49,    50,    51,    52,
      53,    54,    47,    48,    49,    50,    51,    52,    53,    54,
      56,    47,    48,    49,    50,    51,    52,    53,    54,    39,
      66,    67,    68,    69,    70,    38,    35,    39,    39,    37,
      35,   149,    70,   208,    69,    59,    63,   102,   119,    -1,
     141
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    14,    16,    17,
      18,    20,    24,    28,    29,    30,    31,    38,    64,    72,
      73,    74,    75,    76,    77,    81,    82,    86,    87,    88,
      89,    93,    94,    97,    98,    99,   103,   104,   106,    36,
      63,    36,    36,    36,    36,    38,     4,     7,     9,    12,
      36,    45,    46,   108,   110,   111,   112,   113,    12,    12,
      36,    95,    74,   103,   104,     0,    74,    22,    23,    83,
      84,    85,    12,   101,   105,    12,    40,    37,   105,    36,
      55,   107,   108,   109,   109,   109,    12,    64,    98,   104,
      12,    74,    61,    62,   104,    56,    66,    67,    68,    69,
      70,    38,    95,    37,    96,   104,    38,   102,   103,   104,
      39,   101,    12,    36,    38,    85,    83,    42,    34,    63,
      34,    63,     4,    41,    37,   109,   108,    47,    48,    49,
      50,    51,    52,    53,    54,    37,    37,   104,   109,    37,
      39,    37,   110,   110,   110,   110,   110,   110,    78,    79,
      98,    99,    38,   102,    37,    42,    12,    40,    74,    38,
      34,    63,   109,    74,   105,    12,    40,   106,   107,    41,
      37,   108,   108,   108,   108,   108,   108,   108,   108,    38,
      38,    34,    38,    16,    12,   112,    78,    80,    94,    74,
      38,   104,    41,    39,    74,   107,    37,    39,   100,   107,
      34,    74,    74,   109,    19,    21,    90,    91,    92,    36,
      39,    94,    39,    74,    12,    12,    39,    34,    38,    41,
      42,    39,    39,    37,    36,    35,    39,    21,    91,   109,
      39,    74,   105,    38,   108,    74,    35,    37,    39,    74,
      37,    74,    39,    35,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    81,    81,
      82,    83,    83,    84,    85,    86,    87,    88,    89,    90,
      90,    91,    91,    92,    93,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   108,   108,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     112,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     6,
       1,     1,     1,     2,     1,     2,     1,     2,     2,     3,
       7,     1,     2,     7,     4,    10,     7,     8,     7,     4,
       3,     1,     2,     6,     3,     7,     6,     6,     5,     2,
       3,     2,     4,     4,     1,     1,     1,     6,     5,     3,
       3,     4,     3,     1,     3,     5,     3,     3,     1,     1,
       1,     3,     4,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     1,     4,     1,     1,
       1,     2,     2
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
        case 26:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("if is working \n");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("for loop is working \n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("WHILE loop is working \n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("DO WHILE loop is working \n");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("SWITCH loop is working \n");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("Variavle Declaration is working \n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(ASSIGN,2,id(index,(yyvsp[-4].intValue)+5,Valid,(yyvsp[-3].identifier)),(yyvsp[-1].nPtr));index++;}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(ASSIGN,2,id(index,(yyvsp[-4].intValue),Valid,(yyvsp[-3].identifier)),(yyvsp[-1].nPtr));index++;}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(ASSIGN,2,getId((yyvsp[-2].identifier),scope),(yyvsp[0].nPtr))}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=id(index,(yyvsp[-2].intValue),Valid,(yyvsp[-1].identifier))}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=0;}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=1;}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=4;}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=2;}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=3;}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr)}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con((yyvsp[0].charValue),3)}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con("true",4)}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 209 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con("false",4)}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 210 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr)}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(AND,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(OR,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(GREATER_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(GREATER_THAN_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SMALLER_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SMALLER_THAN_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(EQUAL_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(NOT_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(NOT,1,(yyvsp[0].nPtr));}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[-1].nPtr)}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr)}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(MINUS,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(PLUS,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(DIVIDE,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(MULTIPLY,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(REMAINDER,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(POWER,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(CASTING,2,(yyvsp[-2].intValue),(yyvsp[0].nPtr));}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 240 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con((yyvsp[0].intValue),0);}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con((yyvsp[0].floatValue),1);}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=getId((yyvsp[0].identifier));}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(PLUS_PLUS,1,(yyvsp[-1].identifier));}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(PLUS_PLUS,1,(yyvsp[-1].identifier));}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1848 "y.tab.c" /* yacc.c:1646  */
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
#line 252 "parser.y" /* yacc.c:1906  */

nodeType * con(int value,int type){
        nodeType *p;
        if ((p = malloc(sizeof(nodeType))) == NULL)         
        yyerror("out of memory");
             /* copy information */   
             p->type=typeCon;  
             p->con.type = typeCon;     
             p->con.value = value;     
             return p;
}
#include"lex.yy.c"

void yyerror(char * s){
	fprintf(stderr,"%s\n",s);
}

int main(void) {
  //yylex();
   return yyparse();
}
