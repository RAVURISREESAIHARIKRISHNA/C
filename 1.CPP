#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int p=3,n=2;
	for(p=3;n<p;p++)
	{	if(p%n==0)
		{
			n++;
			continue;
		}
		if(p%n!=0)
		{
			printf("oo");
		}
	}
		getch();
}