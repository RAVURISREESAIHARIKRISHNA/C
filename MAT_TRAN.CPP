#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],i,j,x,n;
	clrscr();
	printf("enter the order of the square matrix : ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
	for(j=0;j<=n-1;j++)
	{printf("\nenter %dx%d element",i+1,j+1);
	scanf("%d",&a[i][j]);}

	}
	for(i=0;i<=n-1;i++)
	{
	for(j=0;j<=i-1;j++)
	{
	x=a[i][j];
	a[i][j]=a[j][i];
	a[j][i]=x;
	}

	}
	printf("\n the transpose of the entered matrix is : \n");

	for(i=0;i<=n-1;i++)
	{
	for(j=0;j<=n-1;j++)
	{
	printf("%d",a[i][j]);
	printf("\t");
	}
	printf("\n");
	}
	getch();
}