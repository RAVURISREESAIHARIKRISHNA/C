#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct linked_list
{
	int value;
	struct linked_list*next;
}*node,*first,*head                               ;
int len_q=0;
void create(void);
void display(void);
void create_x(void);
void del_x(void);
void main()
{
	clrscr();
	int x;
	do
	{
		printf("\n\n1.create\n2.display\n3.create@x\n4.delete@x\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
			create();
			break;

			case 2:
			display();
			break;

			case 3:
			create_x();
			break;

			case 4:
			del_x();
			break;
		}
	}while(x>=1&&x<=4);
}

void create(void)
{
	if(len_q==0)
	{
		node=(struct linked_list*)malloc(sizeof(struct linked_list));
		first=node;
		head=node;
		scanf("%d",&node->value);
		node->next=NULL;
		len_q+=1;
		return;

	}
	else
	{
		node=(struct linked_list*)malloc(sizeof(struct linked_list));
		head->next=node;
		head=node;
		node->next=NULL;
		scanf("%d",&node->value);
		len_q+=1;
		return;

	}
}

void display(void)
{
	if(len_q>0)
	{
		node=first;
		while(node->next!=NULL)
		{
			printf("%d->",node->value);
			node=node->next;
		}
		printf("%d",node->value);
		return;
	}
	if(len_q==0)
	{
		printf("LL is empty");
		return;
	}

}

void create_x(void)
{
	int pos;
	printf("\nenter position :  ");
	scanf("%d",&pos);
	if(pos>=1&&pos<=len_q+1)
	{

		if(pos==len_q+1)
		{
			create();
			return;
		}
		if(pos==1)
		{
			node=(struct linked_list*)malloc(sizeof(struct linked_list));
			node->next=first;
			first=node;
			scanf("%d",&node->value);
			len_q+=1;
			return;
		}

		if(pos>1&&pos<=len_q-1)
		{
			struct linked_list *p,*n;
			int i;
			node=first;
			for(i=1;i<=pos-2;i++)
			{
				node=node->next;
			}
			p=node;
			node=first;
			for(i=0;i<=pos;i++)
			{
				node=node->next;
			}
			n=node;
			node=(struct linked_list*)malloc(sizeof(struct linked_list));
			scanf("%d",&node->value);
			p->next=node;
			node->next=n;
			len_q+=1;
			return;
		}
		if(pos==len_q)
		{
			struct linked_list *temp,*b;
			int i;
			node=(struct linked_list*)malloc(sizeof(struct linked_list));
			scanf("%d",&node->value);
			temp=first;
			for(i=0;i<=len_q-2;i++)
			{
				temp=temp->next;
			}
			b=temp;
			b->next=node;
			node->next=head;
			len_q+=1;
			return;
		}
	}
	else
	{
		printf("\nILLEGAL COMMAND\n");return;
	}
}

void del_x(void)
{
	int pos;
	printf("\nnenter pos : ");
	scanf("%d",&pos);
	if(pos>=1&&pos<=len_q)
	{

	     /*	if(pos==len_q+1)
		{
			create();
			return;
		}      */
		if(pos==1)
		{
			node=first;
			first=first->next;
			free(node);
			len_q=len_q-1;
			return;
		}

		if(pos>1&&pos<=len_q-1)
		{
			struct linked_list *p,*n;
			int i;
			node=first;
			for(i=1;i<=pos-2;i++)
			{
				node=node->next;
			}
			p=node;
			node=first;
			for(i=0;i<=pos;i++)
			{
				node=node->next;
			}
			n=node;
			//node=(struct linked_list*)malloc(sizeof(struct linked_list));
			//scanf("%d",&node->value);
			node=p->next;
			free(n);
			p->next=n;

			//node->next=n;
			len_q=len_q-1;
			return;
		}
		if(pos==len_q)
		{
			struct linked_list *temp,*b;
			int i;
			node=(struct linked_list*)malloc(sizeof(struct linked_list));
			scanf("%d",&node->value);
			temp=first;
			for(i=0;i<=len_q-2;i++)
			{
				temp=temp->next;
			}
			b=temp;
			b->next=NULL;
			free(head);
			head=b;

			len_q=len_q-1;
			return;
		}
	}
	else
	{
		printf("\nILLEGAL COMMAND\n");return;
	}

}