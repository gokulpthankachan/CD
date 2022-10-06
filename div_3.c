#include <stdio.h>

int state1(char str[25], int i);
int state2(char str[25], int i);
int state3(char str[25], int i);

void main()
{
	char str[25];
	printf("Enter the decimal number : ");
	scanf("%s", str);
	if(state1(str, 0)==0)
	{
		printf("'%s' --> DIVISIBLE BY 3\n", str);
	}
	else
	{
		printf("'%s' --> NOT DIVISIBLE BY 3\n", str);
	}
}

int state1(char str[25], int i)
{
	if(str[i]=='0' || str[i]=='3' || str[i]=='6' || str[i]=='9')
	{
		state1(str, i+1);
	}
	else if(str[i]=='1' || str[i]=='4' || str[i]=='7')
	{
		state2(str, i+1);
	}
    else if(str[i]=='2' || str[i]=='5' || str[i]=='8')
	{
		state3(str, i+1);
	}
	else if(str[i]=='\0')
	{
		return 0;
	}
}

int state2(char str[25], int i)
{
	if(str[i]=='0' || str[i]=='3' || str[i]=='6' || str[i]=='9')
	{
		state2(str, i+1);
	}
	else if(str[i]=='1' || str[i]=='4' || str[i]=='7')
	{
		state3(str, i+1);
	}
    else if(str[i]=='2' || str[i]=='5' || str[i]=='8')
	{
		state1(str, i+1);
	}
	else if(str[i]=='\0')
	{
		return -1;
	}
}

int state3(char str[25], int i)
{
	if(str[i]=='0' || str[i]=='3' || str[i]=='6' || str[i]=='9')
	{
		state3(str, i+1);
	}
	else if(str[i]=='1' || str[i]=='4' || str[i]=='7')
	{
		state1(str, i+1);
	}
    else if(str[i]=='2' || str[i]=='5' || str[i]=='8')
	{
		state2(str, i+1);
	}
	else if(str[i]=='\0')
	{
		return -1;
	}
}