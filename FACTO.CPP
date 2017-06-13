#include<stdio.h>
#include<conio.h>


void main ()

{
	int n,f=1;
	printf("\n enter the number");
	scanf("%d",&n);

	while(n>=2)
	{	f=f*n*(n-1);
		n=n-2;
	}
	printf("%d",f);

	getch();





}