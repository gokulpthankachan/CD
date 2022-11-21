
%%
(int|float|char|double|void|short|long)[ ][_(a-z)(A-Z)][_(a-z)(A-Z)(0-9)]* printf("Valid");
(.)* printf("Invalid");
%%
int yywrap(void){}
int main()
{
    yylex();
    return 0;
}
