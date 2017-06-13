#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
	clrscr();
	int gdriver=DETECT,gm,errorcode,i;
	initgraph(&gdriver,&gm,"C:\\TC\\BGI");
	if(graphresult()!=0)
	{
		printf("\nerror");
		exit(0);
	}
	//printf("%d,%d",getmaxx(),getmaxy());
	getch();

	setcolor(RED);
	for(errorcode=0;errorcode<=14;errorcode++)
      {	setbkcolor(errorcode);
	if(errorcode==4)
	setcolor(WHITE);
	else
	setcolor(14-errorcode+1);
	putpixel(getmaxx()/2,getmaxy()/2,WHITE);
	 circle(getmaxx()/2,getmaxy()/2,75);
	 settextjustify(CENTER_TEXT,CENTER_TEXT);
	 settextstyle(GOTHIC_FONT,0,1);
	 outtextxy(getmaxx()/2,getmaxy()/2+85,"CIRCLE" );

	 ellipse(getmaxx()/2,getmaxy()/2,0,360,100,117);
	outtextxy(getmaxx()/2,getmaxy()/2+127,"ELLIPSE");

	rectangle(0,0,175,45);
	outtextxy(176/2,46/2,"RECTANGLE");
	rectangle(639,0,600,39);
	settextjustify(LEFT_TEXT,CENTER_TEXT);
	outtextxy(560,15,"SQUARE");
	line(639,0,0,479);
	outtextxy(50,469,"LINE");

	putpixel(getmaxx()/2,getmaxy()/2,GREEN);
	getch();           }
	closegraph();
	restorecrtmode();

}