#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gdriver=DETECT,gmode,errorcode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	errorcode=graphresult();
	if(errorcode!=0)
	{
	printf("\nerror");
	exit(0);
	}
	setbkcolor(10);
	setcolor(4);
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	settextstyle(GOTHIC_FONT,0,4);
	outtextxy(getmaxx()/2,getmaxy()/2,"MY FIRST GRAPHIC PROGRAM");
//	cleardevice();
	getch();
}