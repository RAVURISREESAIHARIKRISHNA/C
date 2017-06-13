#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[10],front=0,rear=0;
void insert();
void del();
void display();
void main()
{
	clrscr();
	int ch;
	while(1)
	{
		printf("\n\nENTER CHOICE:\n1.PUSH\n2.SERVE OUT\n3.DISPLAY\n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert();
			break;

			case 2:
			del();
			break;

			case 3:
			display();
			break

			default:
			exit(0);
		}
	}
}
void insert()
{
	if(rear
}