
%%
[0-9] printf("Digit");
[a-z] printf("Lowercase Letter");
[A-Z] printf("Uppercase Letter");
[!@#$%^&*()_+<>?|] printf("Symbol");
%%
int yywrap(void){}
int main()
{
    yylex();
    return 0;
}
