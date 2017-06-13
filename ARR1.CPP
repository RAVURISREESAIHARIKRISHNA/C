#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	clrscr();
	 //int x[10];
	 //	int i;
	//int marr[10];
	 //    int*(arr);
       void modify(int arr[]);
	int i;


	modify(arr);

	for(i=0;i<=9;i++)
	{printf("\n%d",arr[i]);}
	getch();}

	void  modify(int a[])
	{
	//int arr[10];
	int i;
	for(i=0;i<=9;i++)
	a[i]=a[i]*10;
	//return(marr[10]);
	}

