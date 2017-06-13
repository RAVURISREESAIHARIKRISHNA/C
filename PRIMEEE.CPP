#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int p=2,n=1;
	for(p=2;p<n;p++)
	{if(p%n==0)
		{//n++;
		continue;
		}
	else
		{printf("%d",p);
		}
	}
	getch();
}