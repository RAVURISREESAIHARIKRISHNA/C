#include<stdio.h>
#include<conio.h>
#include<string.h>
void xstrcpy(char[],char[]);
int i;
char a[12],b[12];
void main()
{
	clrscr();
	printf("enter a string of length not more than 12 characters :\n");
	gets(a);
	xstrcpy(a,b);
	printf("\nthe other string after copying is:\n");
	puts(b);
	getch();


}
void xstrcpy(char[],char[])
{
	for(i=0;i<=11;i++)
	{
	b[i]=a[i];
	}
	b[i]='\0';
}