///////**********************DYNAMIC QUEUE************************//////////
////////////////********NUMBERS OF SERVERS: 1*********////////////
////////////////********LENGTH OF QUEUE: UNLIMITED**********////////////
////////////////********PRIORITY QUEUE SERVING************/////////////
/*DOUBLE ENDE Q*///
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

void push_q(void);
void push_end_q(void);
void serve_out_q(void);
void serve_out_end_q(void);
void priority_asc_serve_q(void);
void priority_dec_serve_q(void);
void display_q(void);
int *q,len_q,len_n;
void main()
{
	int i,x;
	clrscr();
	printf("please enter the size of the initial Q\nNOTE:the Q will not have any size limitations\n");
	scanf("%d",&len_q);
	//len_n=len_q;
	q=(int*)malloc(len_q*sizeof(int));
	for(i=0;i<=len_q-1;i++)
	{
		printf("\n enter the %d member\t:\t",i+1);
		scanf("%d",&q[i]);
		printf("\n");
	}

       //	int x;
	do
	{
		printf("\n1.\tPUSH A MEMBER TO THE  Q\n2.\tSERVE THE MEMBER\n3.\tDISPLAY THE Q STATUS\n4.\tASCENDING PRIORITY QUEUE SERVE OUT\n5.\tDESCENDING PRIORITY QUEUE SERVE OUT\n6.DERVE OUT AT THE END\n7.PUSH AT END\nSELECT THE CHOICE\nPRESS ANT OTHER NUMBER TO EXIT\n");

		scanf("%d",&x);

		//if(x==1||x==2||x==3)

	       /*	{    */	switch(x)
			{
				case 1:
				push_q();
				break;

				case 2:
				serve_out_q();
				break;

				case 3:
				display_q();
				break;

				case 4:
				priority_asc_serve_q();
				break;

				case 5:
				priority_dec_serve_q();
				break;
				case 6:
				serve_out_end_q();
				break;
				case 7:
				push_end_q();
				break;

			}
	       //	}
	       //	else
	      //	free(q);
	       //	exit(0);
	}  while(x==1||x==2||x==3||x==4||x==5||x==6||x==7);

	free(q);
	getch();


}

void push_q()
{
	int t;
	printf("\nENTER THE ELEMENT TO PUSH\n");
	scanf("%d",&t);
	if(len_q<len_n)
	{
		q[len_q]=t;
		len_q=len_q+1;
	}
	else
	{

		q=(int*)realloc(q,sizeof(int));
		q[len_q]=t;
		len_q++;
		len_n++;
	}
}

void serve_out_q()
{
	int i,t;

	if(len_q!=0)

	{	t=q[0];
		for(i=0;i<=len_q-2;i++)
		{
			q[i]=q[i+1];

		}
		len_q--;
		printf("\n%d element was served out",t);
	}
	else
	{
		printf("\nILLEGAL COMMAND\nQUEUE IS EMPTY\n");
	}


}
void display_q()
{
	int i;
	printf("\n\n");
	printf("SERVER :   ");
	for(i=0;i<=len_q-1;i++)
	{
		printf("%d      ",q[i]);
	}
}

void priority_asc_serve_q()
{
	int temp,pos,i;
	if(len_q!=0)
       {	temp=q[0];
		pos=0;

		for(i=1;i<=len_q-1;i++)
		{
			if(q[i]<temp)
			{
				temp=q[i];
				pos=i;
			}

		}

		for(i=pos;i<=len_q-2;i++)
		{
			q[i]=q[i+1];

		}
		len_q=len_q-1;
       }
       else
       {
	printf("\nILLEGAL COMMAND\nQUEUE IS EMPTY\n");
       }


}

void priority_dec_serve_q()
{
	int temp,pos,i;
	if(len_q!=0){
	temp=q[0];
	pos=0;

	for(i=1;i<=len_q-1;i++)
	{
		if(q[i]>temp)
		{
			temp=q[i];
			pos=i;
		}

	}

	for(i=pos;i<=len_q-2;i++)
	{
		q[i]=q[i+1];

	}
	len_q=len_q-1; }
	else
	{
		printf("\nILLEGAL COMMAND\nQUEUE is EMPTY\n");
	}

}
void serve_out_end_q(void)
{
	if(len_q>0)
	{
		int *t;t=(int*)malloc(1*sizeof(int));t[0]=q[len_q-1];
		len_q=-1;
		printf("\n%dSERVED OUT",t);free(t);
	}
}
void push_end_q(void)
{


	printf("\nEnter elemnt\n");
	scanf("%d",&q[len_q]);len_q+=1;


}