
%%
(int)[ ][$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*[0-9]+)?[ ]*(,[ ]*[$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*[0-9]+)?)*[ ]*(;)   {printf("VALID Int");}
(float)[ ][$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*[.]?[0-9]+)?[ ]*(,[ ]*[$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*[.]?[0-9]+)?)*[ ]*(;)   {printf("VALID Float");}
(float)[ ][$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*[0-9]+[.]?[0-9]*)?[ ]*(,[ ]*[$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*[0-9]+[.]?[0-9]*)?)*[ ]*(;)   {printf("VALID Float");}
(char)[ ][$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*(')[a-zA-Z]('))?[ ]*(,[ ]*[$_a-zA-Z][$_a-zA-Z0-9]*([ ]*(=)[ ]*(')[a-zA-Z]('))?)*[ ]*(;)   {printf("VALID Character");}
(.)*    {printf("Invalid variable declaration");}
%%
int yywrap(void){}
int main(){
    yylex();
    return 0;
}

/*
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
*/
