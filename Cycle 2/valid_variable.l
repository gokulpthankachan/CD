
%%
(int|float|char|double|void|short|long)[ ][_(a-z)(A-Z)][_(a-z)(A-Z)(0-9)]* printf("Valid");
(int|float|double|short|long)[ ][_(a-z)(A-Z)][_(a-z)(A-Z)(0-9)]*[ ]*[=][ ]*[0-9]* printf("Valid");
(char)[ ][_(a-z)(A-Z)][_(a-z)(A-Z)(0-9)]*[ ]*[=][ ]*["][_(0-9)(a-z)(A-Z)]*["] printf("Valid");
(.)* printf("Invalid");
%%
int yywrap(void){}
int main()
{
    yylex();
    return 0;
}
