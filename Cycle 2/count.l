%{
    int lcount = 1;
    int wcount = 1;
    int ccount = 0;
%}
%%
[ ] wcount++;ccount++;
[\n]. lcount++;wcount++;ccount++;
(.) ccount++;
%%
int yywrap(void){}
int main()
{
    char *filename;
    FILE *ptr;
    printf("Enter the filename : ");
    scanf("%s",filename);
    ptr=fopen(filename,"r");
    if(ptr==NULL)
    {
        printf("Error occured");
    }
    yyin=ptr;
    yylex();
    printf("Number of lines : %d\n",lcount);
    printf("Number of words : %d\n",wcount);
    printf("Number of characters : %d\n",ccount);
    return 0;
}