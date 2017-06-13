#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char infix[100],postfix[100],stack[100];
//infix=(char*)malloc(100);
//postfix=(char*)malloc(100);
//stack=(char*)malloc(100);

int len,len_stack=0,len_postfix=0;

void push_postfix(char);

void allclear(void);

void push_stack(char);

int isoperator(char);


void check_hiearchy(void);

int hiearchy(char);




void main()
{
	clrscr();
	printf("Enter infix form:\n");
	scanf("%s",infix);
	len=strlen(infix);
	int i;
	for(i=0;i<=len-1;i++)
	{
		if(isoperator(infix[i])==1)
		{
			push_stack(infix[i]);
			check_hiearchy();
			continue;

		}

		else
		{
			push_postfix(infix[i]);

		}

	}
	allclear();
	printf("POSTFIX FORM IS:\n");

	puts(postfix);
	getch();
  //	free(infix);
//	free(postfix);
//	free(stack);
}



void push_stack(char a)
{
	stack[len_stack++]=a;

}
void push_postfix(char a)
{
	postfix[len_postfix++]=a;
}



void check_hiearchy(void)
{
	if(stack[len_stack-1]=='(')
	return;
	if(stack[len_stack-1]==')')
	{
		char t;
		while(stack[len_stack-2]!='(')
		{
			t=stack[len_stack-2];
			push_postfix(t);
			stack[len_stack-2]=stack[len_stack-1];
			len_stack--;


		}
		len_stack=len_stack-2;
		return;

	}
	if(len_stack>=2)
	{if(hiearchy(stack[len_stack-1])<hiearchy(stack[len_stack-2])&&stack[len_stack-2]!='(')
	{

		//char temp;
	       //	temp=stack[len_stack-2];
		push_postfix(stack[len_stack-2]);
		stack[len_stack-2]=stack[len_stack-1];
		len_stack=len_stack-1;
		check_hiearchy();
	}


	if(hiearchy(stack[len_stack-1])==hiearchy(stack[len_stack-2])&&stack[len_stack-2]!='(')
	{
	       //	char y;
		//y=stack[len_stack-2];
		push_postfix(stack[len_stack-2]);
		stack[len_stack-2]=stack[len_stack-1];
		len_stack=len_stack-1;
		check_hiearchy();


	}}
}

void allclear(void)
{       while(len_stack!=0)
	{push_postfix(stack[len_stack-1]);
	len_stack--; }

}
int hiearchy(char a)
{
	int i;
	switch(a)
	{case'(':
	i=4;
	break ;

	case'*':
	case'/':
	i=2;
	break;

	case'^':
	i=3;
	break;


	case'+':
	case'-':
	i=1;
	break;}
	return(i);

}
int isoperator(char a)
{
	if(a=='('||a==')'||a=='+'||a=='-'||a=='*'||a=='/'||a=='^')
	return(1);
	else
	return(0);
}