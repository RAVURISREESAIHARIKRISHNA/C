#include<stdio.h>
#include<conio.h>
#define SMALL(c)

 (\
	if((c >= 97) && (c <= 122))\
		printf("it is small");\


 )


void main()
{
	clrscr();
	char c;
	int x;
	//int a;
       //	for(a=97;a<=123;a++)
	//{printf("\n%c",a);}
	//getch();
	printf("\nplease enter a character");
	scanf("%c",&c);
	x=c;
//	'//void SMALL(char c);
      SMALL(c);
	getch();

}