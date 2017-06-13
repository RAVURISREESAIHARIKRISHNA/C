#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int **a,m,n;
void intake(void);
void output(void);
void main()
{
	clrscr();
	intake();
	output();
	getch();
	free(a);
}
void intake(void)
{       int i,j;
	cout<<"enter m and n";
	cin>>m>>n;
	*a=(int*)malloc(m*sizeof(int*));
	for(i=0;i<=m-1;i++)
	a[i]=(int*)malloc(n*sizeof(int));
	//int i,j;
	for(i=0;i<=m-1;i++)
	for(j=0;j<=n-1;j++)
	{
		cout<<"\nenter a["<<i+1<<"]["<<j+1<<"] element =";
		cin>>a[i][j];
	}
}
void output(void)
{
	int i,j;
	cout<<"the matrix is\n";
	for(i=0;i<=m-1;i++)
	{for(j=0;j<=n-1;j++)
	{cout<<a[i][j]<<"\t";}
	cout<<"\n";}
}