////////////////*****DYNAMIC MONOTONIC STACK***********\\\\\\\\\\\\\\\\\\
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//# define	 MAXSIZE	100

int *a,len_s,len_o;
void pop(void);
void push(void);
void display(void);
void is_empty(void);
void main()
{
	clrscr();
	int i,opt;
	printf("please enter no.f elements of stack that you want to create\n");
	scanf("%d",&len_s);
	printf("please enter elements");
	a=(int*)malloc(len_s*sizeof(int));
	if(a==NULL)
	{
		printf("ALLOCATION NOT POSSIBLE");
		exit(0);
	}
	len_o=len_s;
	for(i=0;i<=len_s-1;i++)
	{
		printf("\nenter %d element\t:\t",i+1);
		scanf("%d",&a[i]);

	}
	do{
	printf("\n\t\tCHOSE AN OPTION\n1.TO PUSH AN ELEMENT\n2.TO POP AN ELEMENT\n3.TO DISPLAY THE STACK\n4.TO CHECK WHETHER STACK IS EMPTY\nPRESS ANY OTHER NUMBER TO EXIT");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			is_empty();
			break;
	}

	}while(opt==1||opt==2||opt==3||opt==4);

	getch();
	free(a);
}

void display(void)
{
	int i;
	printf("\nTHE STACK IS:\n");
	if(len_s>0)
	{for(i=len_s-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}return;}
	else
	printf("EMPTY\n");return;

}

void push(void)
{
	if( len_s<=len_o)
	{
		printf("\nPLEASE ENTER THE INTEGER TO PUSH INTO THE STACK\n");
		scanf("%d",&a[len_s]);
		len_s=len_s+1;
	}
	else
	{
		a=(int*)realloc(a,1*sizeof(int));
		printf("\nPLEASE ENTER THE INTEGER TO PUSH INTO THE STACK\n");
		scanf("%d",&a[len_s]);
		len_s=len_s+1;

	}
}

void pop(void)
{
	if(len_s!=0)
	{
		printf("\nTHE ELEMENT     %d    IS POPPED OUT!",a[len_s-1]);
		len_s=len_s-1;
	}
	else
	{
		printf("\nSTACK IS EMPTY YOU CANNOT POP AN ELEMENT FROM IT!\n");

	}
}
void is_empty(void)
{
	if(len_s==0)
	{
		printf("\nSTACK IS EMPTY!\n");
		return;
	}
	else
	{
		printf("\nSTACK IS NOT EMPTY\n");
		return;
	}
}