#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i=10,j=10,n=10;
printf("enter i,j");
scanf("%d,%d",&i,&j);
char a[10];
char b[10];
char c[21];
for(n=0;n<=i-1;n++)
{
c[n]=a[n];}
for(n=0;n<=j-1;n++)
{c[i+n+1]=b[n];}
printf("\n");
for(n=0;n<=(i+j)-1;n++)
{
printf("%c ",c[n]);}
getch();     }