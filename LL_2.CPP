#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

struct linked_list
{
	int value;
	struct linked_list *next;

}*first,*node,*temp,*head,*behind,*tt,*t,*p,*r,*x,*y;

int len_q=0,i=1,j=1;

void create(void);
void display(void);
void del_beg(void);
void del_end(void);
void create_x(void);
void del_x(void);
void main()
{
	clrscr();
	int ch;
	do
	{
		printf("\nENTER CHOICE...\n1.CREATE\n2.DISPLAY\n3.DELETE AT BEGINING\n4.DELETE AT END\n5.CREATE A NODE AT POSITION 'x'\n6.DELETE A NODE AT POSITION 'x'\n");
		scanf("%d",&ch);

		switch(ch)
		{
	    //if( ch==1)
			case 1:
			create();
			break;

	    //if (ch==2)
			case 2:
			display();
			break;



			case 3:
			if(len_q>2)
			i=1;
			del_beg();
			break;

			case 4:
			node=first;
			if(len_q!=0)
			j=1;
			del_end();
			break;

			case 5:
			create_x();
			break;

			case 6:
			del_x();
			break;


	      }
	}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6);
	getch();
	free(node);free(temp);free(first);free(head);
}

void create(void)
{
	node=(struct linked_list*)malloc(sizeof(struct linked_list));
	printf("\nENTER THE VALUE OF THE NODE\n");
	if(len_q==0)
	{
		first=node;
		temp=node;
		scanf("%d",&node->value);
		node->next=NULL;
		len_q=len_q+1;
		printf("\nNODE CREATED\n");
	}
	else
	{
		scanf("%d",&node->value);
		behind=temp;
		temp->next=node;
		temp=node;
		head=node;
		node->next=NULL;
		len_q=len_q+1;
		printf("\nNODE CREATED\n");


	}

}

void display(void)
{       if(len_q!=0)
      {	node=first;
	while(node->next!=NULL)
	{
		printf("%d -> ",node->value);
		node=node->next;

	}
	printf("%d",node->value);    }
	else
	printf("\nLL TERMINATED\n");
	//printf("\n%d\n",len_q);
}
void del_beg(void)
{
	//int i=1;
	if(i!=0)
	{if((first->next!=head||first->next==head)&&len_q!=0)
	{
	if(first->next==head)
	i=0;
	node=first->next;
	len_q=len_q-1;
	first=node;
	printf("\n");
	while(node!=head)
	{
		printf("%d -> ",node->value);
		node=node->next;

	}
	printf("%d",node->value);return;     }   }
	else
	/*{printf("\nLINKED LIST TERMINATED 1 \n");  len_q=0;
	 free(node);free(first);free(temp);free(head);
	 i=1;j=0;
	 }
	 if(len_q==0)
	 {
	 printf("\nLINKED LIST TERMINATED\n");  len_q=0;
	 free(node);free(first);free(temp);free(head);
	 i=1;   j=0;
	 }  */
	 {
		if(i==0||len_q==0)
		{
			printf("\nLINKED LIST TERMINATED\n");  len_q=0;
			free(node);free(first);free(temp);free(head);
			j=0;

		}



	 }

}

/*void del_end(void)
{       //del_temp=head;

      //	if(len_q!=2||len_q!=1)
	if(len_q==1)
	{
		printf("\nLINKED tt TERMINATED\n");
		free(node);free(first);free(temp);free(head);
		len_q=len_q-1;
		return;

	}
	if(len_q==2)
	{
		free(temp);free(behind);
		free(head);
		printf("\n%d",node->value);
		len_q=len_q-1;return;

	}
	head=behind;
	temp=behind;


	if(first->next!=head||first->next==head)
	{while(node!=head)
	{
		if(node->next==head)
		{behind=node;}
		printf("%d -> ",node->value);
		len_q=len_q-1;
		//if(len_q==2)
		//j=0;
		node=node->next;



	}
	printf("%d",node->value);
} */


void del_end(void)
{       if(j==0)
	{printf("\nLL TERMINATED\n");return; }

	struct linked_list *t,*p;
	t=first->next;
	if(t->next!=NULL&&len_q>2)
	{
	p=head;
	head=behind;
	free(p);
	head->next=NULL;
	while(node->next!=head)
	node=node->next;
	behind=node;
	node=first;
	/*j=1;*/display(); len_q=len_q-1;
	return;
	}
	else
	{
		if(t->next==NULL&&len_q==2)
		{   //    if(j!=0)
		       //free(behind);
		       p=head;
			free(p);
			first->next=NULL;
			head=first;
			//free(head);
			//printf("nulled");
			///printf("\n%d\n",first->value);
			display();
			len_q=len_q-1;
			//first->next=NULL;//j=0;
			return;}

			 else if(len_q==1)/*if(j==0)  */

			{free(head);free(node);free(temp);free(behind);free(first);
			printf("\nLL TERMINATED\n");
			len_q=0;j=0;
			return;      }
	}


}








void create_x(void)
{
	int pos;
	do{printf("\nPLEASE ENTER THE POSITION OF THE NEW NODE\n");
	scanf("%d",&pos); }while(pos<0);
	if(len_q==0)
	{
		if(pos==1)
		{	create();/*len_q will be incremented in create()*/
			return;
		}
		else
		{
			printf("\nABSURD COMMAND\n");
			return;
		}

	}
	else
	{
		if(pos==len_q+1)
		{
			create();
			return;
		}
		if(pos>len_q+1)
		{
			printf("\nABSURD COMMAND\n");
			return;
		}
		if(pos<len_q&&pos!=1)
		{
			int n_t;
			printf("\nENTER NODE VALUE\n");
			scanf("%d",&n_t);
			tt=(struct linked_list*)malloc(sizeof(struct linked_list));
			tt->value=n_t;
			node=first;
			for(n_t=0;n_t<pos-2;n_t++)
			{
				node=node->next;

			}
			tt->next=(node->next);
			node->next=tt;
			len_q=len_q+1;
			printf("\nNODE CREATED\n");
			return;



		}
		if(pos==1)
		{
			int n_t;
			printf("\nENTER NODE VALUE\n");
			scanf("%d",&n_t);
			tt=(struct linked_list*)malloc(sizeof(struct linked_list));
			tt->value=n_t;
			tt->next=first;
			first=tt;
			len_q=len_q+1;printf("\nNODE CREATED\n");
			return;

		}
		if(pos==len_q)
		{
			int n_t;
			printf("\nENTER NODE VALUE\n");
			scanf("%d",&n_t);
			tt=(struct linked_list*)malloc(sizeof(struct linked_list));
			tt->value=n_t;
			node=first;
			while(node->next!=head)
			node=node->next;
			behind=node;
			behind->next=tt;
			tt->next=head;
			len_q=len_q+1;
			printf("\nNODE CREATED\n");


		}



	}



}


void del_x(void)
{       display();
	int pos;
	do{printf("\nPLEASE ENTER THE POSITION OF THE NODE WHICH SHOULD BE DELETED\n");
	scanf("%d",&pos); }while(pos<=0);printf("\n\n%d\n\n",pos);
	if(pos>len_q)
	{
		printf("\nABSURD COMMAND\n");
		return;
	}
	if(pos==len_q)
	{
		node=first;
		if(len_q!=0)
		j=1;
		del_end();
		printf("\n%d\n",len_q);
		return;
	}
	if(pos==1)
	{
		if(len_q>2)
		i=1;
		del_beg();
		printf("\n%d\n",len_q);
		return;
	}
	if(pos<len_q)
	{
		//struct linked_list *t,*p;
		node=first;
		int i;
		for(i=0;i<pos-2;i++)
		{
			node=node->next;
		}
		x=node;
		r=x->next;
		node=first;
		for(i=0;i<pos;i++)
		{
			node=node->next;
		}
		y=node;
		x->next=y;
		free(r);
		node=first;
		while(node->next!=head)
		node=node->next;
		behind=node;
		len_q=len_q-1;
		display();     printf("\n%d\n",len_q);

		return;
	}
	/*else
	{
		printf("\nABSURD COMMAND\n");
		return;
	}  */


}

