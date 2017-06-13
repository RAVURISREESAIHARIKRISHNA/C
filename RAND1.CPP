#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# include <conio.h>

void main()
{
   int i;
   time_t t;

   //n = 5;

   clrscr();
   /* Intializes random number generator */
   srand(time(&t));


   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i <=5 ; i++ )
   {
     // srand(a);

      printf("%d\n", rand()%100 );
      //a++;
   }

  // return(0);
  getch();
}