//#include<stdafx.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//using namespace std;

void QuickSort(int*,int,int);
int Partition(int*,int,int);

void main()
{
  //	system("cls");
	clrscr();
	int *a,size;
	cout<<"Enter the Size of the List : ";
	cin>>size;
	a=(int*)malloc(size*sizeof(int));
	for(int i=0;i<=size-1;i++)
	{
		cout<<endl<<"Enter "<<i+1<<"th Element";
		cin>>a[i];
	}
	cout<<"\nThe Entered elements are:\n";
	for(int j=0;j<=size-1;j++)
		cout<<a[j]<<" ";
	QuickSort(a,0,size-1);
	cout<<endl<<"The sorted List is:\n";
	for(i=0;i<=size-1;i++)
		cout<<a[i]<<" ";
	/*int a[9];
	for(int i=0;i<=8;i++)
		cin>>a[i];
	QuickSort(a,0,8);
	cout<<"\n\nSorted:\n\n";
	for(int i=0;i<=8;i++)
		cout<<a[i];*/
	getch();
}

void QuickSort(int *a,int start,int end)
{
	if(start<end)
	{
		int PIndex;
		PIndex=Partition(a,start,end);
		QuickSort(a,start,PIndex-1);
		QuickSort(a,PIndex+1,end);
	}
}

int Partition(int *a,int start,int end)
{
	int Pindex,i,t;
	Pindex=start;
	int pivot=a[end];
	for(i=start;i<=end-1;i++)
	{
		if(a[i]<=pivot)
		{
			//int t;
			t=a[i];
			a[i]=a[Pindex];
			a[Pindex]=t;
			Pindex++;
		}
	}
	t=a[Pindex];
	a[Pindex]=a[end];
	a[end]=a[Pindex];
	return (Pindex);
}