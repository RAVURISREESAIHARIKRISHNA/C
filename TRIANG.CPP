#include<stdio.h>
#include<conio.h>
#define TRIANGLE(a,b,c) printf("perimetere=%f",a+b+c); printf("\narea=%f",((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c))^(


1/2);

void main()
{
	clrscr();
	float a,b,c;
	printf("\nPLEASE ENTER LENGTHS OF THE THREE SIDES OF A TRIANGLE SEPARATED BY A COMMA ");
	scanf("%f,%f,%f",&a,&b,&c);
	TRIANGLE(a,b,c);
	getch();
}