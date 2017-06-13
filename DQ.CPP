#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct dq
{
	int data;
	struct dq*prev;
	struct dq*next;
}*head=NULL,*tail=NULL,*node;
void display();
void insert_beg()
{
	if(head==NULL&&tail==NULL)
	{
		node=(struct dq*)malloc(sizeof(struct dq));
		printf("\nEnter Value:\n");
		scanf("%d",&node->data);
		head=node;
		tail=node;
		node->prev=NULL;
		node->next=NULL;
		printf("\n%d Entered\n",tail->data);
		display();
		return;
	}
	node=(struct dq*)malloc(sizeof(struct dq));
	printf("\nEnter Value:\n");
	scanf("%d",&node->data);
	node->next=head;
	head->prev=node;
	node->prev=NULL;
	printf("\n%d Entered\n",head->data);
	head=node;
	display();
}
void insert_end()
{
	if(head==NULL&&tail==NULL)
	{
		node=(struct dq*)malloc(sizeof(struct dq));
		printf("\nEnter Value:\n");
		scanf("%d",&node->data);
		head=node;
		tail=node;
		node->prev=NULL;
		node->next=NULL;
		printf("\n%d Entered\n",head->data);
		return;
	}
	node=(struct dq*)malloc(sizeof(struct dq));
	printf("\nEnter value:\n");
	scanf("%d",&node->data);
	tail->next=node;
	node->prev=tail;
	node->next=NULL;
	tail=node;
	printf("\n%d Entered\n",tail->data);
	display();
}
void del_beg()
{
	if(head==NULL)
	{
		printf("\nNO DQ\n");
		return;
	}
	struct dq*a;
	a=head;
	head=head->next;
	a->next=NULL;
	head->prev=NULL;
	printf("\n%d deleted\n",a->data);
	free(a);
	a=NULL;
}
void del_end()
{
	if(tail==NULL)
	{
		printf("\nNO DQ\n");
		return;
	}
	struct dq*a;
	a=tail;
	tail=tail->prev;
	a->prev=NULL;
	tail->next=NULL;
	printf("\b%d deleted\n",a->data);
	free(a);
	a=NULL;
}
void display()
{
	if(head==NULL||tail==NULL)
	{
		printf("\nDQ is empty\n");
		return;
	}
	struct dq*b;
	b=head;
	printf("\n\n");
	while(b->next!=tail)
	{
		printf("%d\t",b->data);
		b=b->next;
	}
//	if(b==tail)
	printf("%d",tail->data);
}
void main()
{
	clrscr();
	int ch;
	while(1)
	{
		printf("\n\n1.Insert bg\n2.insert end\n3.del bg\n4.del end\n5.display\n6.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert_beg();
			break;
			case 2:
			insert_end();
			break;
			case 3:
			del_beg();
			break;
			case 4:
			del_end();
			break;
			case 5:
			display();
			break;
			case 6:
			exit(0);
		}
	}
}