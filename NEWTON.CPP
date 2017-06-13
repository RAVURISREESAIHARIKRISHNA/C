
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

float f(float x)
{
return(x * x * x - 2 * x - 5);
}
float f1(float x)
{
return(3 * x * x - 2);
}

main()
{
float x, epsilon, slope, xnew, rerror;
clrscr();
printf("\nEnter Initial approximation to root : \n");
scanf("%f",&x);
printf("\nEnter accuracy and limit on allowed slope : \n");
scanf("%f,%f",&epsilon, &slope);
do
{
if(f1(x) < slope)
{
printf("slope is too small \n");
break;
}
xnew = x - (f(x) / f1(x));
rerror = fabs((xnew - x) / xnew);
x = xnew;
}
while(rerror >= epsilon);
printf("Root = %f ", xnew);
getch();
return 0;
}
