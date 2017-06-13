#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream.h>
void main()
{
	clrscr();
	int gdriver=DETECT,gm,errorcode;
	initgraph(&gdriver,&gm,"C:\\TC\\BGI");
	if(graphresult()!=0)
	{
		printf("error");
		getch();
		exit(0);
	}
	errorcode=WHITE;
	setbkcolor(errorcode);
	setcolor(RED);
	int x,y,i,j;
	for(y=0;y<=479;y=y+20)
	{
		for(x=0;x<=659;x++)
		{
			//putpixel(x-1,y,WHITE);
			//setcolor(RED);
			delay(10);

			putpixel(x,y,RED);
			if(x>0)
			{       //setcolor(errorcode);
				putpixel(x-1,y,errorcode);
			}
			//if(y>0)
			//{
			 //	setcolor(errorcode);
		       //		putpixel(639,y-1,10);
		     //	}
			//setcolor(RED);
			//circle(x,y,10);
		}
		x=0;
	}
	getch();
	closegraph();
	restorecrtmode();



}