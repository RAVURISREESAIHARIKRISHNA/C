#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char infix[100],prefix[100],stack[100];
int len,len_stack=0,len_prefix=0;
void push_prefix(char);
void allclear(void);
void push_stack(char);
int isoperator(char);
void check_hiearchy(void);
int hiearchy(char);
void main()
{
	clrscr();
	printf("enter infix form:\n");
	gets(infix);
	int i;
	for(i=strlen(infix)-1;i>=0;i--)
	{
		if(isoperator(infix[i])==1)
		{
			push_stack(infix[i]);
			check_hiearchy();
			continue;

		}
		else
		{
			push_prefix(infix[i]);
		}

	}
	allclear();
	printf("PREFIX FORM IS:\n");
	puts(prefix);
	getch();
}

void push_stack(char a)
{
	stack[len_stack++]=a;
}
void push_prefix(char a)
{
	int i;
       //	if(isoperator(a)==1)
	if(len_prefix==0)
	{
		prefix[len_prefix++]=a;
		return;
	}
	else
	{
		for(i=len_prefix-1;i>=0;i--)
		{
			prefix[i+1]=prefix[i];
		}
		prefix[0]=a;
		len_prefix+=1;
		return;
	}
       /*	else
	{
		prefix[len_prefix++]=a;  ;
		return  ;
	}*/
}
void check_hiearchy(void)
{
	if(stack[len_stack-1]==')')
	return;
	if(stack[len_stack-1]=='(')
	{
		char t;
		while(stack[len_stack-2]!=')')
		{
			t=stack[len_stack-2];
			push_prefix(t);
			stack[len_stack-2]=stack[len_stack-1];
			len_stack--;
		}
		len_stack=len_stack-2;
		return;
	}
	if(len_stack>=2)
	{
		if(hiearchy(stack[len_stack-1])<hiearchy(stack[len_stack-2])&&stack[len_stack-2]!='(')
		{
			push_prefix(stack[len_stack-2]);
			stack[len_stack-2]=stack[len_stack-1];
			len_stack=len_stack-1;
			check_hiearchy();
		}
		if(hiearchy(stack[len_stack-1])==hiearchy(stack[len_stack-2])&&stack[len_stack-2]!='(')
		{
			push_prefix(stack[len_stack-2]);
			stack[len_stack-2]=stack[len_stack-1];
			len_stack=len_stack-1;
			check_hiearchy();
		}
	}
}
void allclear(void)
{
	while(len_stack!=0)
	{
		push_prefix(stack[len_stack-1]);
		len_stack--;
	}
}
int hiearchy(char a)
{
	int i;
	switch(a)
	{
		case '(':
		i=4;break;

		case '*':case '/':
		i=2;break;
		case'^':
		i=3;break;
		case'+':case'-':
		i=1;break;
	}
	return(i);
}
int isoperator(char a)
{
	if(a=='('||a==')'||a=='+'||a=='-'||a=='*'||a=='/'||a=='^')
	return(1);
	else
	return(0);
}