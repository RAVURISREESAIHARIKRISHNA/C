#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,j,a=1;
	for(i=3;i>=1;i--)
	{
	for(n=1;n<a;n++)
	printf(" ");
	a++;
	for(j=1;j<=i;j++)
	printf("*");
	printf("\n");

	}getch();
}