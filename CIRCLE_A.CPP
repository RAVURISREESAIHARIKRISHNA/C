#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<iostream.h>
void main()
{
	clrscr();
	int bkclr,mkclr;
	printf("ENTER background color and main color\nseparated by a comma\n");
	scanf("%d,%d",&bkclr,&mkclr);
	clrscr();
	printf("\t\tSIT\n\t\tBACK\n\t\tAND\n\t\tENJOY\n\t\tTHE\n\t\tRIDE\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	delay(10000);
	int gdriver=DETECT,gm,errorcode;
	initgraph(&gdriver,&gm,"C:\\TC\\BGI");
	if(graphresult()!=0)
	{
		printf("error");
		getch();
		exit(0);
	}
	//errorcode=WHITE;
	setbkcolor(bkclr);
	//setcolor(mkclr);
	int x,y,i,j;
	for(y=0;y<=479;y=y+20)
	{
		for(x=0;x<=659;x++)
		{
			//putpixel(x-1,y,WHITE);
			setcolor(mkclr);
			delay(10);
			circle(x,y,10);
			if(x>0)
			{       setcolor(bkclr);
				circle(x-1,y,10);
			}
			if(y>0)
			{
				setcolor(bkclr);
				circle(639,y-1,10);
			}
			setcolor(mkclr);
			circle(x,y,10);
		}
		x=0;
	}
	getch();
	closegraph();
	restorecrtmode();



}