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
  char *stringConstant;
  double doubleConstant;
  char identifier[MaxIdentLen+1]; // +1 for terminating null
  Node *node;
  Expr *expr;
  Type *type;
  Decl *decl;
  List<Decl*> *declList;
  FnDecl *fnDecl;
}


/* Tokens
 * ------
 * Here we tell yacc about all the token types that we are using.
 * Bison will assign unique numbers to these and export the #define
 * in the generated y.tab.h header file.
 */
%token   T_Void T_Bool T_Float T_Int T_UInt
%token   T_BVec2 T_BVec3 T_BVec4 T_IVec2 T_IVec3 T_IVec4 T_UVec2 T_UVec3 T_UVec4 T_Vec2 T_Vec3 T_Vec4 T_Dims
%token   T_Mat2 T_Mat3 T_Mat4
%token   T_Struct T_FieldSelection
%token   T_In T_Out T_InOut
%token   T_Const T_Uniform
%token   T_Layout

%token   T_And T_Or 
%token   T_While T_Break T_Continue T_Do T_Else T_For T_If T_Return T_Switch T_Case T_Default 
%token   <identifier> T_Identifier
%token   <integerConstant> T_IntConstant
%token   <floatConstant> T_FloatConstant
%token   <boolConstant> T_BoolConstant
%token   T_Inc T_Dec T_LessEqual T_GreaterEqual T_Equal T_NotEqual
%token   T_Mul_Assign T_Div_Assign T_Add_Assign T_Sub_Assign



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


%type <expr> Pri_Expr
%type <postfixExpr> Pst_Expr
%type <expr> Int_Expr
%type <node> Func_Call
%type <node> Func_Call_Head_NoPrm
%type <node> Func_Call_Head_Prm
%type <node> Func_Call_header
%type <node> Func_Ident
%type <expr> Unary_Expr
%type <node> Unary_Op
%type <expr> Mult_Expr
%type <expr> Add_Expr
%type <expr> Rel_Expr
%type <expr> Eq_Expr
%type <expr> Log_And_Expr
%type <expr> Log_Or_Expr
%type <expr> Cond_Expr
%type <assignExpr> Assign_Expr
%type <node> Assign_Op
%type <expr> Expr
%type <expr> Const_Expr
%type <decl> Decl
%type <node> Func_Proto
%type <node> Func_Declr
%type <node> Func_Hdr
%type <node> Func_Hdr_With_Param
%type <node> Param_Declr
%type <node> Param_Decl
%type <node> Param_Type_Spec
%type <node> Init_Decl_List
%type <node> Single_Decl
%type <node> Fully_Spec_Type
%type <node> Layout_Qual
%type <node> Layout_ID_List
%type <node> Layout_ID
%type <node> Type_Qual
%type <node> Single_Type_Qual
%type <node> Storage_Qual
%type <node> Type_Spec
%type <node> Type_Spec_Nonarr
%type <node> Init
%type <node> Decl_Stmt
%type <stmt> Stmt
%type <node> Simple_Stmt
%type <node> Compd_Stmt_With_Scope
%type <node> Compd_Stmt_No_New_Scope
%type <node> Stmt_List
%type <node> Expr_Stmt
%type <node> Select_Stmt
%type <node> Select_Rest_Stmt
%type <node> Cond
%type <node> Switch_Stmt
%type <node> Switch_Stmt_List
%type <caseStmts> Case_Label
%type <node> Iter_Stmt
%type <node> For_Init_Stmt
%type <node> For_Rest_Stmt
%type <declList> Trans_Unit
%type <decl> Ext_Decl
%type <fnDecl> Func_Def
%type <program> Program




%%
/* Rules
 * -----
 * All productions and actions should be placed between the start and stop
 * %% markers which delimit the Rules section.
	 
 */
Program           : Trans_Unit                  { 
                                                  @1; 
                                                  /* pp2: The @1 is needed to convince 
                                                   * yacc to set up yylloc. You can remove 
                                                   * it once you have other uses of @n*/
                                                  Program *program = new Program($1);
                                                  program->SetParent(NULL);
                                                  // if no errors, advance to next phase
                                                  if (ReportError::NumErrors() == 0) 
                                                      program->Print(0);
                                                }
                  ;

Var_Ident         : T_Identifier                {}
                  ;

Pri_Expr          : Var_Ident                   {}
                  | T_IntConstant               {}
                  | T_FloatConstant             {}
                  | T_BoolConstant              {}
                  | '(' Expr ')'                {}
                  ;

Pst_Expr          : Pri_Expr                    {}
                  | Func_Call                   {}
                  | Pst_Expr '.' T_FieldSelection {}
                  | Pst_Expr T_Inc           {}
                  | Pst_Expr T_Dec           {}
                  ;

Int_Expr          : Expr                        {}
                  ;

Func_Call         : Func_Call_or_Mtd            {}
                  ;

Func_Call_or_Mtd  : Func_Call_Gen               {}
                  ;

Func_Call_Gen     : Func_Call_Head_Prm ')'         {}
                  | Func_Call_Head_NoPrm ')'       {}
                  ;

Func_Call_Head_NoPrm : Func_Call_header T_Void     {}
                     | Func_Call_header            {}
                     ;

Func_Call_Head_Prm  : Func_Call_header Assign_Expr       {}
                    | Func_Call_Head_Prm ',' Assign_Expr {}
                    ;

Func_Call_header    : Func_Ident '('             {}
                    ;

Func_Ident          : Type_Spec                  {}
                    | Pst_Expr                   {}
                    ;

Unary_Expr          : Pst_Expr                   {}
                    | T_Inc Unary_Expr           {}
                    | T_Dec Unary_Expr           {}
                    | Unary_Op Unary_Expr        {}
                    ;

Unary_Op            : '+'                        {}
                    | '-'                        {}
                    ;

Mult_Expr           : Unary_Expr                 {}
                    | Mult_Expr '*' Unary_Expr   {}
                    | Mult_Expr '/' Unary_Expr   {}
                    ;

Add_Expr            : Mult_Expr                  {}
                    | Add_Expr '+' Mult_Expr     {}
                    | Add_Expr '-' Mult_Expr     {}
                    ;

Shift_Expr          : Add_Expr                    {}
                    ;

Rel_Expr            : Shift_Expr                  {}
                    | Rel_Expr '<' Shift_Expr     {}
                    | Rel_Expr '>' Shift_Expr     {}
                    | Rel_Expr T_LessEqual Shift_Expr     {}
                    | Rel_Expr T_GreaterEqual Shift_Expr     {}
                    ;

Eq_Expr             : Rel_Expr                    {}
                    | Eq_Expr T_Equal Rel_Expr    {}
                    | Eq_Expr T_NotEqual Rel_Expr {}
                    ;

And_Expr            : Eq_Expr                     {}
                    ;

Xor_Expr            : And_Expr                    {}
                    ;

Inc_Or_Expr         : Xor_Expr                    {}
                    ;

Log_And_Expr        : Inc_Or_Expr                 {}
                    | Log_And_Expr T_And Inc_Or_Expr  {}
                    ;

Log_Xor_Expr        : Log_And_Expr                {}

Log_Or_Expr         : Log_Xor_Expr                {}
                    | Log_Or_Expr T_Or Log_Xor_Expr {}
                    ;

Cond_Expr           : Log_Or_Expr                 {}
                    ;

Assign_Expr         : Cond_Expr                   {}
                    | Unary_Expr Assign_Op Assign_Expr {}
                    ;

Assign_Op           : '='                         {}
                    | T_Mul_Assign                {}
                    | T_Div_Assign                {}
                    | T_Add_Assign                {}
                    | T_Sub_Assign                {}
                    ;

Expr                : Assign_Expr                 {}
                    ;

Const_Expr          : Cond_Expr                   {}
                    ;

Decl                : Func_Proto ';'              {}
                    | Init_Decl_List ';'          {}
                    | Type_Qual T_Identifier ';'  {}
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


Param_Type_Spec     : Type_Spec {}
                    ;

Init_Decl_List      : Single_Decl {}
                    ;

Single_Decl         : Fully_Spec_Type T_Identifier {}
                    ;

Fully_Spec_Type     : Type_Spec {}
                    | Type_Qual Type_Spec {}
                    ;

Layout_Qual : T_Layout '(' Layout_ID_List ')' {}
         ;

Layout_ID_List : Layout_ID {}
               ;

Layout_ID  : T_Identifier '=' T_IntConstant {}
           ;

Type_Qual : Single_Type_Qual {}
       | Type_Qual Single_Type_Qual {}
       ;

Single_Type_Qual   : Storage_Qual {}
                | Layout_Qual     {}
                ;

Storage_Qual    : T_Const {}
                | T_In {}
                | T_Out {}
                | T_InOut {}
                | T_Uniform {}
                ;

Type_Spec       : Type_Spec_Nonarr    {}
                ;

Type_Spec_Nonarr : T_Void {}
                 | T_Float {}
                 | T_Int {}
                 | T_Bool {}
                 | T_Vec2 {}
                 | T_Vec3 {}
                 | T_Vec4 {}
                 | T_Mat2 {}
                 | T_Mat3 {}
                 | T_Mat4 {}
                 ;

Init : Assign_Expr {}
     ;

Decl_Stmt   : Decl {}
            ;

Stmt        : Compd_Stmt_With_Scope {}
            | Simple_Stmt {}
            ;

Stmt_No_New_Scope  : Compd_Stmt_No_New_Scope {}
                   | Simple_Stmt {}
                   ;

Stmt_With_Scope  : Compd_Stmt_No_New_Scope {}
                 | Simple_Stmt {}
                 ;

Simple_Stmt : Decl_Stmt {}
            | Expr_Stmt {}
            | Select_Stmt {}
            | Switch_Stmt {}
            | Case_Label {}
            | Iter_Stmt {}
            ;

Compd_Stmt_With_Scope   : '{' '}' {}
                        | '{' Stmt_List '}' {}
                        ;

Compd_Stmt_No_New_Scope : '{' '}' {}
                        | '{' Stmt_List '}' {}
                        ;

Stmt_List   : Stmt {}
            | Stmt_List Stmt {}
            ;

Expr_Stmt   : ';' {}
            | Expr ';' {}
            ;

Select_Stmt : T_If '(' Expr ')' Select_Rest_Stmt {}
            ;

Select_Rest_Stmt : Stmt_With_Scope T_Else Stmt_With_Scope {}
                 | Stmt_With_Scope {}
                 ;

Cond    : Expr {}
        | Fully_Spec_Type T_Identifier T_Equal Init {}
        ;

Switch_Stmt : T_Switch '(' Expr ')' '{' Switch_Stmt_List '}' {}
            ;

Switch_Stmt_List : Stmt_List {}
                 ;

Case_Label  : T_Case Expr ':' {}
            | T_Default ':' {}
            ;

Iter_Stmt   : T_While '(' Cond ')' Stmt_No_New_Scope {}
            | T_For '(' For_Init_Stmt For_Rest_Stmt ')' Stmt_No_New_Scope {}
            ;

For_Init_Stmt   : Expr_Stmt {}
                | Decl_Stmt {}
                ;

Cond_Opt : Cond {}
         ;

For_Rest_Stmt   : Cond ';' {}
                | Cond ';' Expr {}
                ;

Trans_Unit : Trans_Unit Ext_Decl    { }
           | Ext_Decl               { }
           ;

Ext_Decl  : Func_Def                {  }
          | Decl                  {  }
          ;

Func_Def : Func_Proto Compd_Stmt_No_New_Scope {}
      

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