/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



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
     T_BVec2 = 263,
     T_BVec3 = 264,
     T_BVec4 = 265,
     T_IVec2 = 266,
     T_IVec3 = 267,
     T_IVec4 = 268,
     T_UVec2 = 269,
     T_UVec3 = 270,
     T_UVec4 = 271,
     T_Vec2 = 272,
     T_Vec3 = 273,
     T_Vec4 = 274,
     T_Dims = 275,
     T_Mat2 = 276,
     T_Mat3 = 277,
     T_Mat4 = 278,
     T_Struct = 279,
     T_FieldSelection = 280,
     T_In = 281,
     T_Out = 282,
     T_InOut = 283,
     T_Const = 284,
     T_Uniform = 285,
     T_Layout = 286,
     T_And = 287,
     T_Or = 288,
     T_While = 289,
     T_Break = 290,
     T_Continue = 291,
     T_Do = 292,
     T_Else = 293,
     T_For = 294,
     T_If = 295,
     T_Return = 296,
     T_Switch = 297,
     T_Case = 298,
     T_Default = 299,
     T_Identifier = 300,
     T_IntConstant = 301,
     T_FloatConstant = 302,
     T_BoolConstant = 303,
     T_Inc = 304,
     T_Dec = 305,
     T_LessEqual = 306,
     T_GreaterEqual = 307,
     T_Equal = 308,
     T_NotEqual = 309,
     T_Mul_Assign = 310,
     T_Div_Assign = 311,
     T_Add_Assign = 312,
     T_Sub_Assign = 313
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Float 260
#define T_Int 261
#define T_UInt 262
#define T_BVec2 263
#define T_BVec3 264
#define T_BVec4 265
#define T_IVec2 266
#define T_IVec3 267
#define T_IVec4 268
#define T_UVec2 269
#define T_UVec3 270
#define T_UVec4 271
#define T_Vec2 272
#define T_Vec3 273
#define T_Vec4 274
#define T_Dims 275
#define T_Mat2 276
#define T_Mat3 277
#define T_Mat4 278
#define T_Struct 279
#define T_FieldSelection 280
#define T_In 281
#define T_Out 282
#define T_InOut 283
#define T_Const 284
#define T_Uniform 285
#define T_Layout 286
#define T_And 287
#define T_Or 288
#define T_While 289
#define T_Break 290
#define T_Continue 291
#define T_Do 292
#define T_Else 293
#define T_For 294
#define T_If 295
#define T_Return 296
#define T_Switch 297
#define T_Case 298
#define T_Default 299
#define T_Identifier 300
#define T_IntConstant 301
#define T_FloatConstant 302
#define T_BoolConstant 303
#define T_Inc 304
#define T_Dec 305
#define T_LessEqual 306
#define T_GreaterEqual 307
#define T_Equal 308
#define T_NotEqual 309
#define T_Mul_Assign 310
#define T_Div_Assign 311
#define T_Add_Assign 312
#define T_Sub_Assign 313




/* Copy the first part of user declarations.  */
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 41 "parser.y"
{
  int integerConstant;
  bool boolConstant;
  char *stringConstant;
  double doubleConstant;
  char identifier[MaxIdentLen+1]; // +1 for terminating null
  Node *node;
  Identifier *ident;
  Error *error;
  Decl *decl;
  List<Decl*> *declList;
  VarDecl *varDecl;
  List<VarDecl*> *varDeclList;
  VarDeclError *varDeclError;
  FnDecl *fnDecl;
  FormalsError *formalsError;
  Expr *expr;
  ExprError *exprError;
  EmptyExpr *emptyExpr;
  IntConstant *intConst;
  FloatConstant *floatConst;
  BoolConstant *boolConst;
  Operator *_operator;
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
  StmtBlock *stmtBlock;
  ConditionalStmt *conditionalStmt;
  LoopStmt *loopStmt;
  ForStmt *forStmt;
  WhileStmt *whileStmt;
  IfStmt *ifStmt;
  IfStmtExprError *ifStmtExprError;
  BreakStmt *breakStmt;
  ReturnStmt *returnStmt;
  SwitchLabel *switchLabel;
  Case *caseStmts;
  Default *_default;
  SwitchStmt *switchStmt;
  SwitchStmtError *switchStmtError;
  Type *type;
  NamedType *namedType;
  ArrayType *arrayType;
}
/* Line 193 of yacc.c.  */
#line 284 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
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


/* Line 216 of yacc.c.  */
#line 309 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1097

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNRULES -- Number of states.  */
#define YYNSTATES  310

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    69,    72,     2,
      59,    60,    67,    65,    64,    66,    63,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    76,
      70,    75,    71,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    73,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    74,    78,     2,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    26,    28,    32,    35,    38,    40,    42,    44,    47,
      50,    53,    55,    58,    62,    65,    67,    69,    71,    74,
      77,    80,    82,    84,    86,    90,    94,    98,   100,   104,
     108,   110,   115,   120,   122,   126,   130,   134,   138,   140,
     144,   148,   150,   154,   156,   160,   162,   166,   168,   172,
     174,   178,   180,   182,   186,   188,   190,   192,   194,   196,
     198,   202,   204,   207,   210,   214,   219,   222,   226,   229,
     231,   233,   237,   240,   244,   247,   251,   254,   256,   259,
     261,   263,   265,   269,   274,   281,   287,   289,   292,   296,
     302,   307,   309,   312,   317,   319,   323,   325,   329,   331,
     334,   336,   338,   340,   342,   344,   346,   348,   350,   353,
     356,   360,   364,   369,   371,   373,   375,   377,   379,   381,
     383,   385,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   407,   409,   415,   420,   422,   425,   429,   434,
     436,   440,   442,   445,   447,   449,   451,   453,   455,   457,
     459,   461,   463,   465,   467,   470,   474,   476,   479,   481,
     484,   490,   494,   496,   498,   503,   511,   513,   517,   520,
     526,   534,   541,   543,   545,   548,   552,   555,   558,   561,
     565,   568,   570,   572,   574
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,   153,    -1,    45,    -1,    82,    -1,    46,
      -1,    47,    -1,    48,    -1,    59,   108,    60,    -1,    83,
      -1,    83,    61,    85,    62,    -1,    86,    -1,    84,    63,
      25,    -1,    84,    49,    -1,    84,    50,    -1,   108,    -1,
      87,    -1,    88,    -1,    90,    60,    -1,    89,    60,    -1,
      91,     3,    -1,    91,    -1,    91,   106,    -1,    90,    64,
     106,    -1,    92,    59,    -1,   128,    -1,    84,    -1,    84,
      -1,    49,    93,    -1,    50,    93,    -1,    94,    93,    -1,
      65,    -1,    66,    -1,    93,    -1,    95,    67,    93,    -1,
      95,    68,    93,    -1,    95,    69,    93,    -1,    95,    -1,
      96,    65,    95,    -1,    96,    66,    95,    -1,    96,    -1,
      97,    70,    70,    96,    -1,    97,    71,    71,    96,    -1,
      97,    -1,    98,    70,    97,    -1,    98,    71,    97,    -1,
      98,    51,    97,    -1,    98,    52,    97,    -1,    98,    -1,
      99,    53,    98,    -1,    99,    54,    98,    -1,    99,    -1,
     100,    72,    99,    -1,   100,    -1,   101,    73,   100,    -1,
     101,    -1,   102,    74,   101,    -1,   102,    -1,   103,    32,
     102,    -1,   103,    -1,   104,    33,   103,    -1,   104,    -1,
     105,    -1,    93,   107,   106,    -1,    75,    -1,    55,    -1,
      56,    -1,    57,    -1,    58,    -1,   106,    -1,   108,    64,
     106,    -1,   105,    -1,   119,    76,    -1,   125,    76,    -1,
     125,    45,    76,    -1,   125,    45,   111,    76,    -1,    64,
      45,    -1,   111,    64,    45,    -1,   113,    60,    -1,   114,
      -1,   115,    -1,   121,    45,    59,    -1,   114,   117,    -1,
     115,    64,   117,    -1,   128,    45,    -1,   128,    45,   129,
      -1,   125,   116,    -1,   116,    -1,   125,   118,    -1,   118,
      -1,   128,    -1,   120,    -1,   119,    64,    45,    -1,   119,
      64,    45,   129,    -1,   119,    64,    45,   129,    75,   136,
      -1,   119,    64,    45,    75,   136,    -1,   121,    -1,   121,
      45,    -1,   121,    45,   129,    -1,   121,    45,   129,    75,
     136,    -1,   121,    45,    75,   136,    -1,   128,    -1,   125,
     128,    -1,    31,    59,   123,    60,    -1,   124,    -1,   123,
      64,   124,    -1,    45,    -1,    45,    75,    46,    -1,   126,
      -1,   125,   126,    -1,   127,    -1,   122,    -1,    29,    -1,
      26,    -1,    27,    -1,    28,    -1,    30,    -1,   130,    -1,
     130,   129,    -1,    61,    62,    -1,    61,   109,    62,    -1,
     129,    61,    62,    -1,   129,    61,   109,    62,    -1,     3,
      -1,     5,    -1,     6,    -1,     4,    -1,    17,    -1,    18,
      -1,    19,    -1,     8,    -1,     9,    -1,    10,    -1,    11,
      -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,
      -1,    21,    -1,    22,    -1,    23,    -1,   131,    -1,    24,
      45,    77,   132,    78,    -1,    24,    77,   132,    78,    -1,
     133,    -1,   132,   133,    -1,   128,   134,    76,    -1,   125,
     128,   134,    76,    -1,   135,    -1,   134,    64,   135,    -1,
      45,    -1,    45,   129,    -1,   106,    -1,   110,    -1,   140,
      -1,   139,    -1,   137,    -1,   142,    -1,   143,    -1,   146,
      -1,   148,    -1,   149,    -1,   152,    -1,    77,    78,    -1,
      77,   141,    78,    -1,   138,    -1,   141,   138,    -1,    76,
      -1,   108,    76,    -1,    40,    59,   108,    60,   144,    -1,
     138,    38,   138,    -1,   138,    -1,   108,    -1,   121,    45,
      53,   136,    -1,    42,    59,   108,    60,    77,   147,    78,
      -1,   141,    -1,    43,   108,    79,    -1,    44,    79,    -1,
      34,    59,   145,    60,   138,    -1,    37,   138,    34,    59,
     108,    60,    76,    -1,    39,    59,   150,   151,    60,   138,
      -1,   142,    -1,   137,    -1,   145,    76,    -1,   145,    76,
     108,    -1,    36,    76,    -1,    35,    76,    -1,    41,    76,
      -1,    41,   108,    76,    -1,   153,   154,    -1,   154,    -1,
     155,    -1,   110,    -1,   112,   140,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   215,   215,   228,   231,   232,   233,   234,   235,   238,
     239,   240,   241,   242,   243,   246,   249,   252,   255,   256,
     259,   260,   263,   264,   267,   270,   271,   274,   275,   276,
     277,   280,   281,   284,   285,   286,   287,   290,   291,   292,
     295,   296,   297,   300,   301,   302,   303,   304,   307,   308,
     309,   312,   313,   316,   317,   320,   321,   324,   325,   328,
     329,   332,   335,   336,   339,   340,   341,   342,   343,   346,
     347,   350,   353,   354,   355,   356,   359,   360,   363,   366,
     367,   370,   373,   374,   377,   378,   381,   382,   383,   384,
     388,   391,   392,   393,   394,   395,   398,   399,   400,   401,
     402,   405,   406,   409,   412,   413,   416,   417,   420,   421,
     424,   425,   428,   429,   430,   431,   432,   435,   436,   439,
     440,   441,   442,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   467,   468,   471,   472,   475,   476,   479,
     480,   483,   484,   487,   490,   493,   494,   497,   498,   499,
     500,   501,   502,   503,   506,   507,   510,   511,   514,   515,
     518,   521,   522,   525,   526,   529,   532,   535,   536,   539,
     540,   541,   544,   545,   548,   549,   552,   553,   554,   555,
     558,   559,   562,   563,   566
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Float", "T_Int",
  "T_UInt", "T_BVec2", "T_BVec3", "T_BVec4", "T_IVec2", "T_IVec3",
  "T_IVec4", "T_UVec2", "T_UVec3", "T_UVec4", "T_Vec2", "T_Vec3", "T_Vec4",
  "T_Dims", "T_Mat2", "T_Mat3", "T_Mat4", "T_Struct", "T_FieldSelection",
  "T_In", "T_Out", "T_InOut", "T_Const", "T_Uniform", "T_Layout", "T_And",
  "T_Or", "T_While", "T_Break", "T_Continue", "T_Do", "T_Else", "T_For",
  "T_If", "T_Return", "T_Switch", "T_Case", "T_Default", "T_Identifier",
  "T_IntConstant", "T_FloatConstant", "T_BoolConstant", "T_Inc", "T_Dec",
  "T_LessEqual", "T_GreaterEqual", "T_Equal", "T_NotEqual", "T_Mul_Assign",
  "T_Div_Assign", "T_Add_Assign", "T_Sub_Assign", "'('", "')'", "'['",
  "']'", "'.'", "','", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", "'>'",
  "'&'", "'^'", "'|'", "'='", "';'", "'{'", "'}'", "':'", "$accept",
  "Program", "Var_Ident", "Pri_Expr", "Pst_Expr", "Int_Expr", "Func_Call",
  "Func_Call_or_Mtd", "Func_Call_Gen", "Func_Call_Head_NoPrm",
  "Func_Call_Head_Prm", "Func_Call_header", "Func_Ident", "Unary_Expr",
  "Unary_Op", "Mult_Expr", "Add_Expr", "Shift_Expr", "Rel_Expr", "Eq_Expr",
  "And_Expr", "Xor_Expr", "Inc_Or_Expr", "Log_And_Expr", "Log_Or_Expr",
  "Cond_Expr", "Assign_Expr", "Assign_Op", "Expr", "Const_Expr", "Decl",
  "Ident_List", "Func_Proto", "Func_Declr", "Func_Hdr",
  "Func_Hdr_With_Param", "Param_Declr", "Param_Decl", "Param_Type_Spec",
  "Init_Decl_List", "Single_Decl", "Fully_Spec_Type", "Layout_Qual",
  "Layout_ID_List", "Layout_ID", "Type_Qual", "Single_Type_Qual",
  "Storage_Qual", "Type_Spec", "Arr_Spec", "Type_Spec_Nonarr",
  "Struct_Spec", "Struct_Decl_List", "Struct_Decl", "Struct_Declr_List",
  "Struct_Declr", "Init", "Decl_Stmt", "Stmt", "Simple_Stmt", "Compd_Stmt",
  "Stmt_List", "Expr_Stmt", "Select_Stmt", "Select_Rest_Stmt", "Cond",
  "Switch_Stmt", "Switch_Stmt_List", "Case_Label", "Iter_Stmt",
  "For_Init_Stmt", "For_Rest_Stmt", "Jump_Stmt", "Trans_Unit", "Ext_Decl",
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,    40,
      41,    91,    93,    46,    44,    43,    45,    42,    47,    37,
      60,    62,    38,    94,   124,    61,    59,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    83,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    85,    86,    87,    88,    88,
      89,    89,    90,    90,    91,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   106,   106,   107,   107,   107,   107,   107,   108,
     108,   109,   110,   110,   110,   110,   111,   111,   112,   113,
     113,   114,   115,   115,   116,   116,   117,   117,   117,   117,
     118,   119,   119,   119,   119,   119,   120,   120,   120,   120,
     120,   121,   121,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   127,   127,   127,   128,   128,   129,
     129,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   137,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   144,   144,   145,   145,   146,   147,   148,   148,   149,
     149,   149,   150,   150,   151,   151,   152,   152,   152,   152,
     153,   153,   154,   154,   155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     1,     3,     2,     2,     1,     1,     1,     2,     2,
       2,     1,     2,     3,     2,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     4,     4,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     2,     3,     4,     2,     3,     2,     1,
       1,     3,     2,     3,     2,     3,     2,     1,     2,     1,
       1,     1,     3,     4,     6,     5,     1,     2,     3,     5,
       4,     1,     2,     4,     1,     3,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     1,     2,     3,     4,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     2,     1,     2,
       5,     3,     1,     1,     4,     7,     1,     3,     2,     5,
       7,     6,     1,     1,     2,     3,     2,     2,     2,     3,
       2,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   123,   126,   124,   125,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   127,   128,   129,   139,   140,   141,
       0,   113,   114,   115,   112,   116,     0,     0,   193,     0,
       0,    79,    80,     0,    91,    96,   111,     0,   108,   110,
     101,   117,   142,     2,   191,   192,     0,     0,     0,     1,
       0,   194,    78,    87,    82,    89,     0,    90,     0,     0,
      72,    97,     0,    73,   109,   102,     0,   118,   190,     0,
       0,     0,     0,   145,   106,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     5,     6,
       7,     0,     0,     0,    31,    32,   168,   164,     4,     9,
      27,    11,    16,    17,     0,     0,    21,     0,    33,     0,
      37,    40,    43,    48,    51,    53,    55,    57,    59,    61,
      62,    69,     0,   154,    96,   101,   157,   166,   156,   155,
       0,   158,   159,   160,   161,   162,   163,    86,    88,    84,
      83,    92,    81,     0,    98,     0,    74,     0,   119,    33,
      71,     0,    25,     0,     0,     0,   151,     0,   149,   144,
     146,     0,   103,     0,     0,   187,   186,     0,     0,     0,
     188,     0,     0,     0,   178,    28,    29,     0,     0,    13,
      14,     0,    19,    18,     0,   123,    22,    24,    65,    66,
      67,    68,    64,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,    97,   165,   167,    85,     0,
      93,   153,   100,     0,    76,     0,    75,   120,   121,     0,
     143,     0,   152,     0,   147,   107,   105,   173,     0,     0,
       0,     0,   183,   182,     0,     0,   189,     0,   177,     8,
       0,    15,    12,    23,    63,    34,    35,    36,    38,    39,
       0,     0,    46,    47,    44,    45,    49,    50,    52,    54,
      56,    58,    60,    70,    95,     0,    99,    77,   122,   148,
     150,     0,     0,     0,     0,     0,     0,     0,    10,    41,
      42,    94,     0,   179,     0,   184,     0,   172,   170,     0,
     174,     0,   185,   181,     0,   176,     0,   180,   171,   175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    98,    99,   100,   250,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   193,   122,   151,
     123,   147,    29,    30,    31,    32,    53,    54,    55,    33,
      34,   124,    36,    75,    76,    37,    38,    39,   152,   144,
      41,    42,    72,    73,   157,   158,   222,   126,   127,   128,
     129,   130,   131,   132,   298,   240,   133,   306,   134,   135,
     244,   285,   136,    43,    44,    45
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -209
static const yytype_int16 yypact[] =
{
    1066,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
     -38,  -209,  -209,  -209,  -209,  -209,   -46,    21,  -209,   -47,
     -20,  1066,   -13,   -11,  -209,    26,  -209,   708,  -209,  -209,
    -209,    15,  -209,  1066,  -209,  -209,    10,  1066,    34,  -209,
     303,  -209,  -209,  -209,  -209,  -209,  1066,    52,  1066,    72,
    -209,   -42,    -2,  -209,  -209,  -209,   810,    63,  -209,  1066,
    1066,    84,   250,  -209,    65,    43,  -209,     7,    70,    71,
     495,    89,    90,   639,    91,   938,    73,  -209,  -209,  -209,
    -209,   938,   938,   938,  -209,  -209,  -209,  -209,  -209,    92,
       5,  -209,  -209,  -209,    96,    46,  1002,    98,   -30,   938,
      59,    29,    62,   -10,    81,    86,    87,    85,   129,   130,
    -209,  -209,     9,  -209,   117,   107,  -209,  -209,  -209,  -209,
     379,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,    15,
    -209,   -52,  -209,   938,   -43,   122,  -209,    14,  -209,  -209,
    -209,   108,  -209,   874,   455,    84,    15,    17,  -209,  -209,
    -209,   123,  -209,    34,   746,  -209,  -209,   138,   570,   938,
    -209,    22,   938,   -50,  -209,  -209,  -209,    48,   938,  -209,
    -209,   148,  -209,  -209,   938,   114,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   938,  -209,   938,   938,   938,   938,   938,
     105,   106,   938,   938,   938,   938,   938,   938,   938,   938,
     938,   938,   938,   938,  -209,   -27,  -209,  -209,    63,   938,
       2,  -209,  -209,   938,  -209,   131,  -209,  -209,  -209,   116,
    -209,    25,    63,    84,  -209,  -209,  -209,   115,   135,  1066,
     121,   124,  -209,  -209,   746,    49,  -209,    51,  -209,  -209,
     120,   115,  -209,  -209,  -209,  -209,  -209,  -209,    59,    59,
     938,   938,    62,    62,    62,    62,   -10,   -10,    81,    86,
      87,    85,   129,  -209,  -209,   938,  -209,  -209,  -209,  -209,
    -209,   132,   495,   938,   133,   146,   495,   134,  -209,    29,
      29,  -209,   938,  -209,    54,   938,   495,   153,  -209,   495,
    -209,   136,   115,  -209,   495,   495,   137,  -209,  -209,  -209
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,    -9,  -209,   -62,  -122,   -82,   -64,   -24,
     -17,     3,     6,     4,  -209,   -61,   -68,  -209,   -73,    61,
      16,  -209,  -209,  -209,  -209,  -209,   163,   162,   167,  -209,
    -209,     1,  -209,  -209,    66,   -23,   -34,  -209,     0,   -37,
    -209,  -209,   156,   -66,    75,    -5,  -208,    64,   -78,  -209,
     202,   -65,    67,  -209,  -209,    -8,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,   190,  -209
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -27
static const yytype_int16 yytable[] =
{
      40,    35,   167,    64,    67,   150,   160,    46,    56,    66,
     171,   274,   173,    48,   213,   276,    28,   142,   153,    66,
     177,    49,    64,   219,    70,   188,   189,   190,   191,   248,
      50,    57,   223,   143,    66,    56,    64,    65,   186,    47,
      52,   202,   203,    40,    35,   192,    70,    71,   143,    70,
     125,    58,   217,    59,   179,   180,    57,   149,    57,    28,
     204,   205,   145,   153,   -26,    60,   164,   291,   181,    71,
     155,    61,    71,   213,   146,   221,    66,   275,   225,    74,
     125,   233,   175,   176,   300,   214,   213,    69,   160,   233,
     226,   237,   150,   234,   198,   199,   245,   139,   246,   247,
     194,   279,   218,   162,   220,   251,   183,   163,   249,   286,
     184,   287,   213,   213,   301,   213,   253,   141,   213,   232,
     262,   263,   264,   265,   153,   254,   195,   196,   197,   156,
     125,    70,   200,   201,   206,   207,   258,   259,   289,   290,
     161,   239,   266,   267,   149,   273,   165,   166,   168,   169,
     172,   221,   174,   178,    71,   221,   182,   187,   208,   210,
     209,   211,   215,   212,   125,   238,   -25,   224,   125,   235,
     227,   237,   241,   252,   -20,   260,   277,   261,   278,   213,
     281,   282,   288,   283,   268,   292,   255,   256,   257,   149,
     149,   304,   269,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   293,    64,   296,   221,   297,   295,
     294,   299,   307,   270,   229,   309,   272,   271,   303,   137,
     140,   239,   302,   138,   221,   154,   308,   217,   280,   236,
     231,    51,   242,    68,   305,   243,   284,     0,     0,    65,
       0,     0,     0,     0,   125,   238,     0,     0,     0,     0,
       0,   149,   149,     1,     2,     3,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,    18,    19,    20,     0,    21,    22,    23,    24,
      25,    26,   125,     0,     0,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,   125,
       0,     0,     0,     0,   125,   125,     1,     2,     3,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,    17,    18,    19,    20,   159,    21,
      22,    23,    24,    25,    26,     0,     0,    77,    78,    79,
      80,     0,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      50,    97,     1,     2,     3,     4,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     0,
      17,    18,    19,    20,     0,    21,    22,    23,    24,    25,
      26,     0,     0,    77,    78,    79,    80,     0,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    50,   216,     1,     2,
       3,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,    18,    19,    20,
       0,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,    17,    18,    19,    20,
       0,    21,    22,    23,    24,    25,    26,     0,     0,    77,
      78,    79,    80,   230,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    50,     1,     2,     3,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,    18,    19,    20,     0,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
       0,     0,     1,     2,     3,     4,    96,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     0,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     1,     2,     3,     4,   170,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,    17,
      18,    19,    20,     0,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,    62,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,    18,    19,
      20,     0,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,    94,    95,     1,     2,     3,     4,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,   148,     0,     0,    94,    95,     1,     2,     3,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,   228,     0,     0,    94,
      95,     1,     2,     3,     4,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,    94,    95,   185,     2,     3,     4,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,    94,    95,     1,
       2,     3,     4,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,    17,    18,    19,
      20,     0,    21,    22,    23,    24,    25,    26
};

static const yytype_int16 yycheck[] =
{
       0,     0,    80,    37,    41,    66,    72,    45,    31,    61,
      83,   219,    85,    59,    64,   223,     0,    59,    61,    61,
      93,     0,    56,    75,    47,    55,    56,    57,    58,    79,
      77,    31,    75,    75,    61,    58,    70,    37,   106,    77,
      60,    51,    52,    43,    43,    75,    69,    47,    75,    72,
      50,    64,   130,    64,    49,    50,    56,    66,    58,    43,
      70,    71,    64,    61,    59,    76,    59,   275,    63,    69,
      70,    45,    72,    64,    76,   143,    61,    75,    64,    45,
      80,    64,    91,    92,   292,    76,    64,    77,   154,    64,
      76,   164,   153,    76,    65,    66,   169,    45,    76,   172,
     109,    76,   139,    60,   141,   178,    60,    64,    60,    60,
      64,    60,    64,    64,    60,    64,   184,    45,    64,   156,
     202,   203,   204,   205,    61,   193,    67,    68,    69,    45,
     130,   154,    70,    71,    53,    54,   198,   199,   260,   261,
      75,   164,   206,   207,   153,   213,    76,    76,    59,    59,
      59,   219,    79,    61,   154,   223,    60,    59,    72,    74,
      73,    32,    45,    33,   164,   164,    59,    45,   168,    46,
      62,   244,    34,    25,    60,    70,    45,    71,    62,    64,
      45,    60,    62,    59,   208,    53,   195,   196,   197,   198,
     199,    38,   209,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   282,   239,    60,   275,   286,    76,
     283,    77,    76,   210,   153,    78,   212,   211,   296,    56,
      58,   244,   295,    56,   292,    69,   304,   305,   233,   163,
     155,    29,   168,    43,   299,   168,   244,    -1,    -1,   239,
      -1,    -1,    -1,    -1,   244,   244,    -1,    -1,    -1,    -1,
      -1,   260,   261,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,   282,    -1,    -1,    -1,   286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   299,
      -1,    -1,    -1,    -1,   304,   305,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    78,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    78,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    76,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    76,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    45,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    62,    -1,    -1,    65,    66,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,
      66,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    21,    22,    23,
      24,    26,    27,    28,    29,    30,    31,    81,   110,   112,
     113,   114,   115,   119,   120,   121,   122,   125,   126,   127,
     128,   130,   131,   153,   154,   155,    45,    77,    59,     0,
      77,   140,    60,   116,   117,   118,   125,   128,    64,    64,
      76,    45,    45,    76,   126,   128,    61,   129,   154,    77,
     125,   128,   132,   133,    45,   123,   124,    34,    35,    36,
      37,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    59,    65,    66,    76,    78,    82,    83,
      84,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   108,   110,   121,   128,   137,   138,   139,   140,
     141,   142,   143,   146,   148,   149,   152,   116,   118,    45,
     117,    45,    59,    75,   129,    64,    76,   111,    62,    93,
     105,   109,   128,    61,   132,   128,    45,   134,   135,    78,
     133,    75,    60,    64,    59,    76,    76,   138,    59,    59,
      76,   108,    59,   108,    79,    93,    93,   108,    61,    49,
      50,    63,    60,    60,    64,     3,   106,    59,    55,    56,
      57,    58,    75,   107,    93,    67,    68,    69,    65,    66,
      70,    71,    51,    52,    70,    71,    53,    54,    72,    73,
      74,    32,    33,    64,    76,    45,    78,   138,   129,    75,
     129,   106,   136,    75,    45,    64,    76,    62,    62,   109,
      78,   134,   129,    64,    76,    46,   124,   108,   121,   125,
     145,    34,   137,   142,   150,   108,    76,   108,    79,    60,
      85,   108,    25,   106,   106,    93,    93,    93,    95,    95,
      70,    71,    97,    97,    97,    97,    98,    98,    99,   100,
     101,   102,   103,   106,   136,    75,   136,    45,    62,    76,
     135,    45,    60,    59,   145,   151,    60,    60,    62,    96,
      96,   136,    53,   138,   108,    76,    60,   138,   144,    77,
     136,    60,   108,   138,    38,   141,   147,    76,   138,    78
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 215 "parser.y"
    { 
                                                  (yylsp[(1) - (1)]); 
                                                  /* pp2: The @1 is needed to convince 
                                                   * yacc to set up yylloc. You can remove 
                                                   * it once you have other uses of @n*/
                                                  Program *program = new Program((yyvsp[(1) - (1)].declList));
                                                  program->SetParent(NULL);
                                                  // if no errors, advance to next phase
                                                  if (ReportError::NumErrors() == 0) 
                                                      program->Print(0);
                                                }
    break;

  case 3:
#line 228 "parser.y"
    {}
    break;

  case 4:
#line 231 "parser.y"
    {}
    break;

  case 5:
#line 232 "parser.y"
    {}
    break;

  case 6:
#line 233 "parser.y"
    {}
    break;

  case 7:
#line 234 "parser.y"
    {}
    break;

  case 8:
#line 235 "parser.y"
    {}
    break;

  case 9:
#line 238 "parser.y"
    {}
    break;

  case 10:
#line 239 "parser.y"
    {}
    break;

  case 11:
#line 240 "parser.y"
    {}
    break;

  case 12:
#line 241 "parser.y"
    {}
    break;

  case 13:
#line 242 "parser.y"
    {}
    break;

  case 14:
#line 243 "parser.y"
    {}
    break;

  case 15:
#line 246 "parser.y"
    {}
    break;

  case 16:
#line 249 "parser.y"
    {}
    break;

  case 17:
#line 252 "parser.y"
    {}
    break;

  case 18:
#line 255 "parser.y"
    {}
    break;

  case 19:
#line 256 "parser.y"
    {}
    break;

  case 20:
#line 259 "parser.y"
    {}
    break;

  case 21:
#line 260 "parser.y"
    {}
    break;

  case 22:
#line 263 "parser.y"
    {}
    break;

  case 23:
#line 264 "parser.y"
    {}
    break;

  case 24:
#line 267 "parser.y"
    {}
    break;

  case 25:
#line 270 "parser.y"
    {}
    break;

  case 26:
#line 271 "parser.y"
    {}
    break;

  case 27:
#line 274 "parser.y"
    {}
    break;

  case 28:
#line 275 "parser.y"
    {}
    break;

  case 29:
#line 276 "parser.y"
    {}
    break;

  case 30:
#line 277 "parser.y"
    {}
    break;

  case 31:
#line 280 "parser.y"
    {}
    break;

  case 32:
#line 281 "parser.y"
    {}
    break;

  case 33:
#line 284 "parser.y"
    {}
    break;

  case 34:
#line 285 "parser.y"
    {}
    break;

  case 35:
#line 286 "parser.y"
    {}
    break;

  case 36:
#line 287 "parser.y"
    {}
    break;

  case 37:
#line 290 "parser.y"
    {}
    break;

  case 38:
#line 291 "parser.y"
    {}
    break;

  case 39:
#line 292 "parser.y"
    {}
    break;

  case 40:
#line 295 "parser.y"
    {}
    break;

  case 41:
#line 296 "parser.y"
    {}
    break;

  case 42:
#line 297 "parser.y"
    {}
    break;

  case 43:
#line 300 "parser.y"
    {}
    break;

  case 44:
#line 301 "parser.y"
    {}
    break;

  case 45:
#line 302 "parser.y"
    {}
    break;

  case 46:
#line 303 "parser.y"
    {}
    break;

  case 47:
#line 304 "parser.y"
    {}
    break;

  case 48:
#line 307 "parser.y"
    {}
    break;

  case 49:
#line 308 "parser.y"
    {}
    break;

  case 50:
#line 309 "parser.y"
    {}
    break;

  case 51:
#line 312 "parser.y"
    {}
    break;

  case 52:
#line 313 "parser.y"
    {}
    break;

  case 53:
#line 316 "parser.y"
    {}
    break;

  case 54:
#line 317 "parser.y"
    {}
    break;

  case 55:
#line 320 "parser.y"
    {}
    break;

  case 56:
#line 321 "parser.y"
    {}
    break;

  case 57:
#line 324 "parser.y"
    {}
    break;

  case 58:
#line 325 "parser.y"
    {}
    break;

  case 59:
#line 328 "parser.y"
    {}
    break;

  case 60:
#line 329 "parser.y"
    {}
    break;

  case 61:
#line 332 "parser.y"
    {}
    break;

  case 62:
#line 335 "parser.y"
    {}
    break;

  case 63:
#line 336 "parser.y"
    {}
    break;

  case 64:
#line 339 "parser.y"
    {}
    break;

  case 65:
#line 340 "parser.y"
    {}
    break;

  case 66:
#line 341 "parser.y"
    {}
    break;

  case 67:
#line 342 "parser.y"
    {}
    break;

  case 68:
#line 343 "parser.y"
    {}
    break;

  case 69:
#line 346 "parser.y"
    {}
    break;

  case 70:
#line 347 "parser.y"
    {}
    break;

  case 71:
#line 350 "parser.y"
    {}
    break;

  case 72:
#line 353 "parser.y"
    {}
    break;

  case 73:
#line 354 "parser.y"
    {}
    break;

  case 74:
#line 355 "parser.y"
    {}
    break;

  case 75:
#line 356 "parser.y"
    {}
    break;

  case 76:
#line 359 "parser.y"
    {}
    break;

  case 77:
#line 360 "parser.y"
    {}
    break;

  case 78:
#line 363 "parser.y"
    {}
    break;

  case 79:
#line 366 "parser.y"
    {}
    break;

  case 80:
#line 367 "parser.y"
    {}
    break;

  case 81:
#line 370 "parser.y"
    {}
    break;

  case 82:
#line 373 "parser.y"
    {}
    break;

  case 83:
#line 374 "parser.y"
    {}
    break;

  case 84:
#line 377 "parser.y"
    {}
    break;

  case 85:
#line 378 "parser.y"
    {}
    break;

  case 86:
#line 381 "parser.y"
    {}
    break;

  case 87:
#line 382 "parser.y"
    {}
    break;

  case 88:
#line 383 "parser.y"
    {}
    break;

  case 89:
#line 384 "parser.y"
    {}
    break;

  case 90:
#line 388 "parser.y"
    {}
    break;

  case 91:
#line 391 "parser.y"
    {}
    break;

  case 92:
#line 392 "parser.y"
    {}
    break;

  case 93:
#line 393 "parser.y"
    {}
    break;

  case 94:
#line 394 "parser.y"
    {}
    break;

  case 95:
#line 395 "parser.y"
    {}
    break;

  case 96:
#line 398 "parser.y"
    {}
    break;

  case 97:
#line 399 "parser.y"
    {}
    break;

  case 98:
#line 400 "parser.y"
    {}
    break;

  case 99:
#line 401 "parser.y"
    {}
    break;

  case 100:
#line 402 "parser.y"
    {}
    break;

  case 101:
#line 405 "parser.y"
    {}
    break;

  case 102:
#line 406 "parser.y"
    {}
    break;

  case 103:
#line 409 "parser.y"
    {}
    break;

  case 104:
#line 412 "parser.y"
    {}
    break;

  case 105:
#line 413 "parser.y"
    {}
    break;

  case 106:
#line 416 "parser.y"
    {}
    break;

  case 107:
#line 417 "parser.y"
    {}
    break;

  case 108:
#line 420 "parser.y"
    {}
    break;

  case 109:
#line 421 "parser.y"
    {}
    break;

  case 110:
#line 424 "parser.y"
    {}
    break;

  case 111:
#line 425 "parser.y"
    {}
    break;

  case 112:
#line 428 "parser.y"
    {}
    break;

  case 113:
#line 429 "parser.y"
    {}
    break;

  case 114:
#line 430 "parser.y"
    {}
    break;

  case 115:
#line 431 "parser.y"
    {}
    break;

  case 116:
#line 432 "parser.y"
    {}
    break;

  case 117:
#line 435 "parser.y"
    {}
    break;

  case 118:
#line 436 "parser.y"
    {}
    break;

  case 119:
#line 439 "parser.y"
    {}
    break;

  case 120:
#line 440 "parser.y"
    {}
    break;

  case 121:
#line 441 "parser.y"
    {}
    break;

  case 122:
#line 442 "parser.y"
    {}
    break;

  case 123:
#line 445 "parser.y"
    {}
    break;

  case 124:
#line 446 "parser.y"
    {}
    break;

  case 125:
#line 447 "parser.y"
    {}
    break;

  case 126:
#line 448 "parser.y"
    {}
    break;

  case 127:
#line 449 "parser.y"
    {}
    break;

  case 128:
#line 450 "parser.y"
    {}
    break;

  case 129:
#line 451 "parser.y"
    {}
    break;

  case 130:
#line 452 "parser.y"
    {}
    break;

  case 131:
#line 453 "parser.y"
    {}
    break;

  case 132:
#line 454 "parser.y"
    {}
    break;

  case 133:
#line 455 "parser.y"
    {}
    break;

  case 134:
#line 456 "parser.y"
    {}
    break;

  case 135:
#line 457 "parser.y"
    {}
    break;

  case 136:
#line 458 "parser.y"
    {}
    break;

  case 137:
#line 459 "parser.y"
    {}
    break;

  case 138:
#line 460 "parser.y"
    {}
    break;

  case 139:
#line 461 "parser.y"
    {}
    break;

  case 140:
#line 462 "parser.y"
    {}
    break;

  case 141:
#line 463 "parser.y"
    {}
    break;

  case 142:
#line 464 "parser.y"
    {}
    break;

  case 143:
#line 467 "parser.y"
    {}
    break;

  case 144:
#line 468 "parser.y"
    {}
    break;

  case 145:
#line 471 "parser.y"
    {}
    break;

  case 146:
#line 472 "parser.y"
    {}
    break;

  case 147:
#line 475 "parser.y"
    {}
    break;

  case 148:
#line 476 "parser.y"
    {}
    break;

  case 149:
#line 479 "parser.y"
    {}
    break;

  case 150:
#line 480 "parser.y"
    {}
    break;

  case 151:
#line 483 "parser.y"
    {}
    break;

  case 152:
#line 484 "parser.y"
    {}
    break;

  case 153:
#line 487 "parser.y"
    {}
    break;

  case 154:
#line 490 "parser.y"
    {}
    break;

  case 155:
#line 493 "parser.y"
    {}
    break;

  case 156:
#line 494 "parser.y"
    {}
    break;

  case 157:
#line 497 "parser.y"
    {}
    break;

  case 158:
#line 498 "parser.y"
    {}
    break;

  case 159:
#line 499 "parser.y"
    {}
    break;

  case 160:
#line 500 "parser.y"
    {}
    break;

  case 161:
#line 501 "parser.y"
    {}
    break;

  case 162:
#line 502 "parser.y"
    {}
    break;

  case 163:
#line 503 "parser.y"
    {}
    break;

  case 164:
#line 506 "parser.y"
    {}
    break;

  case 165:
#line 507 "parser.y"
    {}
    break;

  case 166:
#line 510 "parser.y"
    {}
    break;

  case 167:
#line 511 "parser.y"
    {}
    break;

  case 168:
#line 514 "parser.y"
    {}
    break;

  case 169:
#line 515 "parser.y"
    {}
    break;

  case 170:
#line 518 "parser.y"
    {}
    break;

  case 171:
#line 521 "parser.y"
    {}
    break;

  case 172:
#line 522 "parser.y"
    {}
    break;

  case 173:
#line 525 "parser.y"
    {}
    break;

  case 174:
#line 526 "parser.y"
    {}
    break;

  case 175:
#line 529 "parser.y"
    {}
    break;

  case 176:
#line 532 "parser.y"
    {}
    break;

  case 177:
#line 535 "parser.y"
    {}
    break;

  case 178:
#line 536 "parser.y"
    {}
    break;

  case 179:
#line 539 "parser.y"
    {}
    break;

  case 180:
#line 540 "parser.y"
    {}
    break;

  case 181:
#line 541 "parser.y"
    {}
    break;

  case 182:
#line 544 "parser.y"
    {}
    break;

  case 183:
#line 545 "parser.y"
    {}
    break;

  case 184:
#line 548 "parser.y"
    {}
    break;

  case 185:
#line 549 "parser.y"
    {}
    break;

  case 186:
#line 552 "parser.y"
    {}
    break;

  case 187:
#line 553 "parser.y"
    {}
    break;

  case 188:
#line 554 "parser.y"
    {}
    break;

  case 189:
#line 555 "parser.y"
    {}
    break;

  case 190:
#line 558 "parser.y"
    { }
    break;

  case 191:
#line 559 "parser.y"
    { }
    break;

  case 192:
#line 562 "parser.y"
    {  }
    break;

  case 193:
#line 563 "parser.y"
    {  }
    break;

  case 194:
#line 566 "parser.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 2982 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 569 "parser.y"


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
   yydebug = false;
}
