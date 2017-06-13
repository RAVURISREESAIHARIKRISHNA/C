#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

int main(int argc , char* argv[])
{

int a = atoi(argv[1]);
float b = atoi(argv[3]);

char c = argv[2][0];
//printf("\n%c",c);

switch(c)
{
	case '+':
	printf("\nSum is : %f",a+b);
break;
case '-':
printf("\nDifference is : %f",a-b);
break;
case '*':
printf("\nProduct is :%f",a*b);
break;
case '/':
printf("\nQuotient is : %f",a/b);
break;
defauylt:
printf("\nWrong Entry\n");
}printf("\n");
return 0;

}
