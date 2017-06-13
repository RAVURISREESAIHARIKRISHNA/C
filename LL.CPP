#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

struct linked_list
{
	int value;

	struct linked_list *next;

}*node,*temp,*first,*head;
/*void create(void);
void display(void);*/
int len_q,len_n;
void main()
{
	clrscr();
	int ch;
	int i;
	/*printf("enter basic value\n");
	scanf("%d",&len_n); */
	len_n=2;
	len_q=len_n;


	node=(struct linked_list*)malloc(len_n*sizeof(struct linked_list));


	first=node;

	for(i=0;i<=len_q-1;i++)
	{
		printf("\nenter%d value\n",i+1);
		scanf("%d",&node->value);
		if(i<len_q)
		node->next=(node+1);
		else
		node->next=NULL;
		node++;




	}

	node=first;

	for(i=0;i<=len_q-1;i++)
	{
		printf("%d\n",node->value);
		node++;
	}

	node=first;

	printf("\n\n%d",*(node->next));

     /*	do
	{
		printf("\n1.create\t2.dipplay\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case(1):
			create();
			break;
			case(2):
			display();
			break;
		}
	}while(ch==1||ch==2);
				 */
       // free(node);free(first);
	getch();
}

/*void create(void)
{



} */