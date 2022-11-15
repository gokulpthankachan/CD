
%%
(a[a|b]*a)|(b[a|b]*b) printf("Valid String");
(.)* printf("Invalid String");
%%
int yywrap(void){}
int main()
{
    yylex();
    return 0;
}