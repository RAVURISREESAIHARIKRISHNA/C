
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int matrix[3][2];

int i;
for(i=0;i<=2;i++)
{printf("please enter two elements of %dth row : ",i+1);
scanf("%d,%d",&matrix[i][0],&matrix[i][1]);

}
printf("\n%d",*(matrix[2]+1) );
printf("\n\n%d",*(*(matrix+2)+1));
//printf("\n%d",*(*(matrix+2)+1));
getch();
}