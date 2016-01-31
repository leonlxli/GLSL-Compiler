
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
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
  


/* Line 1676 of yacc.c  */
#line 211 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
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

