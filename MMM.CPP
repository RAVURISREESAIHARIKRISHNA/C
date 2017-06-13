#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num_match=21,x,y;
	printf("\nplease read the instructions carefully before playing this game\nNOW THE GAME STARTS");
	while(num_match>1)
	{
		while(num_match>1)
	       {	printf("\n\nUSER:please enter the number of matchsticks you want to choose ");
			scanf("%d",&x);
			if(x<=4)
			{break;}
	      }
			y=5-x;
			num_match=num_match-(x+y);
			printf("\nWINDOWS:i choose %d number of matchsticks",y);
	 }
	 printf("\nOH! YOU LOST THE GAME.WINDOWS WINS");
	 getch();
}