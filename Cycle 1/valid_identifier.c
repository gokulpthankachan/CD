#include <stdio.h>
#include<ctype.h>

int state1(char str[25], int i);
int state2(char str[25], int i);
int state3(char str[25], int i);

void main()
{
	char str[25];
	printf("Enter the string : ");
	scanf("%s", str);
	if(state1(str, 0)==0)
	{
		printf("VALID IDENTIFIER\n");
	}
	else
	{
		printf("INVALID IDENTIFIER\n");
	}
}

int state1(char str[25], int i)
{
    if(isalpha(str[i]) != 0)
    {
        state2(str, i+1);
    }
    else if(isdigit(str[i])!= 0)
    {
        state3(str, i+1);
    }
    else if(str[i]=='\0')
    {
        return -1;
    }
}

int state2(char str[25], int i)
{
    if(isalpha(str[i]) !=0 || isdigit(str[i]) !=0 )
    {
        state2(str, i+1);
    }
    else if(str[i]=='\0')
    {
        return 0;
    }
}
int state3(char str[25], int i)
{
    return -1;
}
