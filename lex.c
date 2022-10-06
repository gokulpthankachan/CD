#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
   /* char filename[20];
    printf("Enter the filename : ");
    scanf("%s", filename);
  */
    char keyword[][15]={"int", "void", "char", "double", "auto", "if", "else", "for", "break", "auto", "struct"};
    char operator[][15]={"+", "-", "*", "/", "==", "!=", ">", "<", "=", "&", "^"};
    FILE *fp;
    char buffer[1024];
    char *token;

    /*fp = fopen(filename, "r");
    if(fp==NULL)
    {
        printf("No such file\n");
    }
    else
    {*/
        fp = fopen("input.txt", "r");
        while(fgets(buffer, 1024, fp))
        {
            token=strtok(buffer, " ");
            while(token != NULL)
            {
                for(int i=0;i<11;i++)
                {
                    if(strcmp(keyword[i], token)==0)
                    {
                        printf("'%s' --> KEYWORD\n", token);
                    }
                    else if(strcmp(operator[i], token)==0)
                    {
                        printf("'%s' --> OPERATOR\n", token);
                    }
                }
                token=strtok(NULL, " ");
            }
        }
        fclose(fp);
   // }
}