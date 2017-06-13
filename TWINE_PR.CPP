#include<stdio.h>
#include <conio.h>


void main()

{
clrscr();
int i=1,j=3;
int prev=2 ,present=3,limit;
printf("enter limit");scanf("%d",&limit);
clrscr();
//printf("%d",i);
while(j<limit)
{
	i=2;
	while(i<j)
		{
		 if (j%i==0)
		 {

		 break;
		 }
		 i++;
		}
	      if(i==j)
	       { //prev=present;
	       //	present=j;
	       if((prev==2)&&(present==3))
	       {
		printf("\n%d--%d",prev,present);
		prev=3;
		}
		if (j>=5)
		{
		prev=present;
		present=j;
		printf("\n%d--%d",prev,present);
		}
	       //printf("  %d",j);
	       }

  j++;
}
  getch();



}

