
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 11 "parser.y"


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(const char *msg); // standard error-handling routine



/* Line 189 of yacc.c  */
#line 90 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Void = 258,
     T_Bool = 259,
     T_Float = 260,
     T_Int = 261,
     T_UInt = 262,
     T_Vec2 = 263,
     T_Vec3 = 264,
     T_Vec4 = 265,
     T_Dims = 266,
     T_Mat2 = 267,
     T_Mat3 = 268,
     T_Mat4 = 269,
     T_Struct = 270,
     T_In = 271,
     T_Out = 272,
     T_InOut = 273,
     T_Const = 274,
     T_Uniform = 275,
     T_Layout = 276,
     T_And = 277,
     T_Or = 278,
     T_While = 279,
     T_Break = 280,
     T_Continue = 281,
     T_Do = 282,
     T_Else = 283,
     T_For = 284,
     T_If = 285,
     T_Return = 286,
     T_Switch = 287,
     T_Case = 288,
     T_Default = 289,
     T_IntConstant = 290,
     T_FloatConstant = 291,
     T_BoolConstant = 292,
     T_Inc = 293,
     T_Dec = 294,
     T_LessEqual = 295,
     T_GreaterEqual = 296,
     T_Equal = 297,
     T_NotEqual = 298,
     T_Mul_Assign = 299,
     T_Div_Assign = 300,
     T_Add_Assign = 301,
     T_Sub_Assign = 302,
     T_FieldSelection = 303,
     T_Identifier = 304
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Float 260
#define T_Int 261
#define T_UInt 262
#define T_Vec2 263
#define T_Vec3 264
#define T_Vec4 265
#define T_Dims 266
#define T_Mat2 267
#define T_Mat3 268
#define T_Mat4 269
#define T_Struct 270
#define T_In 271
#define T_Out 272
#define T_InOut 273
#define T_Const 274
#define T_Uniform 275
#define T_Layout 276
#define T_And 277
#define T_Or 278
#define T_While 279
#define T_Break 280
#define T_Continue 281
#define T_Do 282
#define T_Else 283
#define T_For 284
#define T_If 285
#define T_Return 286
#define T_Switch 287
#define T_Case 288
#define T_Default 289
#define T_IntConstant 290
#define T_FloatConstant 291
#define T_BoolConstant 292
#define T_Inc 293
#define T_Dec 294
#define T_LessEqual 295
#define T_GreaterEqual 296
#define T_Equal 297
#define T_NotEqual 298
#define T_Mul_Assign 299
#define T_Div_Assign 300
#define T_Add_Assign 301
#define T_Sub_Assign 302
#define T_FieldSelection 303
#define T_Identifier 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 44 "parser.y"

  int integerConstant;
  bool boolConstant;
  float floatConstant;
  const char *stringConstant;
  char identifier[MaxIdentLen+1]; // +1 for terminating null
  char field[MaxIdentLen+1];
  Node *node;
  Identifier *id;
  Error *error;
  Decl *decl;
  List<Decl*> *declList;
  VarDecl *varDecl;
  List<VarDecl*> *varDeclList;
  VarDeclError *varDeclError;
  FnDecl *funcDecl;
  FormalsError *formalsError;
  Expr *expr;
  ExprError *exprError;
  EmptyExpr *emptyExpr;
  IntConstant *intConst;
  FloatConstant *floatConst;
  BoolConstant *boolConst;
  Operator *op;
  CompoundExpr *compoundExpr;
  ArithmeticExpr *arithmeticExpr;
  RelationalExpr *relationalExpr;
  EqualityExpr *equalityExpr;
  LogicalExpr *logicalExpr;
  AssignExpr *assignExpr;
  PostfixExpr *postfixExpr;
  LValue *lValue;
  ArrayAccess *arrayAccess;
  FieldAccess *fieldAccess;
  Call *call;
  ActualsError *actualsError;
  Program *program;
  Stmt *stmt;
  List<Stmt*> *stmts;
  StmtBlock *stmtBlock;
  ConditionalStmt *conditionalStmt;
  LoopStmt *loopStmt;
  ForStmt *forStmt;
  WhileStmt *whileStmt;
  IfStmt *ifStmt;
  IfStmtTemp *ifStmtTemp;
  IfStmtExprError *ifStmtExprError;
  BreakStmt *breakStmt;
  ReturnStmt *returnStmt;
  SwitchLabel *switchLabel;
  Case *_case;
  Default *_default;
  SwitchStmt *switchStmt;
  SwitchStmtList * switchStmtList;
  SwitchStmtError *switchStmtError;
  Type *type;
  ArrayType *arrayType;
  


/* Line 214 of yacc.c  */
#line 285 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 310 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   737

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,    56,    54,    53,    55,    52,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    61,
      58,    60,    59,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    23,    27,    30,    33,    35,    37,    40,    43,    46,
      48,    51,    55,    58,    60,    62,    65,    68,    71,    73,
      75,    77,    81,    85,    87,    91,    95,    97,    99,   103,
     107,   111,   115,   117,   121,   125,   127,   129,   131,   133,
     137,   139,   141,   145,   147,   149,   153,   155,   157,   159,
     161,   163,   165,   168,   171,   174,   176,   178,   181,   185,
     189,   191,   194,   196,   198,   200,   202,   205,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   262,   265,   268,   272,   275,
     279,   282,   286,   288,   291,   293,   296,   302,   306,   308,
     310,   315,   323,   325,   327,   330,   333,   338,   343,   347,
     353,   361,   370,   373,   375,   377,   379
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      66,     0,    -1,   127,    -1,    49,    -1,    67,    -1,    35,
      -1,    36,    -1,    37,    -1,    50,    93,    51,    -1,    68,
      -1,    70,    -1,    69,    52,    48,    -1,    69,    38,    -1,
      69,    39,    -1,    71,    -1,    72,    -1,    74,    51,    -1,
      73,    51,    -1,    75,     3,    -1,    75,    -1,    75,    91,
      -1,    74,    53,    91,    -1,    76,    50,    -1,   108,    -1,
      69,    -1,    38,    77,    -1,    39,    77,    -1,    78,    77,
      -1,    54,    -1,    55,    -1,    77,    -1,    79,    56,    77,
      -1,    79,    57,    77,    -1,    79,    -1,    80,    54,    79,
      -1,    80,    55,    79,    -1,    80,    -1,    81,    -1,    82,
      58,    81,    -1,    82,    59,    81,    -1,    82,    40,    81,
      -1,    82,    41,    81,    -1,    82,    -1,    83,    42,    82,
      -1,    83,    43,    82,    -1,    83,    -1,    84,    -1,    85,
      -1,    86,    -1,    87,    22,    86,    -1,    87,    -1,    88,
      -1,    89,    23,    88,    -1,    89,    -1,    90,    -1,    77,
      92,    91,    -1,    60,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    91,    -1,    95,    61,    -1,   103,    61,
      -1,    96,    51,    -1,    98,    -1,    97,    -1,    98,   101,
      -1,    97,    53,   101,    -1,   105,    99,    50,    -1,    49,
      -1,   106,    49,    -1,   100,    -1,   102,    -1,   106,    -1,
     104,    -1,   105,    49,    -1,   106,    -1,   107,    -1,     3,
      -1,     5,    -1,     6,    -1,     4,    -1,   108,    -1,     8,
      -1,     9,    -1,    10,    -1,    12,    -1,    13,    -1,    14,
      -1,    94,    -1,   115,    -1,   113,    -1,   116,    -1,   113,
      -1,   116,    -1,   113,    -1,   109,    -1,   118,    -1,   119,
      -1,   122,    -1,   124,    -1,   126,    -1,   114,    -1,    26,
      61,    -1,    25,    61,    -1,    31,    61,    -1,    31,    93,
      61,    -1,    62,    63,    -1,    62,   117,    63,    -1,    62,
      63,    -1,    62,   117,    63,    -1,   110,    -1,   117,   110,
      -1,    61,    -1,    93,    61,    -1,    30,    50,    93,    51,
     120,    -1,   112,    28,   112,    -1,   112,    -1,    93,    -1,
     106,    49,    42,    91,    -1,    32,    50,    93,    51,    62,
     123,    63,    -1,   124,    -1,   125,    -1,   123,   124,    -1,
     123,   125,    -1,    33,    93,    64,   117,    -1,    33,    35,
      64,   117,    -1,    34,    64,   117,    -1,    24,    50,   121,
      51,   111,    -1,    29,    50,   118,   121,    61,    51,   111,
      -1,    29,    50,   118,   121,    61,    93,    51,   111,    -1,
     127,   128,    -1,   128,    -1,   129,    -1,    94,    -1,    95,
     116,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   218,   218,   228,   231,   232,   233,   234,   235,   238,
     239,   240,   241,   242,   246,   249,   252,   253,   256,   257,
     260,   261,   264,   267,   272,   273,   274,   275,   278,   279,
     282,   283,   284,   287,   288,   289,   292,   295,   296,   297,
     298,   299,   302,   303,   304,   307,   310,   313,   316,   317,
     320,   322,   323,   326,   329,   330,   335,   336,   337,   338,
     339,   342,   347,   348,   351,   354,   356,   359,   360,   363,
     365,   369,   372,   373,   377,   380,   383,   386,   391,   394,
     395,   396,   397,   398,   401,   402,   403,   404,   405,   406,
     409,   412,   413,   416,   417,   420,   421,   424,   425,   426,
     427,   428,   429,   430,   433,   434,   435,   436,   439,   440,
     443,   444,   447,   448,   451,   452,   455,   458,   459,   462,
     463,   469,   472,   473,   474,   475,   478,   479,   482,   485,
     486,   489,   495,   496,   499,   500,   503
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Float", "T_Int",
  "T_UInt", "T_Vec2", "T_Vec3", "T_Vec4", "T_Dims", "T_Mat2", "T_Mat3",
  "T_Mat4", "T_Struct", "T_In", "T_Out", "T_InOut", "T_Const", "T_Uniform",
  "T_Layout", "T_And", "T_Or", "T_While", "T_Break", "T_Continue", "T_Do",
  "T_Else", "T_For", "T_If", "T_Return", "T_Switch", "T_Case", "T_Default",
  "T_IntConstant", "T_FloatConstant", "T_BoolConstant", "T_Inc", "T_Dec",
  "T_LessEqual", "T_GreaterEqual", "T_Equal", "T_NotEqual", "T_Mul_Assign",
  "T_Div_Assign", "T_Add_Assign", "T_Sub_Assign", "T_FieldSelection",
  "T_Identifier", "'('", "')'", "'.'", "','", "'+'", "'-'", "'*'", "'/'",
  "'<'", "'>'", "'='", "';'", "'{'", "'}'", "':'", "$accept", "Program",
  "Var_Ident", "Pri_Expr", "Pst_Expr", "Func_Call", "Func_Call_Or_Method",
  "Func_Call_Generic", "Func_Call_Header_No_Params",
  "Func_Call_Header_With_Params", "Func_Call_Header", "Func_Id",
  "Unary_Expr", "Unary_Op", "Mult_Expr", "Add_Expr", "Shift_Expr",
  "Rel_Expr", "Eq_Expr", "And_Expr", "Xor_Expr", "Inc_Or_Expr",
  "Log_And_Expr", "Log_Xor_Expr", "Log_Or_Expr", "Cond_Expr",
  "Assign_Expr", "Assign_Op", "Expr", "Decl", "Func_Proto", "Func_Declr",
  "Func_Hdr_With_Param", "Func_Hdr", "Identifier", "Param_Declr",
  "Param_Decl", "Param_Type_Spec", "Init_Decl_List", "Single_Decl",
  "Fully_Spec_Type", "Type_Spec", "Type_Spec_Nonarr", "Non_Prim_Type",
  "Decl_Stmt", "Stmt", "Stmt_No_New_Scope", "Stmt_With_Scope",
  "Simple_Stmt", "Jump_Stmt", "Compd_Stmt_With_Scope",
  "Compd_Stmt_No_New_Scope", "Stmt_List", "Expr_Stmt", "Select_Stmt",
  "Select_Rest_Stmt", "Cond", "Switch_Stmt", "Switch_Stmt_List",
  "Case_Label", "Default_Label", "Iter_Stmt", "Trans_Unit", "Ext_Decl",
  "Func_Def", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      40,    41,    46,    44,    43,    45,    42,    47,    60,    62,
      61,    59,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    70,    71,    72,    72,    73,    73,
      74,    74,    75,    76,    77,    77,    77,    77,    78,    78,
      79,    79,    79,    80,    80,    80,    81,    82,    82,    82,
      82,    82,    83,    83,    83,    84,    85,    86,    87,    87,
      88,    89,    89,    90,    91,    91,    92,    92,    92,    92,
      92,    93,    94,    94,    95,    96,    96,    97,    97,    98,
      99,   100,   101,   101,   102,   103,   104,   105,   106,   107,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   123,   123,   123,   123,   124,   124,   125,   126,
     126,   126,   127,   127,   128,   128,   129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     2,     2,     1,     1,     2,     2,     2,     1,
       2,     3,     2,     1,     1,     2,     2,     2,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     3,
       1,     1,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     2,     3,     3,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     2,     1,     2,     5,     3,     1,     1,
       4,     7,     1,     1,     2,     2,     4,     4,     3,     5,
       7,     8,     2,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    79,    82,    80,    81,    84,    85,    86,    87,    88,
      89,     0,   135,     0,     0,    66,    65,     0,    75,     0,
      77,    78,    83,     2,   133,   134,     1,    62,     0,   136,
      64,     0,    72,    67,    73,    74,    63,    70,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     0,     3,     0,    28,    29,   114,     0,   110,
       4,     9,    24,    10,    14,    15,     0,     0,    19,     0,
      30,     0,    33,    36,    37,    42,    45,    46,    47,    48,
      50,    51,    53,    54,    61,     0,    90,     0,    23,    97,
     112,    92,   103,    91,     0,    98,    99,   100,   101,   102,
      68,    71,    69,     0,   105,   104,     0,     0,   106,     0,
      23,     0,     5,     0,    25,    26,     0,   108,     0,    12,
      13,     0,    17,    16,     0,    18,    20,    22,    57,    58,
      59,    60,    56,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   111,   113,
     119,     0,     0,     0,     0,   107,     0,     0,     0,     8,
     109,    11,    21,    55,    31,    32,    30,    34,    35,    40,
      41,    38,    39,    43,    44,    49,    52,     0,     0,     0,
       0,     0,   127,   126,     0,   129,    94,    93,     0,   118,
      96,    95,   116,     0,   120,     0,     0,     0,     0,     0,
     122,   123,   130,     0,   117,     0,   121,   124,   125,   131,
     128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,   133,    85,    86,
      87,    14,    15,    16,    38,    32,    33,    34,    17,    18,
      19,    20,    21,   110,    89,    90,   185,   189,    91,    92,
      93,   187,    94,    95,    96,   192,   152,    97,   199,    98,
     201,    99,    23,    24,    25
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -170
static const yytype_int16 yypact[] =
{
      78,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,    24,  -170,    -8,   -21,    -4,    78,    34,  -170,     8,
    -170,  -170,  -170,    78,  -170,  -170,  -170,  -170,   203,  -170,
    -170,    78,  -170,  -170,  -170,    36,  -170,    39,    60,  -170,
      64,    54,    55,    67,    69,   516,    70,   675,  -170,  -170,
    -170,   682,   682,  -170,   682,  -170,  -170,  -170,   264,  -170,
    -170,  -170,   -19,  -170,  -170,  -170,    71,    13,     1,    75,
      29,   682,    11,    16,  -170,    19,    37,  -170,  -170,  -170,
      99,  -170,   115,  -170,  -170,    79,  -170,    80,    90,  -170,
    -170,  -170,  -170,  -170,   325,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,   620,  -170,  -170,   566,   682,  -170,    81,
    -170,   682,    83,    84,  -170,  -170,    93,  -170,   386,  -170,
    -170,    97,  -170,  -170,   682,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,   682,  -170,   682,   682,   682,   682,   682,
     682,   682,   682,   682,   682,   682,   682,  -170,  -170,  -170,
    -170,   101,   100,   620,   103,  -170,   104,   447,   447,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,    11,    11,  -170,
    -170,  -170,  -170,    19,    19,  -170,  -170,   110,   507,    95,
     507,    98,   447,   447,   682,  -170,  -170,  -170,   627,   131,
    -170,  -170,  -170,    65,  -170,   507,   111,   507,   102,   -16,
    -170,  -170,  -170,   507,  -170,   447,  -170,  -170,  -170,  -170,
     447
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,    -9,  -170,   -29,  -170,   -35,   -31,  -170,  -170,
    -170,    18,  -170,    15,  -170,  -170,   -61,  -170,   -42,    22,
      25,  -170,  -170,  -170,  -170,  -170,   133,  -170,  -170,  -170,
    -170,   -10,  -170,     0,  -170,   -86,  -169,   -32,  -151,  -170,
    -170,   -12,   -56,    61,  -170,  -170,    17,  -170,  -170,  -158,
     -30,  -170,  -170,   148,  -170
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
      22,    29,   118,   109,   125,   113,    35,   126,   149,     5,
       6,     7,   116,     8,     9,    10,    22,    47,   198,   119,
     120,    35,    12,    22,    26,    13,   202,   186,    88,   190,
      30,    22,   149,   121,   209,   200,    48,    49,    50,    51,
      52,   207,   114,   115,   186,    12,   190,   206,    13,    31,
      53,    54,   186,    27,    28,    55,    56,    37,    88,   139,
     140,   150,   134,   162,   123,   154,   124,   135,   136,   156,
     137,   138,   163,   128,   129,   130,   131,   141,   142,   143,
     144,     1,     2,     3,     4,   101,     5,     6,     7,   132,
       8,     9,    10,   151,    88,    36,   149,   149,    47,   198,
     -76,   182,   183,    88,   169,   170,   171,   172,   167,   168,
     102,   150,   173,   174,   103,   104,   105,   106,    88,   107,
     111,   145,   122,   194,   149,   127,   164,   165,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   146,   -83,
     147,    27,   155,   151,   159,   161,   196,   157,   158,   210,
     177,   178,   184,    88,   180,   181,   188,    88,    88,   197,
     193,   176,   203,   175,   100,   204,   205,   153,   191,   208,
     179,    39,     0,     0,     0,     0,     0,     0,    88,     0,
      88,     0,    88,    88,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    88,     0,     0,
       0,     0,     0,    88,     0,    88,     1,     2,     3,     4,
      88,     5,     6,     7,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
       0,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,    57,    58,    59,     1,     2,     3,
       4,     0,     5,     6,     7,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,     0,     0,     0,    55,    56,
       0,     0,     0,     0,     0,    57,    58,   117,     1,     2,
       3,     4,     0,     5,     6,     7,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,     0,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,     0,     0,     0,    55,
      56,     0,     0,     0,     0,     0,    57,    58,   148,     1,
       2,     3,     4,     0,     5,     6,     7,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,     0,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,    57,    58,   160,
       1,     2,     3,     4,     0,     5,     6,     7,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,     0,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,    57,    58,
       1,     2,     3,     4,     0,     5,     6,     7,     0,     8,
       9,    10,     0,     0,     5,     6,     7,     0,     8,     9,
      10,    40,    41,    42,     0,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,    52,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,    55,    56,     0,     0,    53,    54,     0,    57,    28,
      55,    56,     0,     0,     5,     6,     7,   108,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,     0,     0,     0,
      55,    56,     0,     1,     2,     3,     4,    57,     5,     6,
       7,     0,     8,     9,    10,     5,     6,     7,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    50,    51,    52,
       0,     0,    48,    49,    50,    51,    52,     0,     0,    53,
      54,     0,     0,     0,    55,    56,    53,    54,   195,     0,
       0,    55,    56,     5,     6,     7,     0,     8,     9,    10,
       5,     6,     7,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,    49,    50,    51,    52,     0,     0,    48,    49,    50,
      51,    52,     0,     0,    53,    54,     0,     0,     0,    55,
      56,    53,    54,     0,     0,     0,    55,    56
};

static const yytype_int16 yycheck[] =
{
       0,    13,    58,    45,     3,    47,    16,    68,    94,     8,
       9,    10,    54,    12,    13,    14,    16,    33,    34,    38,
      39,    31,     0,    23,     0,     0,   195,   178,    28,   180,
      51,    31,   118,    52,   203,   193,    35,    36,    37,    38,
      39,   199,    51,    52,   195,    23,   197,    63,    23,    53,
      49,    50,   203,    61,    62,    54,    55,    49,    58,    40,
      41,   103,    71,   124,    51,   107,    53,    56,    57,   111,
      54,    55,   133,    44,    45,    46,    47,    58,    59,    42,
      43,     3,     4,     5,     6,    49,     8,     9,    10,    60,
      12,    13,    14,   103,    94,    61,   182,   183,    33,    34,
      61,   157,   158,   103,   139,   140,   141,   142,   137,   138,
      50,   153,   143,   144,    50,    61,    61,    50,   118,    50,
      50,    22,    51,   184,   210,    50,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    23,    49,
      61,    61,    61,   153,    51,    48,   188,    64,    64,   205,
      49,    51,    42,   153,    51,    51,    61,   157,   158,    28,
      62,   146,    51,   145,    31,   197,    64,   106,   180,   199,
     153,    23,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,
     180,    -1,   182,   183,    -1,   197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,   197,    -1,    -1,
      -1,    -1,    -1,   203,    -1,   205,     3,     4,     5,     6,
     210,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,     8,     9,    10,    -1,    12,    13,
      14,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    49,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    49,    50,    -1,    61,    62,
      54,    55,    -1,    -1,     8,     9,    10,    61,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    55,    -1,     3,     4,     5,     6,    61,     8,     9,
      10,    -1,    12,    13,    14,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    49,
      50,    -1,    -1,    -1,    54,    55,    49,    50,    51,    -1,
      -1,    54,    55,     8,     9,    10,    -1,    12,    13,    14,
       8,     9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    35,    36,    37,
      38,    39,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      55,    49,    50,    -1,    -1,    -1,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    12,    13,
      14,    66,    94,    95,    96,    97,    98,   103,   104,   105,
     106,   107,   108,   127,   128,   129,     0,    61,    62,   116,
      51,    53,   100,   101,   102,   106,    61,    49,    99,   128,
      24,    25,    26,    29,    30,    31,    32,    33,    35,    36,
      37,    38,    39,    49,    50,    54,    55,    61,    62,    63,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    93,    94,    95,   108,   109,
     110,   113,   114,   115,   117,   118,   119,   122,   124,   126,
     101,    49,    50,    50,    61,    61,    50,    50,    61,    93,
     108,    50,    35,    93,    77,    77,    93,    63,   117,    38,
      39,    52,    51,    51,    53,     3,    91,    50,    44,    45,
      46,    47,    60,    92,    77,    56,    57,    54,    55,    40,
      41,    58,    59,    42,    43,    22,    23,    61,    63,   110,
      93,   106,   121,   118,    93,    61,    93,    64,    64,    51,
      63,    48,    91,    91,    77,    77,    77,    79,    79,    81,
      81,    81,    81,    82,    82,    86,    88,    49,    51,   121,
      51,    51,   117,   117,    42,   111,   113,   116,    61,   112,
     113,   116,   120,    62,    91,    51,    93,    28,    34,   123,
     124,   125,   111,    51,   112,    64,    63,   124,   125,   111,
     117
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { 
                                                  Program *program = new Program((yyvsp[(1) - (1)].declList));
                                                  program->SetParent(NULL);
                                                  // if no errors, advance to next phase
                                                  if (ReportError::NumErrors() == 0) 
                                                      program->Print(0);
                                                  
                                                }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    { (yyval.id) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier)); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { (yyval.expr) = new FieldAccess(NULL, (yyvsp[(1) - (1)].id)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { (yyval.expr) = new IntConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].integerConstant)); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { (yyval.expr) = new FloatConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].floatConstant)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { (yyval.expr) = new BoolConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].boolConstant)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    { (yyval.expr) = new FieldAccess((yyvsp[(1) - (3)].expr), new Identifier((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].identifier))); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    { (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]), "++")); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    { (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]), "--")); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (2)].call); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (2)].expr); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (2)].call); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].call); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { ((yyval.call) = (yyvsp[(1) - (2)].call))->AddArg((yyvsp[(2) - (2)].expr)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { ((yyval.call) = (yyvsp[(1) - (3)].call))->AddArg((yyvsp[(3) - (3)].expr)); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { (yyval.call) = new Call((yylsp[(1) - (2)]), NULL, (yyvsp[(1) - (2)].id), new List<Expr*>()); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { (yyval.id) = new Identifier((yylsp[(1) - (1)]), ((yyvsp[(1) - (1)].type))->GetTypeName()); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), "++"), (yyvsp[(2) - (2)].expr)); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), "--"), (yyvsp[(2) - (2)].expr)); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (2)].op), (yyvsp[(2) - (2)].expr)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "*"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "/"), (yyvsp[(3) - (3)].expr));  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "+"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "-"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "<"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), ">"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "<="), (yyvsp[(3) - (3)].expr)); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), ">="), (yyvsp[(3) - (3)].expr));}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "=="), (yyvsp[(3) - (3)].expr)); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "!="), (yyvsp[(3) - (3)].expr)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    { (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "&&"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "||"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 330 "parser.y"
    { (yyval.expr) = new AssignExpr((yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 337 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    { (yyval.expr)=(yyvsp[(1) - (1)].expr);  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 347 "parser.y"
    { (yyval.decl)=(yyvsp[(1) - (2)].funcDecl); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {(yyval.decl)=(yyvsp[(1) - (2)].varDecl);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    { (yyval.funcDecl) = (yyvsp[(1) - (2)].funcDecl); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    {(yyval.funcDecl)=(yyvsp[(1) - (1)].funcDecl);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    { (yyval.funcDecl) = (yyvsp[(1) - (1)].funcDecl); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    { ((yyval.funcDecl) = (yyvsp[(1) - (2)].funcDecl))->addFormal((yyvsp[(2) - (2)].varDecl)); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { ((yyval.funcDecl) = (yyvsp[(1) - (3)].funcDecl))->addFormal((yyvsp[(3) - (3)].varDecl)); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    { (yyval.funcDecl) = new FnDecl((yyvsp[(2) - (3)].id), (yyvsp[(1) - (3)].type), new List<VarDecl*>()); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    {(yyval.id) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier));}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].type)); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    { (yyval.varDecl) = (yyvsp[(1) - (1)].varDecl); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    { (yyval.varDecl) = new VarDecl(NULL, (yyvsp[(1) - (1)].type)); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 377 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 380 "parser.y"
    {(yyval.varDecl)=(yyvsp[(1) - (1)].varDecl);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 383 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].type)); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 386 "parser.y"
    {(yyval.type)=(yyvsp[(1) - (1)].type);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 394 "parser.y"
    { (yyval.type) = Type::voidType; }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 395 "parser.y"
    { (yyval.type) = Type::floatType;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    { (yyval.type) = Type::intType;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 397 "parser.y"
    { (yyval.type) = Type::boolType;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    { (yyval.type) = Type::vec2Type;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 402 "parser.y"
    { (yyval.type) = Type::vec3Type;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    { (yyval.type) = Type::vec4Type;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 404 "parser.y"
    { (yyval.type) = Type::mat2Type;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 405 "parser.y"
    { (yyval.type) = Type::mat3Type;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    { (yyval.type) = Type::mat4Type;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 409 "parser.y"
    {}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 413 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 424 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 425 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].expr);}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 427 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)]._case);}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 429 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 430 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    { (yyval.stmt) = new ContinueStmt((yylsp[(1) - (2)])); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 434 "parser.y"
    { (yyval.stmt) = new BreakStmt((yylsp[(1) - (2)])); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yyloc), new EmptyExpr()); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 436 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].expr)); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    {(yyval.stmt) = new StmtBlock(new List<VarDecl*>(), new List<Stmt*>());}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 440 "parser.y"
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>(), (yyvsp[(2) - (3)].stmts)); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>(), new List<Stmt*>()); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 444 "parser.y"
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>(), (yyvsp[(2) - (3)].stmts)); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 447 "parser.y"
    { ((yyval.stmts) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt)); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 448 "parser.y"
    { ((yyval.stmts) = (yyvsp[(1) - (2)].stmts))->Append((yyvsp[(2) - (2)].stmt)); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    {(yyval.expr) = new EmptyExpr();}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (2)].expr);}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    { (yyval.stmt) = new IfStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].ifStmtTemp)->GetIf(), (yyvsp[(5) - (5)].ifStmtTemp)->GetElse()); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
    { (yyval.ifStmtTemp) = new IfStmtTemp((yyvsp[(1) - (3)].stmt), (yyvsp[(3) - (3)].stmt)); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    { (yyval.ifStmtTemp) = (yyval.ifStmtTemp) = new IfStmtTemp((yyvsp[(1) - (1)].stmt), NULL); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    { (yyval.expr)=(yyvsp[(1) - (1)].expr); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { 
                                                    VarExpr *rhs = new VarExpr((yylsp[(2) - (4)]), new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier)));
                                                    Operator *op = new Operator((yylsp[(3) - (4)]), "==");
                                                    (yyval.expr) = new AssignExpr(rhs, op, (yyvsp[(4) - (4)].expr)); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 469 "parser.y"
    { (yyval.stmt) = new SwitchStmt((yyvsp[(3) - (7)].expr), ((yyvsp[(6) - (7)].switchStmtList))->GetCases(), ((yyvsp[(6) - (7)].switchStmtList))->GetDefault()); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 472 "parser.y"
    { ((yyval.switchStmtList) = new SwitchStmtList())->AddCase((yyvsp[(1) - (1)]._case));  }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 473 "parser.y"
    { ((yyval.switchStmtList) = new SwitchStmtList())->SetDefault((yyvsp[(1) - (1)]._default)); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 474 "parser.y"
    { ((yyval.switchStmtList) = (yyvsp[(1) - (2)].switchStmtList))->AddCase((yyvsp[(2) - (2)]._case)); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 475 "parser.y"
    { ((yyval.switchStmtList) = (yyvsp[(1) - (2)].switchStmtList))->SetDefault((yyvsp[(2) - (2)]._default)); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    {}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    { (yyval._case) = new Case(new IntConstant((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].integerConstant)), (yyvsp[(4) - (4)].stmts)); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    { (yyval._default) = new Default((yyvsp[(3) - (3)].stmts)); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 485 "parser.y"
    { (yyval.stmt) = new WhileStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt)); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    {
                                                      (yyval.stmt) = new ForStmt((yyvsp[(3) - (7)].expr), (yyvsp[(4) - (7)].expr), new EmptyExpr(), (yyvsp[(7) - (7)].stmt));
                                                      }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 489 "parser.y"
    {
                                                      (yyval.stmt) = new ForStmt((yyvsp[(3) - (8)].expr), (yyvsp[(4) - (8)].expr), (yyvsp[(6) - (8)].expr), (yyvsp[(8) - (8)].stmt));
                                                      }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 495 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 496 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 499 "parser.y"
    { (yyval.decl)=(yyvsp[(1) - (1)].funcDecl); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 500 "parser.y"
    { (yyval.decl)=(yyvsp[(1) - (1)].decl); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 503 "parser.y"
    { ((yyval.funcDecl) = (yyvsp[(1) - (2)].funcDecl))->SetFunctionBody((yyvsp[(2) - (2)].stmt)); }
    break;



/* Line 1455 of yacc.c  */
#line 2829 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 506 "parser.y"


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global varAt the top level, the program is composed of a series of declarations (a declList).  We have the declaration of global, and then the declaration of main.  The problem is, the declaration of global also involved an assignment.  Because a program must be a series of declarations, it seems that "int global = 5;" must produce a declaration that is somehow composed of an assignment.  How do we approach this?iable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = true;
}
