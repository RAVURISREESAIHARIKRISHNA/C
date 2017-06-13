#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int p=5,n=3,limit,prev=2,present=3;
	printf("enter limit ");
	scanf("%d",&limit);
	while((n<p)&&(p<=limit)&&(n>1))
	{	if(p%n==0)
		{	p++;
			n=2;
			continue;
		}
		else
		{
		//printf("%d ",p);
		if(prev==2)
		{
		printf("\n%d--%d",prev,present);

		}
		prev=present;
		present=p;
		printf("\n%d--%d",prev,present);


		 p++;
		 n=2;
		 continue;
		 }
		 }
		 getch();

}