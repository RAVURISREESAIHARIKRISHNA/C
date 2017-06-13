#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct linked_list
{
	int n,e;
	struct linked_list*next;
}*node,*first_1;
void poly_create(struct linked_list *first,int len_q)
{
	struct linked_list *temp;
	int h;
	while(1)
	{	printf("\n\n\nenter coefficient:  ");
		scanf("%d",&h);
		if(h==0)
		break;
		if(len_q==0)
		{
			node=(struct linked_list*)malloc(sizeof(struct linked_list));
			first=node;
			temp=node;
			node->n=h;
			printf("\nenter exponent:  ");
			scanf("%d",&node->e);
			node->next=NULL;
			len_q+=1;
		}
		if(len_q!=0)
		{
			node=(struct linked_list*)malloc(sizeof(struct linked_list));
			temp->next=node;
			temp=node;
			node->n=h;
			prinf("\nenter exponent:  ");
			scanf("%d",&node->e);
			node->next=NULL;
			len_q+=1;
		}

	}



}

