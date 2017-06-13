#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char x;
	int a;

      printf("press any key to start producing random numbers");getch();
      for(a=1;a<=9;a++)
      {printf("\n%d\n%d\n%d\n%d\n%d",3*a,8*a-1,10*a+2,5*a-1,9*a);
	printf("\npress 'e' to stop producing random numbers");
	printf(" in all other cases it continues to produce next set of random numbers  :  ");
	scanf("%c",&x);
	if(x=='e')
	break;
	//printf("\npress any key for printing next set of random numbers");
	//getch();
	clrscr();
	if(a==9)
	a=0;
	}
	getch();}