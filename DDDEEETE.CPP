#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3];
int i,n,det;
for(i=0;i<=2;i++)
{
for(n=0;n<=2;n++)
{
printf("enter %dx%d element",i+1,n+1);
scanf("%d",&a[i][n]);
}
}
det=(a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+(a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
printf("\ndeterminat=%d",det);
getch();
}