#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct linked_ist
{
	int co,ex;
	struct linked_list*next;
}*first_1,*first_2,*head_1,*head_2                               ;
int len_1=0,len_2=0;
void poly_create_1(void);
void poly_create_2(void);
void poly_add(void);
void poly_sub(void);
void main()
{
	clrscr();
	poly_create_1();
	poly_create_2();
	poly_add();
	poly_sub();
	getch();
}
void poly_create_1(void)
{
	int co_x,ex_x;
	while(1)
	{printf("\n\ncoefficient :  ");
	scanf("%d",&co_x);
	if(co_x==0)
	break;
	printf("\nexponent :  ");
	scanf("%d",&ex_x);
	create(co_x,ex_x,*first_1);}
}
void poly_create_2(void)
{
	int co_x,ex_x;
	while(1)
	{printf("\n\ncoefficient :  ");
	scanf("%d",&co_x);
	if(co_x==0)
	break;
	printf("\nexponent :  ");
	scanf("%d",&ex_x);
	create(co_x,ex_x,*first_2);}
}
void poly_add(void)
{
	node=
}