#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,n,len_a=0,len_b=0;
char a[50],b[100];

void xstradd(char[],char[],int,int);
void main()
{

	clrscr();
	printf("enter string a whoose dimension is not more than 50 :\n");
	gets(a);
	printf("\nenter string b whoose dimension is not more than 50 :\n");
	gets(b);
	for(i=0;i<=49;i++)
	{
	if(a[i]!='\0')
	len_a++;
	if(a[i]=='\0')
	break;
	}
	for(i=0;i<=49;i++)
	{
	if(b[i]!='\0')
	len_b++;
	if(b[i]=='\0')
	break;
	}

	xstradd(a,b,len_a,len_b);

	/*for(i=0;i<=len_a-1;i++)
	{
	b[len_b+i]=a[i];
	}
	b[len_b+i]='\0'; */
	printf("\nafter adding string a to string b , final string is :\n");
	puts(b);
	getch();
}
void xstradd(char[],char[],int,int)
{
	for(i=0;i<=len_a-1;i++)
	{
	b[len_b+i]=a[i];
	}
	b[len_b+i]='\0';
}