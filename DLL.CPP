#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

struct doubl_linked_list
{
	struct doubl_linked_list *prev;
	int value;
	struct doubl_linked_list *next;
}*head,*first,*node,*temp;


void create(void);
void display(void);
void display_rev(void);
void del_beg(void);
void del_end(void);
void create_x(void);
void del_x(void);


int len_q=0;
void main()
{
	clrscr();
	int ch;
	do
	{
		printf("ENTER CHOICE\n1.CREATE\n2.DISPLAY\n3.DISPLAY IN REVERSE ORDER\n4.DELETE AT BEGINNING IN ORIGINAL DDL\n5.DELETE AT END IN ORIGINAL DDL\n6.CREATE A NODE AT POSITION 'x' IN THE ORIGNAL DDL\n");
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
			display_rev();
			break;

			case 4:
			del_beg();
			break;

			case 5:
			del_end();
			break;

			case 6:
			create_x();
			break;
		}

	}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6);
	getch();
	free(head);free(node);free(first);
}
////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
void create(void)
{
	if(len_q==0)
	{
		node=(struct doubl_linked_list*)malloc(1*sizeof(struct doubl_linked_list));
		first=node;
		head=node;
		node->prev=NULL;
		node->next=NULL;
		printf("\nenter node value\n");
		scanf("%d",&node->value);
		printf("\nNODE CREATED!\n");
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
		printf("\nenter node value\n");
		scanf("%d",&node->value);
		printf("\nNODE CREATED!\n");
		len_q=len_q+1;
		return;


	}
}
///////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
void display(void)
{       if(len_q>0)
	{node=first;
	while(node->next!=NULL)
	{
		printf("%d",node->value);
		printf("<->");
		node=node->next;
	}
	printf("%d",node->value);
	printf("\n\n");
	return;      }
	else
	{
		printf("\nNO DLL TO DISPLAY\n");
		return;
	}
}
//////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
void display_rev(void)
{
	if(len_q>0)
	{
		node=head;
		while(node->prev!=NULL)
		{
			printf("%d",node->value);
			printf("<->");
			node=node->prev;
		}
		printf("%d\n\n",node->value);
		return;
	}
	else
	{
		printf("\nNO DDL TO DISPLAY\n");
		return;
	}

}
///////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
void del_beg(void)
{
	if(len_q>0)
	{node=first;
	first=node->next;
	free(node);
	first->prev=NULL;
	len_q=len_q-1;
	printf("\nDELETED !\n");
	return;  }
	else
	{
		printf("\nDDL TERMINATED!\n\n");
		return;
	}
}
////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
void del_end(void)
{
	if(len_q>0)
	{node=head;
	head=node->prev;
	head->next=NULL;
	free(node);
	len_q=len_q-1;
	printf("\nDELETED !\n");
	return;}
	else
	{
		printf("\nDDL TERMINATED!\n\n");
		return;
	}
}
////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
void create_x(void)
{
	int pos;
	do
	{printf("\nENTER THE POSITION WHERE A NEW NODE SHOULD BE CREATED IN THE ORIGINAL DDL\n");
	scanf("%d",&pos);}while(pos<0);
	if(pos==1)
	{
		node=(struct doubl_linked_list*)malloc(sizeof(struct doubl_linked_list));
		node->prev=NULL;
		node->next=first;
		first->prev=node;
		first=node;
		printf("\nENTER NODE VALUE\n");
		scanf("%d",&node->value);
		printf("\nNODE CREATED!\n");
		len_q=len_q+1;
		return;

	}
	if(pos==len_q+1)
	{
		node=(struct doubl_linked_list*)malloc(1*sizeof(struct doubl_linked_list));
		node->prev=head;
		head->next=node;
		head=node;
		node->next=NULL;
		printf("\nenter node value\n");
		scanf("%d",&node->value);
		printf("\nNODE CREATED!\n");
		len_q=len_q+1;
		return;

	}
	if(pos>1&&pos<len_q)
	{
		node=(struct doubl_linked_list*)malloc(sizeof(struct doubl_linked_list));
		temp=first;
		int i;
		for(i=0;i<pos-2;i++)
		{
			temp=temp->next;
		}
		node->prev=temp;
		node->next=temp->next;
		temp->next=node;
		(node->next)->prev=node;
		printf("\nENTER NODE VALUE\n");
		scanf("%d",&node->value);
		printf("\nNODE CREATED!\n");
		len_q=len_q+1;
		return;
	}
	if(pos==len_q)
	{
		node=(struct doubl_linked_list*)malloc(sizeof(struct doubl_linked_list));
		node->next=head;
		node->prev=head->prev;
		(head->prev)->next=node;
		head->prev=node;
		printf("\nENTER NODE VALUE\n");
		scanf("%d",&node->value);
		printf("\nNODE CREATED!\n");
		len_q=len_q+1;
		return;

	}
	if(pos>len_q+1)
	{
		printf("\nABSURD COMMAND\n");
		return;
	}
}
////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
void del_x(void)
{
	int pos;
	do{
	printf("\nENTER POSITION WHERE THE CORRESPONDING NODE SHOULD BE DELETED IN THE ORIGINAL DDL\n");
	scanf("%d",&pos);}while(pos<0);
	if(pos==1&&len_q>0)
	{
		temp=first->next;
		temp->prev=NULL;
		first=temp;
		free(temp);
		len_q=len_q-1;
		printf("\nDELETED!");
		return;

	}
	if(pos==len_q&&len_q>0)
	{
		temp=head->prev;
		temp->next=NULL;
		head=temp;
		free(temp);
		len_q=len_q-1;
		printf("\nDELETED!\n");
		return;
	}
	if(pos>1&&pos<len_q&&len_q>0)
	{
		temp=first;
		int i;
		for(i=0;i<pos-2;i++)  /*[][][][] [temp]  [Target]  [][][]*/
		{
			temp=temp->next;
		}


	}


} //Function brace