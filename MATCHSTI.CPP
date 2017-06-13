#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int match=21,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,user,player;
	printf("USER:how many match sticks do you want to take ");
	scanf("%d",&a);
	if(a<=4)
	{	match=21-a;
		printf("PLAYER:how many match sticks do you want to take ");
		scanf("%d",&b);
		if(b<=4)
		{
			match=match-b;
			printf("USER:how many match sticks do you want to take ");
			scanf("%d",&c);
			if(c<=4)
			{
			 match=match-c;
			 printf("PLAYER:how many match sticks do you want to take ");
			 scanf("%d",&d);
			 if(d<=4)
			 {
				match=match-d;
				printf("USER:how many match sticks do you want to take ");
				scanf("

			 }
			 else
			 {
			 }


			}
			else
			{printf("\nplease enter a proper number");
			}

		}
		else
		{
		 printf("\nplease enter a proper number");
		}
	}
	else
	{
		printf("please take a proper number of matchsticks");
	}






}