#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{

	clrscr();
	int *a,i;
	a=(int*)malloc(5*sizeof(int));
	printf("entering elements after MALLOC\n");
	for(i=0;i<=4;i++)
	{
		printf("enter %d element  :  ",i+1);
		scanf("%d",&a[i]);
		printf("\n");
	}
	a=(int*)realloc(a,5*sizeof(int));
	printf("\nentering elements after ALLOC");
	for(i=5;i<=9;i++)
	{
		printf("\nenter %d element  :   ",i+1);
		scanf("%d",&a[i]);
	}
	printf("the array is\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}