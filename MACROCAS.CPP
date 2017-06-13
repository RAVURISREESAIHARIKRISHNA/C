#include <stdio.h>
#include <conio.h>
#define UPPER(n) if((n <= 'Z' && n >= 'A'))    {	printf("\nupper");}
#define LOWER(n) if((n >= 'a' && n <= 'z'))    {	printf("\nlower");}
//#define IS_ALPHABET(n) (UPPER(n) || LOWER(n) ? n: 5)


void main()
{
 clrscr();
 char letter;
 printf("enter a letter\n");
 scanf("%c",&letter);
 //printf("%d\n",IS_ALPHABET(letter));
 //if(UPPER(letter))
// printf("\nupper");
UPPER(letter);
LOWER(letter);
 //printf("\nlower");
 getch();
}