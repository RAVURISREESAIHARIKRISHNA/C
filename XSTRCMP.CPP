#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n=0;
	char a[5],b[5];
	for(i=0;i<=4;i++)
	{
	printf("enter %d ch of 1st string",i+1);
	scanf("%s",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	printf("enter %d ch of 2nd string",i+1);
	scanf("%s",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
	if(a[i]!=b[i])
	n++;
	}
	if(n==0)
	printf("\nboth strings are equal");
	else
	printf("\n entered strings are not equal");
	getch();
}