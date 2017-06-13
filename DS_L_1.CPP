#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<iostream.h>
int binary_search(int*,int,int);
void bubble_sort(int*,int);
void main()
{
	clrscr();
	int n,root,*a;
	printf("ENTER THE SIZE OF THE ARRAY");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter a[%d] element= ",i+1);
		scanf("%d",&a[i]);

	}
	bubble_sort(a,n);
	printf("\nEnter the element to find by binary search\n");
	scanf("%d",&root);
	root=binary_search(a,n,root);
	if(root!=-1)
	printf("\npos=%d",root+1);
	else
	printf("\nELEMENT NOT FOUND");
	getch();

}

void bubble_sort(int *a,int n)
{
	int i,j,t;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}


}
int binary_search(int *a,int n,int root)
{
	int start=0,end=n-1,key=(start+end)/2;
	while(start<=end)
	{
		if(root==a[key])
		{
			return(key);
			break;
		}
		if(root<a[key])
		{
			end=key-1;

		}
		if(root>a[key])
		{
			start=key+1;
		}
		key=(start+end)/2;
	}
	if(start>end)
	{return(-1);}
}