#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
int getkey();
void main()
{
	clrscr();
	int gdriver=DETECT,gm,x=15,y=15,hit,s,length=20,i,j=0,prevx,prevy;
	initgraph(&gdriver,&gm,"C:\\TC\\BGI");
	if(graphresult()!=0)
	{
		printf("error");
		getch();
		exit(0);
	}
	setbkcolor(BLACK);
	setcolor(WHITE);
	for(i=0;i<=length;i++)
	{moveto(x,y);
	putpixel(getx(),gety(),GREEN);
	circle(getx(),gety(),15);x=x+1;  }
	do
   {    prevx=x;prevy=y;




	hit=getkey();
	switch(hit)
	{
		case 72:
		if(y-length>=15)
	       {	y=y-1; s=1;}
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;

		case 80:
		if(y+length<=465)
		{y=y+1;s=1; }
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;

		case 75:
		if(x-length>=15)
		{x=x-1;  s=1;}
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;

		case 77:
		if(x+length<=624)
		{x=x+1;     s=1;}
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;
	}

	if(j!=0)
	{
		setbkcolor(BLACK);
		setcolor(BLACK);
		for(i=0;i<=length;i++)
		{moveto(prevx,prevy);
		putpixel(getx(),gety(),BLACK);
		circle(getx(),gety(),15);prevx=prevx+1; }

	}
	for(i=0;i<=length;i++)
       {	moveto(x,y);
	putpixel(getx(),gety(),GREEN);
	setcolor(WHITE);
	circle(getx(),gety(),15);x=x+1;   j=1;
	if(s==1)
	{sound(300);
	delay(100);
	nosound();   }        }


   }while(hit==77||hit==75||hit==80||hit==72);
   getch();
   closegraph();
   restorecrtmode();

}

int getkey(void)
{
	union REGS i,o;
	while(!kbhit());
	i.h.ah=0;
	int86(22,&i,&o);
	return(o.h.ah);
}





