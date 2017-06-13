#include <stdio.h>
# include <conio.h>
#include <graphics.h>
# include<dos.h>
int i=0,x,y;
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
printf("%d",getmaxx());

for (i=0;i<14;i++)
{
setbkcolor(i);
sleep(5);
}
setcolor(GREEN);
circle(125,125,100);

getch();
closegraph();




}