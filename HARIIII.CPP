#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char y;
	printf("enter a character or a value ");
	scanf("%s",&y);

	if(("A"<=y)&&(y<="Z"))
		{printf("\nthecharacter entered is a capital letter");}
	if(("a"<=y)&&(y<="z"))
		{printf("\nthecharacter entered is a small letter");}
	if(("0"<=y)&&(y<="9"))
		{printf("\nthecharacter entered is a a number between 0 to 9");}
	if(("0"<=y)&&(y<="47")&&(y>="58")&&(y<="64")&&(y>="91")&&(y<="96")&&(y>="123")&&(y<="127"))
		{printf("\nthecharacter entered is a special character");}


	getch();
}




