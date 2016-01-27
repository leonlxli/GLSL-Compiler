/* File: parser.y
 * --------------
 * Bison input file to generate the parser for the compiler.
 *
 * pp2: your job is to write a parser that will construct the parse tree
 *      and if no parse errors were found, print it.  The parser should 
 *      accept the language as described in specification, and as augmented 
 *      in the pp2 handout.
 */

%{

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

%}

/* The section before the first %% is the Definitions section of the yacc
 * input file. Here is where you declare tokens and types, add precedence
 * and associativity options, and so on.
 */
 
/* yylval 
 * ------
 * Here we define the type of the yylval global variable that is used by
 * the scanner to store attibute information about the token just scanned
 * and thus communicate that information to the parser. 
 *
 * pp2: You will need to add new fields to this union as you add different 
 *      attributes to your non-terminal symbols.
 */

%union {
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
  IfStmtExprError *ifStmtExprError;
  BreakStmt *breakStmt;
  ReturnStmt *returnStmt;
  SwitchLabel *switchLabel;
  Case *_case;
  Default *_default;
  SwitchStmt *switchStmt;
  SwitchStmtError *switchStmtError;
  Type *type;
  ArrayType *arrayType;
  }


/* Tokens
 * ------
 * Here we tell yacc about all the token types that we are using.
 * Bison will assign unique numbers to these and export the #define
 * in the generated y.tab.h header file.
 */
%token   T_Void T_Bool T_Float T_Int T_UInt
%token   T_Vec2 T_Vec3 T_Vec4 T_Dims
%token   T_Mat2 T_Mat3 T_Mat4
%token   T_Struct 
%token   T_In T_Out T_InOut
%token   T_Const T_Uniform
%token   T_Layout

%token   T_And T_Or 
%token   T_While T_Break T_Continue T_Do T_Else T_For T_If T_Return T_Switch T_Case T_Default 
%token   <integerConstant> T_IntConstant
%token   <floatConstant> T_FloatConstant
%token   <boolConstant> T_BoolConstant
%token   T_Inc T_Dec T_LessEqual T_GreaterEqual T_Equal T_NotEqual
%token   T_Mul_Assign T_Div_Assign T_Add_Assign T_Sub_Assign

%token   <identifier> T_FieldSelection
%token   <identifier> T_Identifier



/* Non-terminal types
 * ------------------
 * In order for yacc to assign/access the correct field of $$, $1, we
 * must to declare which field is appropriate for the non-terminal.
 * As an example, this first type declaration establishes that the DeclList
 * non-terminal uses the field named "declList" in the yylval union. This
 * means that when we are setting $$ for a reduction for DeclList ore reading
 * $n which corresponds to a DeclList nonterminal we are accessing the field
 * of the union named "declList" which is of type List<Decl*>.
 * pp2: You'll need to add many of these of your own.
 */

%type <id> Var_Ident
%type <expr> Pri_Expr
%type <expr> Pst_Expr
%type <expr> Int_Expr
%type <call> Func_Call
%type <call> Func_Call_or_Mtd
%type <call> Func_Call_Gen
%type <call> Func_Call_Head_NoPrm
%type <call> Func_Call_Head_Prm
%type <call> Func_Call_header
%type <id> Func_Ident
%type <expr> Unary_Expr
%type <op> Unary_Op
%type <expr> Mult_Expr
%type <expr> Add_Expr
%type <expr> Shift_Expr
%type <expr> Rel_Expr
%type <expr> Eq_Expr
%type <expr> And_Expr
%type <expr> Xor_Expr
%type <expr> Inc_Or_Expr
%type <expr> Log_And_Expr
%type <expr> Log_Or_Expr
%type <expr> Log_Xor_Expr
%type <expr> Cond_Expr
%type <expr> Assign_Expr
%type <op> Assign_Op
%type <expr> Expr
%type <expr> Const_Expr
%type <decl> Decl
%type <funcDecl> Func_Proto
%type <funcDecl> Func_Declr
%type <node> Func_Hdr
%type <node> Func_Hdr_With_Param
%type <node> Param_Declr
%type <node> Param_Decl
%type <node> Param_Type_Spec
%type <varDecl> Init_Decl_List
%type <varDecl> Single_Decl
%type <type> Fully_Spec_Type
%type <type> Type_Spec
%type <type> Type_Spec_Nonarr
%type <node> Init
%type <stmt> Decl_Stmt
%type <stmt> Stmt
%type <stmt> Simple_Stmt
%type <stmt> Compd_Stmt_With_Scope
%type <stmt> Stmt_With_Scope
%type <stmt> Stmt_No_New_Scope
%type <stmt> Compd_Stmt_No_New_Scope
%type <stmts> Stmt_List
%type <stmt> Expr_Stmt
%type <stmt> Select_Stmt
%type <stmt> Select_Rest_Stmt
%type <node> Cond
%type <op> Cond_Opt
%type <stmt> Switch_Stmt
%type <stmts> Switch_Stmt_List
%type <caseStmts> Case_Label
%type <stmt> Iter_Stmt
%type <stmt> For_Init_Stmt
%type <stmt> For_Rest_Stmt
%type <declList> Trans_Unit
%type <decl> Ext_Decl
%type <funcDecl> Func_Def
%type <program> Program




%%
/* Rules
 * -----
 * All productions and actions should be placed between the start and stop
 * %% markers which delimit the Rules section.
	 
 */
Program           : Trans_Unit                  { 
                                                  Program *program = new Program($1);
                                                  program->SetParent(NULL);
                                                  // if no errors, advance to next phase
                                                  if (ReportError::NumErrors() == 0) 
                                                      program->Print(0);
                                                }
                  ;

Var_Ident         : T_Identifier                   { $$ = new Identifier(@1, $1); }
                  ;

Pri_Expr          : Var_Ident                      { $$ = new FieldAccess(NULL, $1); }
                  | T_IntConstant                  { $$ = new IntConstant(@1, $1); }
                  | T_FloatConstant                { $$ = new FloatConstant(@1, $1); }
                  | T_BoolConstant                 { $$ = new BoolConstant(@1, $1); }
                  | '(' Expr ')'                   { $$ = $2; }
                  ;

Pst_Expr          : Pri_Expr                       { $$ = $1; }
                  | Func_Call                      { $$ = $1; }
                  | Pst_Expr '.' T_FieldSelection  { $$ = new FieldAccess($1, new Identifier(@3, $3)); }
                  | Pst_Expr T_Inc                 { $$ = new PostfixExpr($1, new Operator(@2, "++")); }
                  | Pst_Expr T_Dec                 { $$ = new PostfixExpr($1, new Operator(@2, "--")); }
                  ;

Int_Expr          : Expr                           { $$=$1; }
                  ;

Func_Call         : Func_Call_or_Mtd               { $$=$1; }
                  ;

Func_Call_or_Mtd  : Func_Call_Gen                  { }
                  ;

Func_Call_Gen     : Func_Call_Head_Prm ')'         { }
                  | Func_Call_Head_NoPrm ')'       { }
                  ;

Func_Call_Head_NoPrm : Func_Call_header T_Void     { }
                     | Func_Call_header            { }
                     ;

Func_Call_Head_Prm  : Func_Call_header Assign_Expr       {}
                    | Func_Call_Head_Prm ',' Assign_Expr {}
                    ;

Func_Call_header    : Func_Ident '('             {}
                    ;

Func_Ident          : Type_Spec                  {}
                    | Pst_Expr                   {  }
                    ;

Unary_Expr          : Pst_Expr                   { $$ = $1; }
                    | T_Inc Unary_Expr           { $$ = new ArithmeticExpr(new Operator(@1, "++"), $2); }
                    | T_Dec Unary_Expr           { $$ = new ArithmeticExpr(new Operator(@1, "--"), $2); }
                    | Unary_Op Unary_Expr        { $$ = new ArithmeticExpr($1, $2); }
                    ;

Unary_Op            : '+'                        { $$ = new Operator(@1, yytext); }
                    | '-'                        { $$ = new Operator(@1, yytext); }
                    ;

Mult_Expr           : Unary_Expr                 { $$ = $1; }
                    | Mult_Expr '*' Unary_Expr   { $$ = new ArithmeticExpr($1, new Operator(@1, "*"), $3); }
                    | Mult_Expr '/' Unary_Expr   { $$ = new ArithmeticExpr($1, new Operator(@1, "/"), $3);  }
                    ;

Add_Expr            : Mult_Expr                  { $$ = $1; }
                    | Add_Expr '+' Mult_Expr     { $$ = new ArithmeticExpr($1, new Operator(@1, "+"), $3); }
                    | Add_Expr '-' Mult_Expr     { $$ = new ArithmeticExpr($1, new Operator(@1, "-"), $3); }
                    ;

Shift_Expr          : Add_Expr                    { $$ = $1; }
                    ;

Rel_Expr            : Shift_Expr                  { $$ = $1; }
                    | Rel_Expr '<' Shift_Expr     { $$ = new RelationalExpr($1, new Operator(@1, "<"), $3); }
                    | Rel_Expr '>' Shift_Expr     { $$ = new RelationalExpr($1, new Operator(@1, ">"), $3); }
                    | Rel_Expr T_LessEqual Shift_Expr     { $$ = new RelationalExpr($1, new Operator(@1, "<="), $3); }
                    | Rel_Expr T_GreaterEqual Shift_Expr     { $$ = new RelationalExpr($1, new Operator(@1, ">="), $3);}
                    ;

Eq_Expr             : Rel_Expr                    { $$ = $1; }
                    | Eq_Expr T_Equal Rel_Expr    { $$ = new EqualityExpr($1, new Operator(@1, "=="), $3); }
                    | Eq_Expr T_NotEqual Rel_Expr { $$ = new EqualityExpr($1, new Operator(@1, "!="), $3); }
                    ;

And_Expr            : Eq_Expr                     { $$ = $1; }
                    ;

Xor_Expr            : And_Expr                    { $$ = $1; }
                    ;

Inc_Or_Expr         : Xor_Expr                    { $$ = $1; }
                    ;

Log_And_Expr        : Inc_Or_Expr                 { $$ = $1; }
                    | Log_And_Expr T_And Inc_Or_Expr  { $$ = new LogicalExpr($1, new Operator(@1, "&&"), $3); }
                    ;

Log_Xor_Expr        : Log_And_Expr                { $$ = $1; }

Log_Or_Expr         : Log_Xor_Expr                { $$ = $1; }
                    | Log_Or_Expr T_Or Log_Xor_Expr { $$ = new LogicalExpr($1, new Operator(@1, "||"), $3); }
                    ;

Cond_Expr           : Log_Or_Expr                 { $$ = $1; }
                    ;

Assign_Expr         : Cond_Expr                   { $$ = $1; }
                    | Unary_Expr Assign_Op Assign_Expr { $$ = new AssignExpr($1, $2, $3); }
                    ;

Assign_Op           : '='                         { $$ = new Operator(@1, yytext); }
                    | T_Mul_Assign                { $$ = new Operator(@1, yytext); }
                    | T_Div_Assign                { $$ = new Operator(@1, yytext); }
                    | T_Add_Assign                { $$ = new Operator(@1, yytext); }
                    | T_Sub_Assign                { $$ = new Operator(@1, yytext); }
                    ;

Expr                : Assign_Expr                 {}
                    ;

Const_Expr          : Cond_Expr                   {}
                    ;

Decl                : Func_Proto ';'              {}
                    | Init_Decl_List ';'          {$$=$1;}
                    ;

Func_Proto          : Func_Declr ')'              {}
                    ;

Func_Declr          : Func_Hdr                    {}
                    | Func_Hdr_With_Param         {}
                    ;

Func_Hdr_With_Param : Func_Hdr Param_Decl         {}
                    | Func_Hdr_With_Param ',' Param_Decl {}
                    ;

Func_Hdr            : Fully_Spec_Type T_Identifier '(' {}
                    ;


Param_Declr         : Type_Spec T_Identifier      {}
                    ;

Param_Decl          : Param_Declr                 {}
                    | Param_Type_Spec             {}
                    ;


Param_Type_Spec     : Type_Spec                   {}
                    ;

Init_Decl_List      : Single_Decl                 {$$=$1;}
                    ;

Single_Decl         : Fully_Spec_Type T_Identifier { $$ = new VarDecl(new Identifier(@2, $2), $1); }
                    ;

Fully_Spec_Type     : Type_Spec                   {$$=$1;}
                    ;



Type_Spec       : Type_Spec_Nonarr                { $$ = $1; }
                ;

Type_Spec_Nonarr : T_Void                         { $$ = Type::voidType; }
                 | T_Float                        { $$ = Type::floatType;}
                 | T_Int                          { $$ = Type::intType;}
                 | T_Bool                         { $$ = Type::boolType;}
                 | T_Vec2                         { $$ = Type::vec2Type;}
                 | T_Vec3                         { $$ = Type::vec3Type;}
                 | T_Vec4                         { $$ = Type::vec4Type;}
                 | T_Mat2                         { $$ = Type::mat2Type;}
                 | T_Mat3                         { $$ = Type::mat3Type;}
                 | T_Mat4                         { $$ = Type::mat4Type;}
                 ;

Init            : Assign_Expr                     {}
                ;

Decl_Stmt       : Decl                            {}
                ;

Stmt            : Compd_Stmt_With_Scope           {}
                | Simple_Stmt                     {}
                ;

Stmt_No_New_Scope  : Compd_Stmt_No_New_Scope      {}
                   | Simple_Stmt                  {}
                   ;

Stmt_With_Scope  : Compd_Stmt_No_New_Scope        {}
                 | Simple_Stmt                    {}
                 ;

Simple_Stmt : Decl_Stmt                           {}
            | Expr_Stmt                           {}
            | Select_Stmt                         {}
            | Switch_Stmt                         {}
            | Case_Label                          {}
            | Iter_Stmt                           {}
            ;

Compd_Stmt_With_Scope   : '{' '}'                 {}
                        | '{' Stmt_List '}'       {}
                        ;

Compd_Stmt_No_New_Scope : '{' '}'                 {}
                        | '{' Stmt_List '}'       {}
                        ;

Stmt_List   : Stmt                                { ($$ = new List<Stmt*>)->Append($1); }
            | Stmt_List Stmt                      { ($$ = $1)->Append($2); }
            ;

Expr_Stmt   : ';'                                 {$$ = new EmptyExpr();}
            | Expr ';'                            {$$=$1;}
            ;

Select_Stmt : T_If '(' Expr ')' Select_Rest_Stmt  {}
            ;

Select_Rest_Stmt : Stmt_With_Scope T_Else Stmt_With_Scope {}
                 | Stmt_With_Scope                { $$=$1; }
                 ;

Cond    : Expr                                    { $$=$1; }
        | Fully_Spec_Type T_Identifier T_Equal Init {}
        ;

Switch_Stmt :                        {}
            | T_Switch '(' Expr ')' '{' Switch_Stmt_List '}' {}
            ;

Switch_Stmt_List : Stmt_List                      {$$=$1;}
                 ;

Case_Label  : T_Case Expr ':'                     {}
            | T_Default ':'                       {}
            ;

Iter_Stmt   : T_While '(' Cond ')' Stmt_No_New_Scope {}
            | T_For '(' For_Init_Stmt For_Rest_Stmt ')' Stmt_No_New_Scope {}
            ;

For_Init_Stmt   : Expr_Stmt                       {$$=$1;}
                | Decl_Stmt                       {$$=$1;}
                ;

Cond_Opt : Cond                                   {  }
         |                                        {}
         ;

For_Rest_Stmt   : Cond_Opt ';'                    {}
                | Cond_Opt ';' Expr               {}
                ;

Trans_Unit : Trans_Unit Ext_Decl                  { ($$=$1)->Append($2); }
           | Ext_Decl                             { ($$ = new List<Decl*>)->Append($1); }
           ;

Ext_Decl  : Func_Def                              { $$=$1; }
          | Decl                                  { $$=$1; }
          ;

Func_Def : Func_Proto Compd_Stmt_No_New_Scope     { ($$ = $1)->SetFunctionBody($2); }
      

%%

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