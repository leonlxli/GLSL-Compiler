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
    Program *program;
    FnDecl *fnDecl;
    Expr* expr;
    int integerConstant;
    bool boolConstant;
    char *stringConstant;
    double doubleConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
    List<Decl*> *declList;
    Type *type;
    VarDecl *varDecl;
    Identifier *identObj;

}


/* Tokens
 * ------
 * Here we tell yacc about all the token types that we are using.
 * Bison will assign unique numbers to these and export the #define
 * in the generated y.tab.h header file.
 */
%token   T_Void T_Bool T_Float T_Int T_Uint
%token   T_Bvec2 T_Bvec3 T_Bvec4 T_Ivec2 T_Ivec3 T_Ivec4 T_Uvec2 T_Uvec3 T_Uvec4 T_Vec2 T_Vec3 T_Vec4 T_Dims
%token   T_Mat2 T_Mat3 T_Mat4
%token   T_Struct T_FieldSelection
%token   T_In T_Out T_Inout
%token   T_Const T_Uniform
%token   T_Layout
%token   T_And T_Or 
%token   T_While T_Break T_Continue T_Do T_Else T_For T_If T_Return T_Switch T_Case T_Default 

%token   <identifier> T_Identifier
%token   <integerConstant> T_IntConstant
%token   <floatConstant> T_FloatConstant
%token   <boolConstant> T_BoolConstant
%token   T_Inc T_Dec T_LessEqual T_GreaterEqual T_Equal T_NotEqual



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

%type <declList>  DeclList 
%type <decl>      Decl
%type <type>      Type
%type <varDecl>   Variable
%type <varDecl>   VariableDecl
%type <identObj>  Identifier




%%
/* Rules
 * -----
 * All productions and actions should be placed between the start and stop
 * %% markers which delimit the Rules section.
	 
 */
Program           :    DeclList            { 
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

DeclList          :    DeclList Decl        { ($$=$1)->Append($2); }
                  |    Decl                 { ($$ = new List<Decl*>)->Append($1); }
                  ;

Decl              :    T_Void               { $$ = new VarDecl(); } 
                  |    VariableDecl         { $$ = $1; }
                  ;
          
VariableDecl      :     Variable ';'            { $$ = $1; }
                  ;

Variable          :     Type Identifier         { $$ = new VarDecl($2, $1); }
                  ;


Type              :     T_Int                   { $$ = Type::intType; }
                  |     T_Bool                  { $$ = Type::boolType; }
                  ;

Identifier        :     T_Identifier            { $$ = new Identifier(@1, $1); }
                  ;


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
 * thing it already does for you is assign the value of the global variable
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
