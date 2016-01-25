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
/* Line 1529 of yacc.c.  */
#line 221 "y.tab.h"
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
