#include<stdio.h>
#include<conio.h>
void main()
{

	clrscr();
	int x,n;
	printf("let x and n be any two positive intigers and x is raised to the power of n");
	printf("\nplease enter a value for x");
	scanf("%d",&x);

	printf("\nplease enter a value for n");
	scanf("%d",&n);

	while(n>=1)
		{
			x=x*x;
			n=n-2;

		}
		printf("\nthe required value is %d",x);
		getch();

}