#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <iostream.h>
void main()

{


 clrscr();
 int  a,b,c,x;
 printf("enter first number ");
 scanf("%d",&a);
 printf("%d",a);
 printf("enter second number");
 scanf("%d",&b);
 printf("\n");

 cout<< "1.ADDITION \n" ;
 cout<< "2.SUBTRACTION \n";
 cout<< "3.MULTIPLICATION \n";
 cout<< "4.DIVISION \n";
 scanf("%d",&c);
 if (c==1)
 {
  x=a+b;
  cout<< "the result is ";
  cout<<x;

 };
  if (c==2)
 {
  x=a-b;
  //cout<< "the result is ";
  cout<<x;

 }
  if (c==3)
 {
   x=a*b;
  cout<< "the result is ",x;

 }
  if (c==4)
 { x=a/b;
  cout<< "the result is ",x;


 }
  if (c<1||c>4)
 {

  cout<< "invalid option";

 }


// x=0;
// x=(a*b);
// cout<< x;
 //getch();
 //printf(" %d ", x);
// printf("HARI\n");
// printf("krishna");
getch();




}






