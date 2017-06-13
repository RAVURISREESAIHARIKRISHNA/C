#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
float a[100];
int len=0;
void push(float);
void calci(char);
void main()
{
	clrscr();
	char s[100];
	printf("enter postfix form\n");
	gets(s);
	int i,r=0,x;
	for(i=0;i<=strlen(s)-1;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
	       {	switch(s[i])
		{
			case '1':
			x=1;
			break;
			case '2':
			x=2;
			break;
			case '3':
			x=3;
			break;
			case '4':
			x=4;
			break;
			case '5':
			x=5;
			break;
			case '6':
			x=6;
			break;
			case '7':
			x=7;
			break;
			case '8':
			x=8;
			break;
			case '9':
			x=9;
			break;
			case '0':
			x=0;
			break;

		}
		r=r*10+x;continue;}
		else
		{

			push(r);
			r=0;
			switch(s[i])
			{
				case '+':
				calci('+');
				break;

				case '*':
				calci('*');
				break;

				case '-':
				calci('-');
				break;
				case'/':
				calci('/');
				break;
				case'^':
				calci('^');
				break;

			}

		}





	}
	printf("\nRESULT=%f",a[0]);
	getch();

}
void push(float n)
{
	a[len++]=n;
}
void calci(char x)
{
	float temp;
	switch(x)
	{
		case'+':
		temp=a[len-2]+a[len-1];

		break;

		case '-':
		temp=a[len-2]-a[len-1];

		break;

		case '*':
		temp=a[len-2]*a[len-1];

		break;

		case '/':
		temp=a[len-2]/a[len-1];
		break;

		case '^':
		temp=pow(a[len-2],a[len-1]);
		break;
	}
	len=len-2;
	push(temp);


}