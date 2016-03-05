/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Void = 258,
     T_Bool = 259,
     T_Int = 260,
     T_Float = 261,
     T_Uint = 262,
     T_Struct = 263,
     T_Bvec2 = 264,
     T_Bvec3 = 265,
     T_Bvec4 = 266,
     T_Ivec2 = 267,
     T_Ivec3 = 268,
     T_Ivec4 = 269,
     T_Uvec2 = 270,
     T_Uvec3 = 271,
     T_Uvec4 = 272,
     T_Vec2 = 273,
     T_Vec3 = 274,
     T_Vec4 = 275,
     T_Mat2 = 276,
     T_Mat3 = 277,
     T_Mat4 = 278,
     T_While = 279,
     T_For = 280,
     T_If = 281,
     T_Else = 282,
     T_Return = 283,
     T_Break = 284,
     T_Continue = 285,
     T_Do = 286,
     T_Switch = 287,
     T_Case = 288,
     T_Default = 289,
     T_In = 290,
     T_Out = 291,
     T_Inout = 292,
     T_Const = 293,
     T_Uniform = 294,
     T_Layout = 295,
     T_LeftParen = 296,
     T_RightParen = 297,
     T_LeftBracket = 298,
     T_RightBracket = 299,
     T_LeftBrace = 300,
     T_RightBrace = 301,
     T_Dot = 302,
     T_Comma = 303,
     T_Colon = 304,
     T_Semicolon = 305,
     T_LessEqual = 306,
     T_GreaterEqual = 307,
     T_EqOp = 308,
     T_NeqOp = 309,
     T_And = 310,
     T_Or = 311,
     T_Plus = 312,
     T_Star = 313,
     T_MulAssign = 314,
     T_DivAssign = 315,
     T_AddAssign = 316,
     T_SubAssign = 317,
     T_Equal = 318,
     T_LeftAngle = 319,
     T_RightAngle = 320,
     T_Dash = 321,
     T_Slash = 322,
     T_Inc = 323,
     T_Dec = 324,
     T_Identifier = 325,
     T_IntConstant = 326,
     T_FloatConstant = 327,
     T_BoolConstant = 328,
     T_FieldSelection = 329,
     LOWEST = 330,
     LOWER_THAN_ELSE = 331,
     T_NeqOP = 332
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Float 261
#define T_Uint 262
#define T_Struct 263
#define T_Bvec2 264
#define T_Bvec3 265
#define T_Bvec4 266
#define T_Ivec2 267
#define T_Ivec3 268
#define T_Ivec4 269
#define T_Uvec2 270
#define T_Uvec3 271
#define T_Uvec4 272
#define T_Vec2 273
#define T_Vec3 274
#define T_Vec4 275
#define T_Mat2 276
#define T_Mat3 277
#define T_Mat4 278
#define T_While 279
#define T_For 280
#define T_If 281
#define T_Else 282
#define T_Return 283
#define T_Break 284
#define T_Continue 285
#define T_Do 286
#define T_Switch 287
#define T_Case 288
#define T_Default 289
#define T_In 290
#define T_Out 291
#define T_Inout 292
#define T_Const 293
#define T_Uniform 294
#define T_Layout 295
#define T_LeftParen 296
#define T_RightParen 297
#define T_LeftBracket 298
#define T_RightBracket 299
#define T_LeftBrace 300
#define T_RightBrace 301
#define T_Dot 302
#define T_Comma 303
#define T_Colon 304
#define T_Semicolon 305
#define T_LessEqual 306
#define T_GreaterEqual 307
#define T_EqOp 308
#define T_NeqOp 309
#define T_And 310
#define T_Or 311
#define T_Plus 312
#define T_Star 313
#define T_MulAssign 314
#define T_DivAssign 315
#define T_AddAssign 316
#define T_SubAssign 317
#define T_Equal 318
#define T_LeftAngle 319
#define T_RightAngle 320
#define T_Dash 321
#define T_Slash 322
#define T_Inc 323
#define T_Dec 324
#define T_Identifier 325
#define T_IntConstant 326
#define T_FloatConstant 327
#define T_BoolConstant 328
#define T_FieldSelection 329
#define LOWEST 330
#define LOWER_THAN_ELSE 331
#define T_NeqOP 332




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 41 "parser.y"
{
    int integerConstant;
    bool boolConstant;
    double floatConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
    FnDecl *funcDecl;
    List<Decl*> *declList;
    Type *typeDecl;
    Expr *expression;
    VarDecl *varDecl;
    List<VarDecl *> *varDeclList;
    List<Stmt*> *stmtList;
    Stmt       *stmt;
    Operator *ops;
}
/* Line 1529 of yacc.c.  */
#line 220 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
