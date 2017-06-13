#include<stdio.h>
#include<conio.h>
#include<string.h>
void substring(char[],char[],int,int);
int c,i,n;
char a[12],a_sub[12];
void main()
{

	clrscr();
	printf("enter a string of length not more than 12 characters :\n");
	gets(a);
	printf("\nnow enter position and length from where substring should be made ");
	scanf("%d,%d",&i,&n);        /*i means position & n means length*/
	substring(a,a_sub,i,n);

	printf("\nyour required substring is :\n");
	puts(a_sub);
	getch();

}
void substring(char[],char[],int,int)
{


for(c=0;c<=n-1;c++)
{
a_sub[c]=a[i+c-1];
}
a_sub[c]='\0';



}