
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
# include <conio.h>

/* prints a random number in the range 0 to 99 */
void main(void)
{  int a;

   clrscr();
   for(a=0;a<10;a++)
   {
   randomize();
   printf("Random number in the 0-99 range: %d\n", random (100));
   //return 0;
   }
   getch();
}

