
%%
abb*ab*(ab*a)*b* printf("Valid String");
(.)* printf("Invalid String");
%%
int yywrap(void){}
int main()
{
    yylex();
    return 0;
}
