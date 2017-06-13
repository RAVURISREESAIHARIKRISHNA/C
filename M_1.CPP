#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,j;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=3-i;j++)
	{
	printf(" ");
	}
	for(n=1;n<=i;n++)
	{printf("*");  }
	printf("\n");
	}   getch();}