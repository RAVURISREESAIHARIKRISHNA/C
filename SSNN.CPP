#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
# define	RIGHT	77
#define		LEFT	75
int getkey(void);
void main()
{
	clrscr();
	int gd=DETECT,gm,i,length,hit,x=0,y=0,tail_x,head_x,prev_tail_x,prev_head_x,move;
	printf("enter length\n");
	scanf("%d",&length);
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	if(graphresult()!=0)
	{
	printf("error");
	getch();
	exit(0);
	}                                       /*initial draw START*/
	setbkcolor(BLACK);
	setcolor(WHITE);
	tail_x=0;
	for(i=0;i<=length;i++)
	{
		moveto(x,y);
		putpixel(getx(),gety(),GREEN);
		x=x+1;
	}
					  /*initial draw END*/
       head_x=getx();



	do
	{
		prev_head_x=head_x;
		prev_tail_x=tail_x;
		hit=getkey();
		switch(hit)
		{
			case RIGHT:
			if(head_x+10<=639)
			{head_x=head_x+10;
			tail_x=tail_x+10;move=1;}
			else
			{move=0;}
			break;

			case LEFT:
			if(tail_x-10>=1)
			{head_x=head_x-10;
			tail_x=tail_x-10;move=1;}
			else
			{move=0;}
			break;


		}
		//moveto(prev_tail_x,0);
		if(move==1)
		{for(i=prev_tail_x;i<=prev_head_x;i++)
		{
			moveto(i,0);
			putpixel(getx(),gety(),BLACK);

		}
		for(i=tail_x;i<=head_x;i++)
		{
			moveto(i,0);
			putpixel(getx(),gety(),GREEN);
		}}

	}while(hit==RIGHT||hit==LEFT);


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