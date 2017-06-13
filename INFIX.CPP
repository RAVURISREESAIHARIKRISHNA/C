#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>

int is_operator(char);
int hiearchy(char);
void push(char);
char pop(void);

char infix[10],postfix[10],stack[10];int len;

void main()
{
	clrscr();
	printf("enter string");
	scanf("%s",infix);
	len=strlen(infix);
	int i;  char x;
	for(i=0;i<=len-1;i++)

	{
		x=infix[i];
		if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
		{
			push(x);
		}
		else if(is_operator(x)==1)
		{
			push(x);
		}


	}
}