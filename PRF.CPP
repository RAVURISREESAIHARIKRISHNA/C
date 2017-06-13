#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,x=2,a;
	printf("please enter a number for which prime factors should be found");
	scanf("%d",&n);
	int prime(int x);
	//printf("%d",n);
	while(x<=n)
	{
		if(n%x==0)
		{
		a=0;
		a=prime(x);
		if(a==1)
			{
				printf("%d",x);
				printf(",");
				n=n/x;
				printf("%d",n);
				x=1;
			}

		}
		 x++;


		}

	getch();
}
int prime(int y)
{
int i=2,value;
printf("function called \n");

	while(i<=y)
		{
		 if (y%i==0)
		 {

		 break;
		 }


	     i++;
	      if(i==y)
	      {
	       value=1;
	       }
	      else
	      value=0;




}
return (value);
}