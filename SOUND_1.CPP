#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int a;
	for(a=200;a<=100;a=a+20)
	{
	sound(a);
	delay(25);
	}
	nosound();
	getch();

}