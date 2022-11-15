
%%
[$_(a-z)(A-Z)][$_(a-z)(A-Z)(0-9)]* printf("Valid String");
(.)* printf("Invalid String");
%%
int yywrap(void){}
int main()
{
    yylex();
    return 0;
}