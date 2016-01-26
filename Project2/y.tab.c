
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 41 "parser.y"

  int integerConstant;
  bool boolConstant;
  char *stringConstant;
  double doubleConstant;
  char identifier[MaxIdentLen+1]; // +1 for terminating null
  char field[MaxIdentLen+1];
  Node *node;
  Expr *expr;
  Type *type;
  Decl *decl;
  List<Decl*> *declList;
  FnDecl *fnDecl;



/* Line 214 of yacc.c  */
#line 259 "y.tab.c"
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
#line 284 "y.tab.c"

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,    60,    65,    63,    62,    64,    61,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    70,
      67,    69,    68,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    72,     2,     2,     2,     2,
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
      21,    23,    27,    30,    33,    35,    37,    40,    43,    46,
      48,    51,    55,    58,    60,    62,    64,    67,    70,    73,
      75,    77,    79,    83,    87,    89,    93,    97,    99,   101,
     105,   109,   113,   117,   119,   123,   127,   129,   131,   133,
     135,   139,   141,   143,   147,   149,   151,   155,   157,   159,
     161,   163,   165,   167,   170,   173,   177,   180,   182,   184,
     187,   191,   195,   198,   200,   202,   204,   206,   209,   211,
     214,   219,   221,   225,   227,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   256,   258,
     260,   262,   264,   266,   268,   270,   272,   274,   276,   278,
     280,   282,   284,   286,   288,   290,   292,   294,   297,   301,
     304,   308,   310,   313,   315,   318,   324,   328,   330,   332,
     337,   345,   347,   351,   354,   360,   367,   369,   371,   373,
     376,   380,   383,   385,   387,   389
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      75,     0,    -1,   142,    -1,    45,    -1,    76,    -1,    46,
      -1,    47,    -1,    48,    -1,    59,   102,    60,    -1,    77,
      -1,    79,    -1,    78,    61,    25,    -1,    78,    49,    -1,
      78,    50,    -1,    80,    -1,    81,    -1,    83,    60,    -1,
      82,    60,    -1,    84,     3,    -1,    84,    -1,    84,   100,
      -1,    83,    62,   100,    -1,    85,    59,    -1,   120,    -1,
      78,    -1,    78,    -1,    49,    86,    -1,    50,    86,    -1,
      87,    86,    -1,    63,    -1,    64,    -1,    86,    -1,    88,
      65,    86,    -1,    88,    66,    86,    -1,    88,    -1,    89,
      63,    88,    -1,    89,    64,    88,    -1,    89,    -1,    90,
      -1,    91,    67,    90,    -1,    91,    68,    90,    -1,    91,
      51,    90,    -1,    91,    52,    90,    -1,    91,    -1,    92,
      53,    91,    -1,    92,    54,    91,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    32,    95,    -1,    96,
      -1,    97,    -1,    98,    33,    97,    -1,    98,    -1,    99,
      -1,    86,   101,   100,    -1,    69,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,   100,    -1,   104,    70,    -1,
     111,    70,    -1,   117,    45,    70,    -1,   105,    60,    -1,
     107,    -1,   106,    -1,   107,   109,    -1,   106,    62,   109,
      -1,   113,    45,    59,    -1,   120,    45,    -1,   108,    -1,
     110,    -1,   120,    -1,   112,    -1,   113,    45,    -1,   120,
      -1,   117,   120,    -1,    31,    59,   115,    60,    -1,   116,
      -1,    45,    69,    46,    -1,   118,    -1,   117,   118,    -1,
     119,    -1,   114,    -1,    29,    -1,    26,    -1,    27,    -1,
      28,    -1,    30,    -1,   121,    -1,     3,    -1,     5,    -1,
       6,    -1,     4,    -1,    17,    -1,    18,    -1,    19,    -1,
      21,    -1,    22,    -1,    23,    -1,   100,    -1,   103,    -1,
     128,    -1,   127,    -1,   129,    -1,   127,    -1,   129,    -1,
     127,    -1,   123,    -1,   131,    -1,   132,    -1,   135,    -1,
     137,    -1,   138,    -1,    71,    72,    -1,    71,   130,    72,
      -1,    71,    72,    -1,    71,   130,    72,    -1,   124,    -1,
     130,   124,    -1,    70,    -1,   102,    70,    -1,    40,    59,
     102,    60,   133,    -1,   126,    38,   126,    -1,   126,    -1,
     102,    -1,   113,    45,    53,   122,    -1,    42,    59,   102,
      60,    71,   136,    72,    -1,   130,    -1,    43,   102,    73,
      -1,    44,    73,    -1,    34,    59,   134,    60,   125,    -1,
      39,    59,   139,   141,    60,   125,    -1,   131,    -1,   123,
      -1,   134,    -1,   140,    70,    -1,   140,    70,   102,    -1,
     142,   143,    -1,   143,    -1,   144,    -1,   103,    -1,   104,
     129,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   179,   182,   183,   184,   185,   186,   189,
     190,   191,   192,   193,   199,   202,   205,   206,   209,   210,
     213,   214,   217,   220,   221,   224,   225,   226,   227,   230,
     231,   234,   235,   236,   239,   240,   241,   244,   247,   248,
     249,   250,   251,   254,   255,   256,   259,   262,   265,   268,
     269,   272,   274,   275,   278,   281,   282,   285,   286,   287,
     288,   289,   292,   298,   299,   300,   303,   306,   307,   310,
     311,   314,   318,   321,   322,   326,   329,   332,   335,   336,
     339,   342,   345,   348,   349,   352,   353,   356,   357,   358,
     359,   360,   363,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   378,   381,   384,   385,   388,   389,   392,
     393,   396,   397,   398,   399,   400,   401,   404,   405,   408,
     409,   412,   413,   416,   417,   420,   423,   424,   427,   428,
     431,   434,   437,   438,   441,   442,   445,   446,   449,   452,
     453,   456,   457,   460,   461,   464
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
  "T_Div_Assign", "T_Add_Assign", "T_Sub_Assign", "'('", "')'", "'.'",
  "','", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", "';'", "'{'",
  "'}'", "':'", "$accept", "Program", "Var_Ident", "Pri_Expr", "Pst_Expr",
  "Func_Call", "Func_Call_or_Mtd", "Func_Call_Gen", "Func_Call_Head_NoPrm",
  "Func_Call_Head_Prm", "Func_Call_header", "Func_Ident", "Unary_Expr",
  "Unary_Op", "Mult_Expr", "Add_Expr", "Shift_Expr", "Rel_Expr", "Eq_Expr",
  "And_Expr", "Xor_Expr", "Inc_Or_Expr", "Log_And_Expr", "Log_Xor_Expr",
  "Log_Or_Expr", "Cond_Expr", "Assign_Expr", "Assign_Op", "Expr", "Decl",
  "Func_Proto", "Func_Declr", "Func_Hdr_With_Param", "Func_Hdr",
  "Param_Declr", "Param_Decl", "Param_Type_Spec", "Init_Decl_List",
  "Single_Decl", "Fully_Spec_Type", "Layout_Qual", "Layout_ID_List",
  "Layout_ID", "Type_Qual", "Single_Type_Qual", "Storage_Qual",
  "Type_Spec", "Type_Spec_Nonarr", "Init", "Decl_Stmt", "Stmt",
  "Stmt_No_New_Scope", "Stmt_With_Scope", "Simple_Stmt",
  "Compd_Stmt_With_Scope", "Compd_Stmt_No_New_Scope", "Stmt_List",
  "Expr_Stmt", "Select_Stmt", "Select_Rest_Stmt", "Cond", "Switch_Stmt",
  "Switch_Stmt_List", "Case_Label", "Iter_Stmt", "For_Init_Stmt",
  "Cond_Opt", "For_Rest_Stmt", "Trans_Unit", "Ext_Decl", "Func_Def", 0
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
      41,    46,    44,    43,    45,    42,    47,    60,    62,    61,
      59,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    77,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    79,    80,    81,    81,    82,    82,
      83,    83,    84,    85,    85,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    89,    89,    89,    90,    91,    91,
      91,    91,    91,    92,    92,    92,    93,    94,    95,    96,
      96,    97,    98,    98,    99,   100,   100,   101,   101,   101,
     101,   101,   102,   103,   103,   103,   104,   105,   105,   106,
     106,   107,   108,   109,   109,   110,   111,   112,   113,   113,
     114,   115,   116,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   127,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   133,   133,   134,   134,
     135,   136,   137,   137,   138,   138,   139,   139,   140,   141,
     141,   142,   142,   143,   143,   144
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     2,     2,     1,     1,     2,     2,     2,     1,
       2,     3,     2,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     1,     1,     1,
       3,     1,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     2,     1,     1,     2,
       3,     3,     2,     1,     1,     1,     1,     2,     1,     2,
       4,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       3,     1,     2,     1,     2,     5,     3,     1,     1,     4,
       7,     1,     3,     2,     5,     6,     1,     1,     1,     2,
       3,     2,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    93,    96,    94,    95,    97,    98,    99,   100,   101,
     102,    88,    89,    90,    87,    91,     0,     0,   144,     0,
       0,    68,    67,     0,    76,     0,    86,     0,    83,    85,
      78,    92,     2,   142,   143,     0,     1,    63,     0,   145,
      66,     0,    73,    69,    74,    75,    64,    77,     0,    84,
      79,   141,     0,     0,    81,     0,     0,     0,     0,     0,
       0,     3,     5,     6,     7,     0,     0,     0,    29,    30,
     123,     0,   119,     4,     9,    25,    10,    14,    15,     0,
       0,    19,     0,    31,     0,    34,    37,    38,    43,    46,
      47,    48,    49,    51,    52,    54,    55,    62,     0,   104,
       0,    23,   111,   121,   106,   105,     0,   112,   113,   114,
     115,   116,    70,    72,    71,    65,     0,    80,     0,     0,
       0,     0,     0,    23,   133,    26,    27,     0,   117,     0,
      12,    13,     0,    17,    16,     0,    18,    20,    22,    58,
      59,    60,    61,    57,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   120,
     122,    82,   128,     0,     0,     0,   137,   136,     0,     0,
       0,   132,     8,   118,    11,    21,    56,    32,    33,    31,
      35,    36,    41,    42,    39,    40,    44,    45,    50,    53,
       0,     0,   138,     0,     0,     0,     0,     0,   134,   108,
     107,   139,     0,   127,   110,   109,   125,     0,   103,   129,
     140,   135,     0,   131,     0,   126,   130
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   144,    98,    99,
     100,    20,    21,    22,    42,    43,    44,    23,    24,    25,
      26,    53,    54,    27,    28,    29,   123,    31,   209,   102,
     103,   198,   203,   104,   105,   200,   106,   107,   108,   206,
     165,   109,   214,   110,   111,   168,   193,   194,    32,    33,
      34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -178
static const yytype_int16 yypact[] =
{
      51,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,   -43,    19,  -178,   -47,
     -21,   -34,   167,   -26,  -178,    42,  -178,   104,  -178,  -178,
    -178,  -178,    51,  -178,  -178,    55,  -178,  -178,   200,  -178,
    -178,   167,  -178,  -178,  -178,    56,  -178,    43,    33,  -178,
    -178,  -178,    35,    45,  -178,    53,    57,    58,    65,   133,
      41,  -178,  -178,  -178,  -178,   133,   133,   133,  -178,  -178,
    -178,   262,  -178,  -178,  -178,   -19,  -178,  -178,  -178,    68,
     -45,   656,    83,    -9,   133,   -32,   -13,  -178,   -31,    -1,
    -178,  -178,  -178,   111,  -178,    82,  -178,  -178,    75,  -178,
      76,   102,  -178,  -178,  -178,  -178,   324,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,   107,  -178,   622,   572,
     133,   133,    84,  -178,  -178,  -178,  -178,    88,  -178,   386,
    -178,  -178,   134,  -178,  -178,   133,    99,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,   133,  -178,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,  -178,  -178,
    -178,  -178,  -178,   115,    51,   101,  -178,  -178,   622,   103,
     105,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
     -32,   -32,  -178,  -178,  -178,  -178,   -31,   -31,  -178,  -178,
     109,   448,  -178,    96,   114,   448,    98,   133,  -178,  -178,
    -178,   133,   448,   129,  -178,  -178,  -178,   510,  -178,  -178,
    -178,  -178,   448,   510,   121,  -178,  -178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,   -58,  -178,   -83,  -178,   -67,   -79,  -178,  -178,
    -178,    20,  -178,    18,  -178,  -178,   -77,  -178,   -57,    11,
      13,  -178,  -178,  -178,  -178,   146,  -178,  -178,  -178,  -109,
    -178,  -178,  -178,  -106,   -24,  -178,     0,  -178,  -178,    79,
    -100,    -3,   -12,  -177,  -178,   -18,   -66,    89,  -178,  -178,
      46,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,   169,
    -178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -94
static const yytype_int16 yytable[] =
{
      30,    39,   122,    49,   137,   129,   160,   125,   126,   163,
     127,    18,   164,    19,   199,   134,    35,   135,   204,    36,
     150,   151,    45,    37,    38,   199,   145,    50,    41,   160,
     130,   131,    30,   146,   147,   204,   152,   153,   101,    40,
     -24,    45,   132,    18,    46,    19,   139,   140,   141,   142,
     148,   149,   154,   155,     1,     2,     3,     4,   175,   163,
     143,   162,   164,   169,   170,   180,   181,   176,     5,     6,
       7,   101,     8,     9,    10,   186,   187,    11,    12,    13,
      14,    15,    16,   182,   183,   184,   185,    47,   177,   178,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
      52,   113,   114,   115,   116,   117,   101,     1,     2,     3,
       4,   162,   118,   160,   124,   157,   119,   120,   101,   101,
     208,     5,     6,     7,   121,     8,     9,    10,   133,   101,
      11,    12,    13,    14,    15,    16,     1,     2,     3,     4,
      49,   213,   138,   156,   210,   158,    37,   -78,   172,    48,
       5,     6,     7,   161,     8,     9,    10,   171,   -93,   174,
     190,   191,   197,   195,    50,   196,   201,   212,   101,   207,
       1,     2,     3,     4,   202,   189,   188,   205,    61,    62,
      63,    64,    65,    66,     5,     6,     7,   112,     8,     9,
      10,   101,    67,   216,   205,   101,    68,    69,   166,   211,
     215,    51,   101,     1,     2,     3,     4,   101,   167,     0,
       0,     0,   101,   101,   192,     0,     0,     5,     6,     7,
       0,     8,     9,    10,     0,     0,    11,    12,    13,    14,
      15,    16,     0,     0,    55,     0,     0,     0,     0,    56,
      57,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,     0,     0,    68,    69,     1,     2,     3,     4,     0,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,     0,     0,    11,    12,
      13,    14,    15,    16,     0,     0,    55,     0,     0,     0,
       0,    56,    57,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,     0,     0,    68,    69,     1,     2,     3,
       4,     0,    70,    71,   128,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,     0,     0,
      11,    12,    13,    14,    15,    16,     0,     0,    55,     0,
       0,     0,     0,    56,    57,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,    68,    69,     1,
       2,     3,     4,     0,    70,    71,   159,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
       0,     0,    11,    12,    13,    14,    15,    16,     0,     0,
      55,     0,     0,     0,     0,    56,    57,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,    68,
      69,     1,     2,     3,     4,     0,    70,    71,   173,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       9,    10,     0,     0,    11,    12,    13,    14,    15,    16,
       0,     0,    55,     0,     0,     0,     0,    56,    57,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
       0,    68,    69,     1,     2,     3,     4,     0,    70,    38,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,     0,     0,    11,    12,    13,    14,
      15,    16,     0,     0,    55,     0,     0,     0,     0,    56,
      57,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,     0,     0,    68,    69,     1,     2,     3,     4,     0,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,     0,     0,    11,    12,
      13,    14,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,     0,     0,     1,     2,     3,     4,     0,
       0,    67,     0,     0,     0,    68,    69,     0,     0,     5,
       6,     7,    70,     8,     9,    10,     0,     0,    11,    12,
      13,    14,    15,    16,     0,     0,     0,     0,     0,   136,
       2,     3,     4,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     0,     8,     9,    10,
       0,    67,     0,     0,     0,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,    68,
      69
};

static const yytype_int16 yycheck[] =
{
       0,    19,    59,    27,    81,    71,   106,    65,    66,   118,
      67,     0,   118,     0,   191,    60,    59,    62,   195,     0,
      51,    52,    22,    70,    71,   202,    84,    27,    62,   129,
      49,    50,    32,    65,    66,   212,    67,    68,    38,    60,
      59,    41,    61,    32,    70,    32,    55,    56,    57,    58,
      63,    64,    53,    54,     3,     4,     5,     6,   135,   168,
      69,   118,   168,   120,   121,   148,   149,   144,    17,    18,
      19,    71,    21,    22,    23,   154,   155,    26,    27,    28,
      29,    30,    31,   150,   151,   152,   153,    45,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
      45,    45,    59,    70,    69,    60,   106,     3,     4,     5,
       6,   168,    59,   213,    73,    33,    59,    59,   118,   119,
     197,    17,    18,    19,    59,    21,    22,    23,    60,   129,
      26,    27,    28,    29,    30,    31,     3,     4,     5,     6,
     164,   207,    59,    32,   201,    70,    70,    45,    60,    45,
      17,    18,    19,    46,    21,    22,    23,    73,    59,    25,
      45,    60,    53,    60,   164,    60,    70,    38,   168,    71,
       3,     4,     5,     6,    60,   157,   156,   195,    45,    46,
      47,    48,    49,    50,    17,    18,    19,    41,    21,    22,
      23,   191,    59,    72,   212,   195,    63,    64,   119,   202,
     212,    32,   202,     3,     4,     5,     6,   207,   119,    -1,
      -1,    -1,   212,   213,   168,    -1,    -1,    17,    18,    19,
      -1,    21,    22,    23,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,     3,     4,     5,     6,    -1,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,     3,     4,     5,
       6,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,    21,    22,    23,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,     3,
       4,     5,     6,    -1,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,     3,     4,     5,     6,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    23,    -1,    -1,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    63,    64,     3,     4,     5,     6,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    22,    23,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,     3,     4,     5,     6,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    17,
      18,    19,    70,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    17,    18,    19,    -1,    21,    22,    23,
      -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    17,    18,    19,    21,    22,
      23,    26,    27,    28,    29,    30,    31,    75,   103,   104,
     105,   106,   107,   111,   112,   113,   114,   117,   118,   119,
     120,   121,   142,   143,   144,    59,     0,    70,    71,   129,
      60,    62,   108,   109,   110,   120,    70,    45,    45,   118,
     120,   143,    45,   115,   116,    34,    39,    40,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    59,    63,    64,
      70,    71,    72,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   102,   103,
     104,   120,   123,   124,   127,   128,   130,   131,   132,   135,
     137,   138,   109,    45,    59,    70,    69,    60,    59,    59,
      59,    59,   102,   120,    73,    86,    86,   102,    72,   130,
      49,    50,    61,    60,    60,    62,     3,   100,    59,    55,
      56,    57,    58,    69,   101,    86,    65,    66,    63,    64,
      51,    52,    67,    68,    53,    54,    32,    33,    70,    72,
     124,    46,   102,   113,   117,   134,   123,   131,   139,   102,
     102,    73,    60,    72,    25,   100,   100,    86,    86,    86,
      88,    88,    90,    90,    90,    90,    91,    91,    95,    97,
      45,    60,   134,   140,   141,    60,    60,    53,   125,   127,
     129,    70,    60,   126,   127,   129,   133,    71,   100,   122,
     102,   125,    38,   130,   136,   126,    72
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
#line 166 "parser.y"
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

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    {}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    {}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 236 "parser.y"
    {}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    {}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    {}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    {}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    {}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    {}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    {}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    {}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    {}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    {}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    {}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    {}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    {}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    {}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    {}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    {}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    {}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    {}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    {}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    {}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    {}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    {}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    {}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    {}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    {}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    {}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    {}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    {}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    {}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    {}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    {}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    {}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    {}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    {}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    {}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    {}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 353 "parser.y"
    {}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    {}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    {}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    {}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    {}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    {}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 367 "parser.y"
    {}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    {}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    {}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    {}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 371 "parser.y"
    {}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    {}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    {}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 374 "parser.y"
    {}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    {}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 378 "parser.y"
    {}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 381 "parser.y"
    {}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 385 "parser.y"
    {}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    {}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    {}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 392 "parser.y"
    {}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 393 "parser.y"
    {}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    {}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 397 "parser.y"
    {}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    {}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    {}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 400 "parser.y"
    {}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    {}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 404 "parser.y"
    {}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 405 "parser.y"
    {}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    {}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 409 "parser.y"
    {}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    {}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 413 "parser.y"
    {}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    {}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    {}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    {}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    {}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 424 "parser.y"
    {}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 427 "parser.y"
    {}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    {}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 434 "parser.y"
    {}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    {}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 438 "parser.y"
    {}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 441 "parser.y"
    {}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    {}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    {}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    {}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 449 "parser.y"
    {}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    {}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 453 "parser.y"
    {}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    { }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 457 "parser.y"
    { }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    {  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 461 "parser.y"
    {  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 464 "parser.y"
    {}
    break;



/* Line 1455 of yacc.c  */
#line 2870 "y.tab.c"
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
#line 467 "parser.y"


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
