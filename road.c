#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
	clrscr();
	sound(1000);
	printf("\t\tSIT\n\t\tBACK\n\t\tAND\n\t\tENJOY\n\t\tTHE\n\t\tRIDE\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	delay(10000/2);
	nosound();

	int gdrive=DETECT,gm,errorcode;
	initgraph(&gdrive,&gm,"C:\\TC\\BGI");
	if(graphresult()!=0)
	{
		printf("error");
		getch();
		exit(0);
	}
	setcolor(RED);
	setbkcolor(WHITE);

	setfillstyle(SOLID_FILL,GREEN);

	bar(0,0,250,479);
		rectangle(0,0,250,479);
	bar(639,0,389,479);
	rectangle(639,0,639-250,479);
	setfillstyle(SOLID_FILL,8);
	bar(250,0,390,479);
	setfillstyle(SOLID_FILL,WHITE);
	bar(315,0,325,50);
	bar(315,100,325,150);
	bar(315,200,325,250);
	bar(315,300,325,350);
	bar(315,400,325,450);

       /*VEHICLE CODE BEGIN*/
	int j,i;
	for(j=419;j>=-50;j--)
	{       if(j==419)
		{setcolor(14);
		for(i=10;i>=0;i--)
		circle(280,j,i) ;
		setfillstyle(SOLID_FILL,3);
		bar(270,j+40,290,j);    }
		else
		{

		 delay(10);
		 {
		 setcolor(14);
		for(i=10;i>=0;i--)
		circle(280,j,i) ;
		setfillstyle(SOLID_FILL,3);
		bar(270,j+40,290,j);
		if(j%10==0)
	       {	sound(300);
		delay(10);
		nosound();   }
		 }
		 //setcolor(8);
		for(i=10;i>=0;i--)
		{setcolor(8);
		circle(280,j+1,i) ;     }
		setfillstyle(SOLID_FILL,8);
		bar(270,j+40+1,290,j+1);

		//delay(10);
		setcolor(14);
		for(i=10;i>=0;i--)
		circle(280,j,i) ;
		setfillstyle(SOLID_FILL,3);
		bar(270,j+40,290,j);








		}
	}



	/*VEHICLE CODE BEGIN*/
     //	setcolor(BLUE);
   //    /  //	//int i;
	//for(i=10;i>=0;i--)
     //	circle(280,479-180,i) ;
       //	setfillstyle(SOLID_FILL,RED);
       /////////////	bar(270,479-140,290,479-180);     /*VEHICLE CODE END*/


	setcolor(0);
	settextstyle(0,1,2);
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	setcolor(RED);
	delay(10);
	outtextxy(200,250,"HAPPY BIRTHDAY CHAITHANYA...");
	sound(500);
	delay(100);
	nosound();
	getch();
	closegraph();
	restorecrtmode();
	 // int gdriver=DETECT,gmode,errorcode;
	 //getch();
	gdrive=DETECT;
	initgraph(&gdrive,&gm,"C:\\TC\\BGI");
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
	outtextxy(getmaxx()/2,getmaxy()/2,"HAPPY BIRTHDAY CHAITHANYA..");
	getch();
	closegraph();
	restorecrtmode();
}
