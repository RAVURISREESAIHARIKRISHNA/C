#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
void push(char*,char,int);
void pop(char*,int)

void main()
{
	clrscr();
	char *a,*s,*b,temp;
	int b_count=0,len_s=0,len_b=0;
	a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
	s=(char*)malloc(100*sizeof(char));

	printf("PLEASE ENTER INFIX EXPRESSION\n");
	gets(a);

	int i;
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(a[i]=='+'||a[i]=='('||a[i]==')'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')
		{

			push(s,a[i],len_s);
			if(a[i]=='(')
			b_count+=1;
			//hiearchy check

			if((a[i]=='*'||a[i]=='/')&&a[i-1]=='^')
			{
				temp=a[i];
				pop(s,len_s);
				pop(s,len_s);
				push(s,temp,len_s);
			}

		}

	}

}