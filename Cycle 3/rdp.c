#include<stdio.h>
#include<string.h>
#include<ctype.h>
// E -> T E'
// E' -> + T E' | e
// T -> F T'
// T' -> * F T' | e
// F -> ( E ) | id

void E(char str[100]);
void EPrime(char str[100]);
void T(char str[100]);
void TPrime(char str[100]);
void F(char str[100]);

int i = 0;

void E(char str[100])
{
    T(str);
    EPrime(str);
}

void EPrime(char str[100])
{
    if (str[i] == '+')
    {
        i++;
        T(str);
        EPrime(str);
    }
    else
    {
        return;
    }
}

void T(char str[100])
{
    F(str);
    TPrime(str);
}

void TPrime(char str[100])
{
    if (str[i] == '*')
    {
        i++;
        F(str);
        TPrime(str);
    }
    else
    {
        return;
    }
}

void F(char str[100])
{
    if (str[i] == '(')
    {
        i++;
        E(str);
        if (str[i] == ')')
        {
            i++;
        }
    }
    else if (isalnum(str[i]))
    {
        i++;
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