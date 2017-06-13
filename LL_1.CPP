#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<alloc.h>

struct linked_list
{
	int value;

	struct linked_list *next;

}*node,*first;

int len_n,len_q;

void create(void);
void display(void);
void create_at_pos_x(int);
void del_at_pos_x(void);


void main()
{
	clrscr();
	int ch;
	len_n=1;
	len_q=0;
	int pos;
	node=(struct linked_list*)malloc(len_n*sizeof(struct linked_list));
	first=node;
	do
	{
		printf("\n1.CREATE\n2.DISPLAY\n3.CREATE AT BEGINING\n4.CREATE AT END\n5.CREATE AT POSITION  'x'\n6.DELETE AT BEGINING\n7.DELETE AT END\n8.DELETE AT POSITION 'x'\n7");
		scanf("%d",&ch);
		switch(ch)
		{

			case 1:
			create();
			break;

			case 2:
			display();
			break;

			case 3:
			create_at_pos_x(0);
			break;

			case 4:
			create();
			break;

			case 5:
			printf("\nENTER POSITION\n");
			scanf("%d",&pos);
			create_at_pos_x(pos);
			break;



		}
	}while(ch>=1&&ch<=8);

	getch();

}

void create(void)
{
	//int a;
	if(len_q==0)
	{
		printf("\nENTER NODE VALUE\n");
		node=first;
		scanf("%d",&node->value);
		printf("\n%d NODE VALUE ",node->value);
		node->next=NULL;
		printf("CREATED");
		len_q=len_q+1;

	}

	else
	{
		node=first;
		node=(struct linked_list*)realloc(node,1);
		len_n=len_n+1;
		node=first;
		printf("\nENTER NODE VALUE\n");
		node=node+len_q;
		scanf("%d",&node->value);
		printf("\n%d NODE VALUE ",node->value);
		(node-1)->next=node;
		node->next=NULL;
		printf("CREATED");
		len_q=len_q+1;


	}


}

void display(void)
{

	node=first;
	int i;
	printf("\nLL  :  ");
	for(i=0;i<=len_q-1;i++)
	{
		printf("%d\t",node->value);
		node=node+1;
	}

}



void create_at_pos_x(int x)
{       int i;
	if(x==0)
	{

		if(len_q==len_n)
		{
			node=first;
			node=(struct linked_list*)realloc(node,1);
			len_n=len_n+1;
			node=first+len_q-1;
			for(i=0;i<=len_q-1;i++)
			{
				*(node+1)=*(node);
				if(node!=first)
				node=node-1;
			}
			printf("\nENTER NODE VALUE\n");
			node=first;
			scanf("%d",&node->value);
			printf("\n%d NODE VALUE ",node->value);
			node->next=(node+1);
			printf("CREATED");
			len_q=len_q+1;



		}


	}

}