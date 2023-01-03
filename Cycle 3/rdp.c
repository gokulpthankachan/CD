#include<stdio.h>
#include<string.h>
#include<ctype.h>
// E -> T E'
// E' -> + T E' | e
// T -> F T'
// T' -> * F T' | e
// F -> ( E ) | id

int E(char str[100]);
int EPrime(char str[100]);
int T(char str[100]);
int TPrime(char str[100]);
int F(char str[100]);

int i = 0;

int E(char str[100])
{
    if(T(str))
    {
        if(EPrime(str))
            return 1;
        else
            return 0;
    }
    else    
        return 0;
}

int EPrime(char str[100])
{
    if (str[i] == '+')
    {
        i++;
        if(T(str))
        {
            if(EPrime(str))
                return 1;
            else
                return 0;
        }
        else
            return 0; 
    }
    else
    {
        return 1;
    }
}

int T(char str[100])
{
    if(F(str))
    {
        if(TPrime(str))
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int TPrime(char str[100])
{
    if (str[i] == '*')
    {
        i++;
        if(F(str))
        {
            if(TPrime(str))
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
    else
    {
        return 1;
    }
}

int F(char str[100])
{
    if (str[i] == '(')
    {
        i++;
        if(E(str))
        {
            if (str[i] == ')')
            {
                i++;
            }
        }  
    }
    else if (isalpha(str[i]))
    {
        i++;
        return 1;
    }
    else if(isdigit(str[i]) == 1)
    {
		while(isdigit(str[i]))
			i++;
		return 1;	
	}
    else
    {
        return 0;
    }
}

void main()
{
    char str[100];
    printf("Enter string\n");
    scanf("%s",str);
    int len = strlen(str);
    str[len] = '$';
    E(str);
    if (str[i] == '$')
    {
        printf("Valid String\n");
    }
    else
    {
        printf("Invalid String\n");
    }
}
