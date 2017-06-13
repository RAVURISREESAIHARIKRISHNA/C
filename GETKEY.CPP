#include <conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
int getkey();
void main()
{
   clrscr();
   int gdriver=DETECT,gm,hit,x=15,y=15,prevx,prevy,s;
 //  printf("\nENTER lENGTH of SNAKE\n");
  // scanf("%d",&len);
  // arrx=(int*)malloc(len*sizeof(int));
  // arry=(int*)malloc(len*sizeof(int));
   initgraph(&gdriver,&gm,"C:\\TC\\BGI");
   if(graphresult()==1)
   {
	printf("ERROR\n");
	getch();
	exit(0);
   }
   setbkcolor(BLACK);
   setcolor(WHITE);
   moveto(x,y);
   putpixel(getx(),gety(),GREEN);
   circle(getx(),gety(),15);
   do
   {
	//arrx[i]=x;arry[i]=y;
	//i=i+1;
	//if(i==len-1)
	//{
	   prevx=x;
	   prevy=y;



	hit=getkey();
	switch(hit)
	{
		case 72:
		if(y-10>=15)
	       {	y=y-10; s=1;}
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;

		case 80:
		if(y+10<=465)
		{y=y+10;s=1; }
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;

		case 75:
		if(x-10>=15)
		{x=x-10;  s=1;}
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;

		case 77:
		if(x+10<=624)
		{x=x+10;     s=1;}
		else
		{
			sound(500);
			delay(100);
			nosound();
			s=0;
		}
		break;
	}


	moveto(prevx,prevy);
	putpixel(getx(),gety(),BLACK);
	setcolor(BLACK);
	circle(getx(),gety(),15);
	setcolor(WHITE);


	moveto(x,y);
	putpixel(getx(),gety(),GREEN);
	circle(getx(),gety(),15);
	if(s==1)
	{sound(300);
	delay(100);
	nosound();   }


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


