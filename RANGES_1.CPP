#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>       /*for double and float*/
#include<math.h>        /*for double and float*/
void main()
{
	clrscr();
	printf("the minima of INT datatype is : %d\nthe maxima of INT dataype is : %d",INT_MIN,INT_MAX);       //int
	printf("\nthe minima of CHAR datatype is : %d\nthe maxima of CHAR datatype is : %d",CHAR_MIN,CHAR_MAX);
	printf("\nthe minima of LONG datatype is : %d\nthe maxima of LONG datatype is : %d",LONG_MIN,LONG_MAX);  //long
       //	printf("\n%d,%d",SCHAR_MIN,SCHAR_MAX);    /*short char*/
	printf("\nthe minima of SHORTis : %d\nthe maxima of SHORT is : %d",SHRT_MIN,SHRT_MAX);    //short   prescribed
	/*for double and float we should print in "%e" and shoul use both math.h and float .h header files to show them in decimals*/



	printf("\nthe minima of DOUBLE is: %e\nthe maxima of DOUBLE is: %e",DBL_MIN,DBL_MAX);      //double  prescribed
	printf("\nthe minima of FLOAT is : %e\nthe maxima of FLOAT is : %e",FLT_MIN,FLT_MAX);      //float   prescribed


	printf("\n\n");


	int a=INT_MIN+1,b=INT_MAX+1;
	char c=CHAR_MIN+1,d=CHAR_MAX+1;
	int e=SHRT_MIN+1,f=SHRT_MAX+1;
	double g=DBL_MIN+1,h=DBL_MAX+1;
	float i=FLT_MIN+1,j=FLT_MAX+1;
	//long k=LONG_MIN+1,l=LONG_MAX+1;



	printf("the minima+1 of INT datatype is : %d\nthe maxima+1 of INT daatype is : %d",a,b);       //int
	printf("\nthe minima+1 of CHAR datatype is : %d\nthe maxima+1 of CHAR datatype is : %d",c,d);
  //	printf("\nthe minima+1 of LONG datatype is : %d`\nthe maxima+1 of LONG datatype is : %d",k,l);  //long
	printf("\n%d,%d",SCHAR_MIN,SCHAR_MAX);    /*short char*/
	printf("\nthe minima+1 of SHORTis : %d\nthe maxima+1 of SHORT is : %d",e,f);    //short   prescribed
	/*for double and float we should print in "%e" and shoul use both math.h and float .h header files to show them in decimals*/



	printf("\nthe minima+1 of DOUBLE is: %e\nthe maxima+1 of DOUBLE is: %e",g,h);      //double  prescribed
	printf("\nthe minima+1 of FLOAT is : %e\nthe maxima+1 of FLOAT is : %e",i,j);      //float   prescribed
	getch();

}