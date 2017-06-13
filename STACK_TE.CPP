#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream.h>

struct stack
{
	char title[10];
}*p,*arr;
void main()
{
	clrscr();
	struct stack temp;
	printf("enter basic size\n");
	int h;
	scanf("%d",&h);
	arr=(struct stack*)malloc(h*sizeof(struct stack));
	p=arr;
	int i;
	for(i=0;i<=h-1;i++)
	{
		printf("\nenter %d stringelement\n",i+1);
		scanf("%s",p->title);

		p++;

	}
	p=arr;

	temp=arr[0];
	arr[0]=arr[1];
	arr[1]=temp;
	for(i=0;i<=h-1;i++)
	{
		printf("\n the key is\n");
		puts(p->title);
		printf("\n");
		p++;
	}

	getch();
}