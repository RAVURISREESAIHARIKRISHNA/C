#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char x;
	printf("enter a value or a characet or a number");
	scanf("%s",&x);
	if((x>=65)&&(x<=95))
	       {	printf("\nit is a capital letter");    }
	else
		{
			if((x>=97)&&(x<=122))
				{printf("\nit is a small letter");   }

			else
				{
					if((x>=48)&&(x<=57))
					{printf("\nit is a number between 0 to 9");}

					else
					{
						if(((x>=0)&&(x<=47))||((x>=58)&&(x<=64))||((x>=91)&&(x<=96))||((x>=123)&&(x<=127)))

							{printf("\nit is a special symbol");}

						 else
						 {printf("\nit is undefined,please enter a defined one");}

					 }



		 }
				 }



		 getch();


}





