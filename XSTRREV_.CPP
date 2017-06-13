#include<stdio.h>
#include<conio.h>
#include<string.h>
int len=0,i,j;
char a[100],b;
void xstrrev(char[],int,int);
void  main()
{
	//int x=0,i,j;
       //	char a[100],b;
	clrscr();
	printf("enter a string whoose length is not more than 100 characters :\n");
	gets(a);
	for(i=0;i<=100;i++)
	{
	 if(a[i]!='\0')
	 {
	 len++;
	 }
	 if(a[i]=='\0')
	 break;
	}
//	printf("\n%d\n",len);
	j=len-1;

	i=0;

	xstrrev(a,i,j);

    /*	while(i<j)
	{
	b=a[i];
	a[i]=a[j];
	a[j]=b;
	i++;
	j--;

	}    */
	printf ("\nthe reverse of the entered string is :\n");
	puts(a);
	//strrev(a) ;
	//puts(a);

	getch();
}

void xstrrev(char[],int,int)
{       i=0;j=len-1;
	while(i<j)
	{
		b=a[i];
		a[i]=a[j];
		a[j]=b;
		i++;
		j--;
	}
}