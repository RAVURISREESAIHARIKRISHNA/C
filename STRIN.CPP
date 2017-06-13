#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char arr[]="hari";
	//char *p;
	int xstrlen(char*p);
	int x=xstrlen(arr);
	printf("%d",x);
	getch();

}
int xtrlen(char arr[])
{
      // char arr[];
	int len;
	while(*arr!='\0')
	{
	len++;
	arr++;
	}
	return(len);
}






