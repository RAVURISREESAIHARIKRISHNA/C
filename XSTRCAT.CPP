#include<stdio.h>
#include<conio.h>
void main()
{
       /*	clrscr();
	clrscr();
	clrscr(); */
	clrscr();
	int i=0;
	char a[5],b[5],c[10];
	for(i=0;i<=4;i++)
	{
	//getch();
	printf("\n enter %d character",i+1);
	//printf("\n\n\n");
	scanf("%s",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	printf("enter %d character of 2nd string ",i+1);
	scanf("%s",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
	c[i]=a[i];
	}
	for(i=0;i<=4;i++)
	{
	c[5+i]=b[i];
	}
	printf("\n");
	for(i=0;i<=9;i++)
	{printf("%c",c[i]);}
	getch();
}