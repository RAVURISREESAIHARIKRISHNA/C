#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct doubl_linked_list
{
	struct doubl_linked_list *prev;
	int value;
	struct doubl_linked_list *next;
}*head,*first,*node,*temp;

int len_q=0;
void push(void);
void pop(void);
void display(void);
void is_empty(void);

void main()
{
	clrscr();
	int ch;
	do{
	printf("\nEnter choice\n1.PUSH\n2.POP\n3.DISPLAY\n4.IS EMPTY ?\nANY OTHER TO EXIT\n");
	scanf("%d",&ch);
	switch(ch)
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
		break; }
	}while(ch>=1&&ch<=4);
}

void push(void)
{
	if(len_q==0)
	{
		node=(struct doubl_linked_list*)malloc(1*sizeof(struct doubl_linked_list));
		first=node;
		head=node;
		node->prev=NULL;
		node->next=NULL;
		printf("\nenter  value\n");
		scanf("%d",&node->value);printf("\nenetered value=%d",node->value);
		//printf("\nNODE CREATED!\n");
		len_q=len_q+1;
		return;

	}
	else
	{
		node=(struct doubl_linked_list*)malloc(1*sizeof(struct doubl_linked_list));
		node->prev=head;
		head->next=node;
		head=node;
		node->next=NULL;
		printf("\nenter  value\n");
		scanf("%d",&node->value);printf("\nentered=%d",node->value);
		//printf("\nNODE CREATED!\n");
		len_q=len_q+1;
		return;


	}
}
void display(void)
{       if(len_q>0)
	{
	printf("\nSTACK IS:\n");
	node=first;
	while(node->next!=NULL)
	{
		printf("%d\n",node->value);
		node=node->next;
	}

	printf("%d",node->value);
	printf("\n\n");
	return;      }
	else
	{
		printf("\nNO STACK TO DISPLAY\n");
		return;
	}
}


void pop(void)
{
	if(len_q>0)
	{node=head;
	head=node->prev;
	head->next=NULL;
	free(node);
	len_q=len_q-1;
	//printf("\nDELETED !\n");
	return;}
	else
	{
		printf("\nSTACK TERMINATED!\n\n");
		return;
	}
}
void is_empty(void)
{
	if(len_q==0)
	{
		printf("\nEMPTY\n");return;
	}
	else
	printf("\nNOT EMPTY\n");return;
}