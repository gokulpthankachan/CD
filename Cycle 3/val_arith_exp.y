%token A
%%
start:  E '\n' {printf("Valid\n");return 0;}
E:  E '+' T | E '-' T | T 
T:  T '*' F | T '/' F | F 
F:  '(' E ')' | N 
N:  N A | A;
%%
#include "lex.yy.c"
main()
{
    return yyparse();
}
int yyerror(char *s) {fprintf(stderr, "%s\n", s);}