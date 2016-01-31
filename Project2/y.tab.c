
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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  194

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
      50,    51,    55,    53,    61,    54,    52,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    60,
      57,    59,    58,     2,     2,     2,     2,     2,     2,     2,
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
      21,    25,    28,    31,    33,    36,    39,    42,    44,    46,
      48,    52,    56,    58,    62,    66,    68,    70,    74,    78,
      82,    86,    88,    92,    96,    98,   100,   102,   104,   108,
     110,   112,   116,   118,   120,   124,   126,   128,   130,   132,
     134,   136,   139,   142,   145,   147,   149,   152,   156,   160,
     162,   165,   167,   169,   171,   173,   176,   178,   180,   182,
     184,   186,   188,   190,   192,   194,   196,   198,   200,   202,
     204,   206,   208,   210,   212,   214,   216,   218,   220,   222,
     224,   226,   228,   231,   234,   237,   241,   244,   248,   251,
     255,   257,   260,   262,   265,   271,   275,   277,   279,   284,
     292,   294,   296,   299,   302,   307,   312,   316,   322,   330,
     339,   342,   344,   346,   348
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,   119,    -1,    49,    -1,    67,    -1,    35,
      -1,    36,    -1,    37,    -1,    50,    86,    51,    -1,    68,
      -1,    69,    52,    48,    -1,    69,    38,    -1,    69,    39,
      -1,    69,    -1,    38,    70,    -1,    39,    70,    -1,    71,
      70,    -1,    53,    -1,    54,    -1,    70,    -1,    72,    55,
      70,    -1,    72,    56,    70,    -1,    72,    -1,    73,    53,
      72,    -1,    73,    54,    72,    -1,    73,    -1,    74,    -1,
      75,    57,    74,    -1,    75,    58,    74,    -1,    75,    40,
      74,    -1,    75,    41,    74,    -1,    75,    -1,    76,    42,
      75,    -1,    76,    43,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    22,    79,    -1,    80,    -1,
      81,    -1,    82,    23,    81,    -1,    82,    -1,    83,    -1,
      70,    85,    84,    -1,    59,    -1,    44,    -1,    45,    -1,
      46,    -1,    47,    -1,    84,    -1,    88,    60,    -1,    96,
      60,    -1,    89,    51,    -1,    91,    -1,    90,    -1,    91,
      94,    -1,    90,    61,    94,    -1,    98,    92,    50,    -1,
      49,    -1,    99,    49,    -1,    93,    -1,    95,    -1,    99,
      -1,    97,    -1,    98,    49,    -1,    99,    -1,   100,    -1,
       3,    -1,     5,    -1,     6,    -1,     4,    -1,     8,    -1,
       9,    -1,    10,    -1,    12,    -1,    13,    -1,    14,    -1,
      87,    -1,   107,    -1,   105,    -1,   108,    -1,   105,    -1,
     108,    -1,   105,    -1,   101,    -1,   110,    -1,   111,    -1,
     114,    -1,   116,    -1,   118,    -1,   106,    -1,    26,    60,
      -1,    25,    60,    -1,    31,    60,    -1,    31,    86,    60,
      -1,    62,    63,    -1,    62,   109,    63,    -1,    62,    63,
      -1,    62,   109,    63,    -1,   102,    -1,   109,   102,    -1,
      60,    -1,    86,    60,    -1,    30,    50,    86,    51,   112,
      -1,   104,    28,   104,    -1,   104,    -1,    86,    -1,    99,
      49,    42,    84,    -1,    32,    50,    86,    51,    62,   115,
      63,    -1,   116,    -1,   117,    -1,   115,   116,    -1,   115,
     117,    -1,    33,    86,    64,   109,    -1,    33,    35,    64,
     109,    -1,    34,    64,   109,    -1,    24,    50,   113,    51,
     103,    -1,    29,    50,   110,   113,    60,    51,   103,    -1,
      29,    50,   110,   113,    60,    86,    51,   103,    -1,   119,
     120,    -1,   120,    -1,   121,    -1,    87,    -1,    88,   108,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   210,   210,   219,   222,   223,   224,   225,   226,   229,
     230,   231,   232,   237,   238,   239,   240,   243,   244,   247,
     248,   249,   252,   253,   254,   257,   260,   261,   262,   263,
     264,   267,   268,   269,   272,   275,   278,   281,   282,   285,
     287,   288,   291,   294,   295,   300,   301,   302,   303,   304,
     307,   312,   314,   317,   320,   322,   325,   326,   329,   331,
     335,   338,   339,   343,   346,   349,   352,   357,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   372,   375,
     376,   379,   380,   383,   384,   387,   388,   389,   390,   391,
     392,   393,   396,   397,   398,   399,   402,   403,   406,   407,
     410,   411,   414,   415,   418,   421,   422,   425,   426,   432,
     435,   436,   437,   438,   441,   442,   445,   448,   449,   452,
     458,   459,   462,   463,   466
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
  "T_Identifier", "'('", "')'", "'.'", "'+'", "'-'", "'*'", "'/'", "'<'",
  "'>'", "'='", "';'", "','", "'{'", "'}'", "':'", "$accept", "Program",
  "Var_Ident", "Pri_Expr", "Pst_Expr", "Unary_Expr", "Unary_Op",
  "Mult_Expr", "Add_Expr", "Shift_Expr", "Rel_Expr", "Eq_Expr", "And_Expr",
  "Xor_Expr", "Inc_Or_Expr", "Log_And_Expr", "Log_Xor_Expr", "Log_Or_Expr",
  "Cond_Expr", "Assign_Expr", "Assign_Op", "Expr", "Decl", "Func_Proto",
  "Func_Declr", "Func_Hdr_With_Param", "Func_Hdr", "Identifier",
  "Param_Declr", "Param_Decl", "Param_Type_Spec", "Init_Decl_List",
  "Single_Decl", "Fully_Spec_Type", "Type_Spec", "Type_Spec_Nonarr",
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
      40,    41,    46,    43,    45,    42,    47,    60,    62,    61,
      59,    44,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    73,    73,    73,    74,    75,    75,    75,    75,
      75,    76,    76,    76,    77,    78,    79,    80,    80,    81,
      82,    82,    83,    84,    84,    85,    85,    85,    85,    85,
      86,    87,    87,    88,    89,    89,    90,    90,    91,    92,
      93,    94,    94,    95,    96,    97,    98,    99,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   112,   112,   113,   113,   114,
     115,   115,   115,   115,   116,   116,   117,   118,   118,   118,
     119,   119,   120,   120,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     2,     2,     1,     2,     2,     2,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     3,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     2,     3,     3,     1,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     3,     2,     3,     2,     3,
       1,     2,     1,     2,     5,     3,     1,     1,     4,     7,
       1,     1,     2,     2,     4,     4,     3,     5,     7,     8,
       2,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    68,    71,    69,    70,    72,    73,    74,    75,    76,
      77,     0,   123,     0,     0,    55,    54,     0,    64,     0,
      66,    67,     2,   121,   122,     1,    51,     0,   124,    53,
       0,    61,    56,    62,    63,    52,    59,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     0,     3,     0,    17,    18,   102,     0,    98,     4,
       9,    13,    19,     0,    22,    25,    26,    31,    34,    35,
      36,    37,    39,    40,    42,    43,    50,     0,    78,     0,
      85,   100,    80,    91,    79,     0,    86,    87,    88,    89,
      90,    57,    60,    58,     0,    93,    92,     0,     0,    94,
       0,     0,     5,     0,    14,    15,     0,    96,     0,    11,
      12,     0,    46,    47,    48,    49,    45,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,    99,   101,   107,     0,     0,     0,     0,    95,
       0,     0,     0,     8,    97,    10,    44,    20,    21,    19,
      23,    24,    29,    30,    27,    28,    32,    33,    38,    41,
       0,     0,     0,     0,     0,   115,   114,     0,   117,    82,
      81,     0,   106,    84,    83,   104,     0,   108,     0,     0,
       0,     0,     0,   110,   111,   118,     0,   105,     0,   109,
     112,   113,   119,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     117,    77,    78,    79,    14,    15,    16,    37,    31,    32,
      33,    17,    18,    19,    20,    21,    80,    81,   168,   172,
      82,    83,    84,   170,    85,    86,    87,   175,   136,    88,
     182,    89,   184,    90,    22,    23,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -173
static const yytype_int16 yypact[] =
{
     520,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,     8,  -173,   -29,   -39,   -27,   520,   -14,  -173,     6,
    -173,  -173,   520,  -173,  -173,  -173,  -173,    12,  -173,  -173,
     520,  -173,  -173,  -173,    11,  -173,    22,    34,  -173,    64,
      48,    62,    75,    80,    74,    83,   462,  -173,  -173,  -173,
     468,   468,  -173,   468,  -173,  -173,  -173,   133,  -173,  -173,
    -173,    19,    72,   468,    14,    36,  -173,    23,    25,  -173,
    -173,  -173,    51,  -173,   112,  -173,  -173,    84,  -173,    88,
    -173,  -173,  -173,  -173,  -173,   194,  -173,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,   436,  -173,  -173,   416,   468,  -173,
      89,   468,    76,    87,  -173,  -173,   101,  -173,   255,  -173,
    -173,   105,  -173,  -173,  -173,  -173,  -173,   468,  -173,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,  -173,  -173,  -173,  -173,   106,   103,   436,   109,  -173,
     110,   316,   316,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
      14,    14,  -173,  -173,  -173,  -173,    23,    23,  -173,  -173,
     114,   376,   113,   376,   115,   316,   316,   468,  -173,  -173,
    -173,   442,   146,  -173,  -173,  -173,    58,  -173,   376,   124,
     376,   116,   -24,  -173,  -173,  -173,   376,  -173,   316,  -173,
    -173,  -173,  -173,   316
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,  -173,  -173,  -173,   -23,  -173,   -28,  -173,   -47,
      -7,  -173,  -173,  -173,    47,  -173,    49,  -173,  -173,  -114,
    -173,   -42,    13,    32,  -173,  -173,  -173,  -173,  -173,   148,
    -173,  -173,  -173,  -173,   -11,  -173,  -173,   -78,  -172,     1,
      31,  -173,  -173,   -13,   -56,    91,  -173,  -173,    52,  -173,
    -173,  -153,     2,  -173,  -173,   163,  -173
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -66
static const yytype_int16 yytable[] =
{
      28,   108,   100,   146,   103,    34,   185,   133,    25,    46,
     181,   106,    29,    12,   192,     1,     2,     3,     4,    34,
       5,     6,     7,   183,     8,     9,    10,   104,   105,   190,
     133,    26,    13,    27,    30,    12,    39,    40,    41,   189,
     118,    42,    43,    44,    45,    46,    35,    47,    48,    49,
      50,    51,   134,   177,    13,    36,   138,   109,   110,   140,
      92,    52,    53,   123,   124,    54,    55,   127,   128,   119,
     120,   111,    56,   129,    57,    58,   152,   153,   154,   155,
     125,   126,   -65,   135,    93,   165,   166,   133,   133,   121,
     122,    46,   181,   150,   151,   134,   147,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,    95,    47,
      48,    49,    50,    51,    94,   133,   112,   113,   114,   115,
     156,   157,    96,    52,    53,    97,   135,    54,    55,   179,
      98,   116,   193,   101,    99,   130,     1,     2,     3,     4,
     141,     5,     6,     7,   131,     8,     9,    10,    26,   139,
     174,   142,   143,   145,   161,   160,   167,    39,    40,    41,
     163,   164,    42,    43,    44,    45,    46,   174,    47,    48,
      49,    50,    51,   171,   180,   186,   158,   176,    91,   159,
     188,   187,    52,    53,   191,    38,    54,    55,   137,   162,
       0,     0,   169,    56,   173,    57,   107,     1,     2,     3,
       4,     0,     5,     6,     7,     0,     8,     9,    10,   169,
       0,   173,     0,     0,     0,     0,     0,   169,    39,    40,
      41,     0,     0,    42,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,     0,     0,    54,    55,     0,
       0,     0,     0,     0,    56,     0,    57,   132,     1,     2,
       3,     4,     0,     5,     6,     7,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,     0,    42,    43,    44,    45,    46,     0,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,    54,    55,
       0,     0,     0,     0,     0,    56,     0,    57,   144,     1,
       2,     3,     4,     0,     5,     6,     7,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,     0,     0,    42,    43,    44,    45,    46,
       0,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,     0,     0,    54,
      55,     0,     0,     0,     0,     0,    56,     0,    57,     1,
       2,     3,     4,     0,     5,     6,     7,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,     0,     0,    42,    43,    44,    45,    46,
       0,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,     0,     0,    54,
      55,     0,     0,     0,     0,     0,    56,     0,    27,     1,
       2,     3,     4,     0,     5,     6,     7,     0,     8,     9,
      10,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,     0,     0,    54,
      55,    47,    48,    49,    50,    51,    56,    47,    48,    49,
      50,    51,     0,     0,     0,    52,    53,     0,     0,    54,
      55,    52,    53,   178,     0,    54,    55,   102,    48,    49,
      50,    51,     0,    47,    48,    49,    50,    51,     0,     0,
       0,    52,    53,     0,     0,    54,    55,    52,    53,     0,
       0,    54,    55,     1,     2,     3,     4,     0,     5,     6,
       7,     0,     8,     9,    10
};

static const yytype_int16 yycheck[] =
{
      13,    57,    44,   117,    46,    16,   178,    85,     0,    33,
      34,    53,    51,     0,   186,     3,     4,     5,     6,    30,
       8,     9,    10,   176,    12,    13,    14,    50,    51,   182,
     108,    60,     0,    62,    61,    22,    24,    25,    26,    63,
      63,    29,    30,    31,    32,    33,    60,    35,    36,    37,
      38,    39,    94,   167,    22,    49,    98,    38,    39,   101,
      49,    49,    50,    40,    41,    53,    54,    42,    43,    55,
      56,    52,    60,    22,    62,    63,   123,   124,   125,   126,
      57,    58,    60,    94,    50,   141,   142,   165,   166,    53,
      54,    33,    34,   121,   122,   137,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    60,    35,
      36,    37,    38,    39,    50,   193,    44,    45,    46,    47,
     127,   128,    60,    49,    50,    50,   137,    53,    54,   171,
      50,    59,   188,    50,    60,    23,     3,     4,     5,     6,
      64,     8,     9,    10,    60,    12,    13,    14,    60,    60,
     163,    64,    51,    48,    51,    49,    42,    24,    25,    26,
      51,    51,    29,    30,    31,    32,    33,   180,    35,    36,
      37,    38,    39,    60,    28,    51,   129,    62,    30,   130,
      64,   180,    49,    50,   182,    22,    53,    54,    97,   137,
      -1,    -1,   161,    60,   163,    62,    63,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,   178,
      -1,   180,    -1,    -1,    -1,    -1,    -1,   186,    24,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      54,    35,    36,    37,    38,    39,    60,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      54,    49,    50,    51,    -1,    53,    54,    35,    36,    37,
      38,    39,    -1,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    54,    49,    50,    -1,
      -1,    53,    54,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    12,    13,
      14,    66,    87,    88,    89,    90,    91,    96,    97,    98,
      99,   100,   119,   120,   121,     0,    60,    62,   108,    51,
      61,    93,    94,    95,    99,    60,    49,    92,   120,    24,
      25,    26,    29,    30,    31,    32,    33,    35,    36,    37,
      38,    39,    49,    50,    53,    54,    60,    62,    63,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    86,    87,    88,
     101,   102,   105,   106,   107,   109,   110,   111,   114,   116,
     118,    94,    49,    50,    50,    60,    60,    50,    50,    60,
      86,    50,    35,    86,    70,    70,    86,    63,   109,    38,
      39,    52,    44,    45,    46,    47,    59,    85,    70,    55,
      56,    53,    54,    40,    41,    57,    58,    42,    43,    22,
      23,    60,    63,   102,    86,    99,   113,   110,    86,    60,
      86,    64,    64,    51,    63,    48,    84,    70,    70,    70,
      72,    72,    74,    74,    74,    74,    75,    75,    79,    81,
      49,    51,   113,    51,    51,   109,   109,    42,   103,   105,
     108,    60,   104,   105,   108,   112,    62,    84,    51,    86,
      28,    34,   115,   116,   117,   103,    51,   104,    64,    63,
     116,   117,   103,   109
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
#line 210 "parser.y"
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
#line 219 "parser.y"
    { (yyval.id) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier)); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    { (yyval.expr) = new FieldAccess(NULL, (yyvsp[(1) - (1)].id)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { (yyval.expr) = new IntConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].integerConstant)); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { (yyval.expr) = new FloatConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].floatConstant)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    { (yyval.expr) = new BoolConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].boolConstant)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    { (yyval.expr) = new FieldAccess((yyvsp[(1) - (3)].expr), new Identifier((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].identifier))); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]), "++")); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]), "--")); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    { (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), "++"), (yyvsp[(2) - (2)].expr)); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    { (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), "--"), (yyvsp[(2) - (2)].expr)); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (2)].op), (yyvsp[(2) - (2)].expr)); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "*"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "/"), (yyvsp[(3) - (3)].expr));  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "+"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "-"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "<"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), ">"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "<="), (yyvsp[(3) - (3)].expr)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), ">="), (yyvsp[(3) - (3)].expr));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    { (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "=="), (yyvsp[(3) - (3)].expr)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    { (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "!="), (yyvsp[(3) - (3)].expr)); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    { (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "&&"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(1) - (3)]), "||"), (yyvsp[(3) - (3)].expr)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    { (yyval.expr) = new AssignExpr((yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expr)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), yytext); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { (yyval.expr)=(yyvsp[(1) - (1)].expr);  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { (yyval.decl)=(yyvsp[(1) - (2)].funcDecl); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    {(yyval.decl)=(yyvsp[(1) - (2)].varDecl);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    { (yyval.funcDecl) = (yyvsp[(1) - (2)].funcDecl); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    {(yyval.funcDecl)=(yyvsp[(1) - (1)].funcDecl);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    { (yyval.funcDecl) = (yyvsp[(1) - (1)].funcDecl); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    { ((yyval.funcDecl) = (yyvsp[(1) - (2)].funcDecl))->addFormal((yyvsp[(2) - (2)].varDecl)); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    { ((yyval.funcDecl) = (yyvsp[(1) - (3)].funcDecl))->addFormal((yyvsp[(3) - (3)].varDecl)); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { (yyval.funcDecl) = new FnDecl((yyvsp[(2) - (3)].id), (yyvsp[(1) - (3)].type), new List<VarDecl*>()); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    {(yyval.id) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier));}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].type)); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    { (yyval.varDecl) = (yyvsp[(1) - (1)].varDecl); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    { (yyval.varDecl) = new VarDecl(NULL, (yyvsp[(1) - (1)].type)); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    {(yyval.varDecl)=(yyvsp[(1) - (1)].varDecl);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].type)); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    {(yyval.type)=(yyvsp[(1) - (1)].type);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { (yyval.type) = Type::voidType; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    { (yyval.type) = Type::floatType;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    { (yyval.type) = Type::intType;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    { (yyval.type) = Type::boolType;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    { (yyval.type) = Type::vec2Type;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { (yyval.type) = Type::vec3Type;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    { (yyval.type) = Type::vec4Type;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 367 "parser.y"
    { (yyval.type) = Type::mat2Type;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    { (yyval.type) = Type::mat3Type;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    { (yyval.type) = Type::mat4Type;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    {}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 380 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 383 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 387 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].expr);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)]._case);}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 392 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 393 "parser.y"
    {(yyval.stmt)=(yyvsp[(1) - (1)].stmt);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    { (yyval.stmt) = new ContinueStmt((yylsp[(1) - (2)])); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 397 "parser.y"
    { (yyval.stmt) = new BreakStmt((yylsp[(1) - (2)])); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yyloc), new EmptyExpr()); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].expr)); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 402 "parser.y"
    {(yyval.stmt) = new StmtBlock(new List<VarDecl*>(), new List<Stmt*>());}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>(), (yyvsp[(2) - (3)].stmts)); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>(), new List<Stmt*>()); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>(), (yyvsp[(2) - (3)].stmts)); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    { ((yyval.stmts) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt)); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 411 "parser.y"
    { ((yyval.stmts) = (yyvsp[(1) - (2)].stmts))->Append((yyvsp[(2) - (2)].stmt)); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    {(yyval.expr) = new EmptyExpr();}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 415 "parser.y"
    {(yyval.expr)=(yyvsp[(1) - (2)].expr);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    { (yyval.stmt) = new IfStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].ifStmtTemp)->GetIf(), (yyvsp[(5) - (5)].ifStmtTemp)->GetElse()); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    { (yyval.ifStmtTemp) = new IfStmtTemp((yyvsp[(1) - (3)].stmt), (yyvsp[(3) - (3)].stmt)); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 422 "parser.y"
    { (yyval.ifStmtTemp) = (yyval.ifStmtTemp) = new IfStmtTemp((yyvsp[(1) - (1)].stmt), NULL); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 425 "parser.y"
    { (yyval.expr)=(yyvsp[(1) - (1)].expr); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    { 
                                                    VarExpr *rhs = new VarExpr((yylsp[(2) - (4)]), new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier)));
                                                    Operator *op = new Operator((yylsp[(3) - (4)]), "==");
                                                    (yyval.expr) = new AssignExpr(rhs, op, (yyvsp[(4) - (4)].expr)); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    { (yyval.stmt) = new SwitchStmt((yyvsp[(3) - (7)].expr), ((yyvsp[(6) - (7)].switchStmtList))->GetCases(), ((yyvsp[(6) - (7)].switchStmtList))->GetDefault()); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    { ((yyval.switchStmtList) = new SwitchStmtList())->AddCase((yyvsp[(1) - (1)]._case));  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 436 "parser.y"
    { ((yyval.switchStmtList) = new SwitchStmtList())->SetDefault((yyvsp[(1) - (1)]._default)); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    { ((yyval.switchStmtList) = (yyvsp[(1) - (2)].switchStmtList))->AddCase((yyvsp[(2) - (2)]._case)); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 438 "parser.y"
    { ((yyval.switchStmtList) = (yyvsp[(1) - (2)].switchStmtList))->SetDefault((yyvsp[(2) - (2)]._default)); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 441 "parser.y"
    {}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    { (yyval._case) = new Case(new IntConstant((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].integerConstant)), (yyvsp[(4) - (4)].stmts)); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    { (yyval._default) = new Default((yyvsp[(3) - (3)].stmts)); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 448 "parser.y"
    { (yyval.stmt) = new WhileStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt)); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 449 "parser.y"
    {
                                                      (yyval.stmt) = new ForStmt((yyvsp[(3) - (7)].expr), (yyvsp[(4) - (7)].expr), new EmptyExpr(), (yyvsp[(7) - (7)].stmt));
                                                      }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    {
                                                      (yyval.stmt) = new ForStmt((yyvsp[(3) - (8)].expr), (yyvsp[(4) - (8)].expr), (yyvsp[(6) - (8)].expr), (yyvsp[(8) - (8)].stmt));
                                                      }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    { (yyval.decl)=(yyvsp[(1) - (1)].funcDecl); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { (yyval.decl)=(yyvsp[(1) - (1)].decl); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    { ((yyval.funcDecl) = (yyvsp[(1) - (2)].funcDecl))->SetFunctionBody((yyvsp[(2) - (2)].stmt)); }
    break;



/* Line 1455 of yacc.c  */
#line 2686 "y.tab.c"
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
#line 469 "parser.y"


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
