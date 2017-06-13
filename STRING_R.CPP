#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char q[6]/*,w[4],e[4],r[4]*/;    /*let it be n*/
	printf("enter a string	");
	gets(q);
	int i,x;char n;
	printf("\n");
	printf("%s	",q);
	for(x=1;x<=5;x++)                        /*  x<=n-1*/
	{
	for(i=0;i<=4;i++)                        /*   i<=n-2*/
	{
	n=q[i];
	q[i]=q[i+1];
	q[i+1]=n;
	}
	printf("%s	",q);  }
	getch();
}