#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>


struct stack
{
	char title[100];
}*p,*arr;

void push(void);
void serve_out(void);
void display(void);

int len_q,len_o;


void main()
{
	clrscr();
	int ch;
	printf("ENTER THE BASIC LENGTH OF QUEUE OF STRINGS\n");
	//int x;
	scanf("%d",&len_o);
	len_q=len_o;

	arr=(struct stack*)malloc(len_q*(sizeof(struct stack)));

	int i;
	p=arr;
	for(i=0;i<=len_q-1;i++)
	{
		printf("\nenter %d element string\n",i+1);
		scanf("%s",p->title);
		p++;
	}
	do
	{printf("\n1.PUSH\n2.SERVE OUT\n.3.DISPLAY\nPRESS ANY OTHER TO EXIT\n");
	//int ch;
	scanf("%d",&ch);


		switch(ch)
		{
			case 1:
			push();
			break;

			case 2:
			serve_out();
			break;

			case 3:
			display();
			break;

		}

	} while(ch==1||ch==2||ch==3);

	free(arr);
	free(p);
	getch();

}

void push(void)
{
	printf("enter the string to push\n");
	p=arr;
	if(len_q<len_o)
	{
		p=arr+len_q;
		scanf("%s",p->title);
		len_q++;

	}
	else
	{
		arr=(struct stack*)realloc(arr,1);
		p=arr+len_q;
		scanf("%s",p->title);
		len_q++;
		len_o++;

	}
	printf("\nelement pushed\n");

}

void serve_out()
{
	int i;
	p=arr;
	if(len_q!=0)
	{for(i=0;i<=len_q-2;i++)
	{
		//*(p->title)=*((p+1)->title);
		strcpy(p->title,(p+1)->title);  //strcpy(1,2)=copies string 2 into 1.
		p=arr+i+1;
	}
	len_q--;     }
	else
	printf("\nINVALID OPERATION\n");

}
void display()
{
	printf("\nQ IS\n");
	printf("SERVER   :\t");
	int i;
	p=arr;
	for(i=0;i<=len_q-1;i++)
	{
		printf("%s",p->title);printf("\t");
		p++;
	}

}