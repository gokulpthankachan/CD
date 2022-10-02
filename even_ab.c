#include <stdio.h>

int state1(char str[25], int i);
int state2(char str[25], int i);
int state3(char str[25], int i);
int state4(char str[25], int i);

void main()
{
	char str[25];
	printf("Enter the string : ");
	scanf("%s", str);
	state1(str, 0);
	if(state1(str,0)==0)
	{
		printf("'%s' --> VALID STRING\n", str);
	}
	else
	{
		printf("'%s' --> INVALID STRING\n", str);
	}
}

int state1(char str[25], int i)
{
	if(str[i]=='a')
	{
		state2(str, i+1);
	}
	else if(str[i]=='b')
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
	if(str[i]=='a')
	{
		state1(str, i+1);
	}
	else if(str[i]=='b')
	{
		state4(str, i+1);
	}
	else if(str[i]=='\0')
	{
		return -1;
	}
}

int state3(char str[25], int i)
{
	if(str[i]=='a')
	{
		state4(str, i+1);
	}
	else if(str[i]=='b')
	{
		state1(str, i+1);
	}
	else if(str[i]=='\0')
	{
		return -1;
	}
}

int state4(char str[25], int i)
{
	if(str[i]=='a')
	{
		state3(str, i+1);
	}
	else if(str[i]=='b')
	{
		state2(str, i+1);
	}
	else if(str[i]=='\0')
	{
		return -1;
	}
}
