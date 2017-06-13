#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void quicksort(int*,int,int);
int partion(int*,int,int);
void main()
{
	clrscr();
	printf("enter size of the array\n");
	int i,size,*a;
	scanf("%d",&size);
	a=(int*)malloc(size*sizeof(int));
	for(i=0;i<=size-1;i++)
	{
		printf("\nenter a[%d] element : ",i+1);
		scanf("%d",&a[i]);
	}
	quicksort(a,0,size-1);
	printf("\nSORTED ARRAY IS:\n");
	for(i=0;i<=size-1;i++)
	printf("%d  ",a[i]);
	getch();

}
void quicksort(int*a,int start,int end)
{
	int p_index;
	if(start<end)
	{
		p_index=partion(a,0,end);
		quicksort(a,0,p_index-1);
		quicksort(a,p_index+1,end);
	}
}
int partion(int*a,int start,int end)
{
	int pivot,p_index,i,t;
	pivot=a[end];
	p_index=start;
	for(i=0;i<=end-1;i++)
	{
		if(a[i]<=pivot)
		{
			t=a[i];
			a[i]=a[p_index];
			a[p_index]=t;
			p_index++;
		}
	}
	t=a[p_index];
	a[p_index]=a[end];
	a[end]=t;
	return(p_index);

}