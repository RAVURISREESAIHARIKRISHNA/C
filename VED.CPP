
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
int r=0,c=0;
char far *vedmem;
char a;
int cn=0;
vedmem=(char far*)0XB8000000L;

for (c=0;c<160;c+=2)
{
	for(r=0;r<26;r++)
	{
		i=(r*160)+c;
		//if ((r<7)||(r>18)||(c<40)||(c>120)   )
		if(1)
		{
			if (cn==0)
			{ a='J';   }
			if (cn==1)
			{a='A';}
			if (cn==2)
			{a='Y';}
			if (cn==3)
			{a='A';}
			//if (cn=4)
			//{ a='m';}
		       //	cn++;
			*(vedmem+i)=a;
		       //printf("%d",count);
		       //printf("%c",a);
			//count++;
			//if(cn==4)
			//{cn=0;}
		}
      /*	else
	{
			if (count==0)
			{ a='J';   }
			if (count==1)
			{a='A';}
			if (count==2)
			{a='Y';}
			if (count==3)
			{a='A';}

			*(vedmem+i)=a;
			count++;
			if(count==4)
			{count=0;}

      //	*(vedmem+i)='y';

	}  */





	}



cn++;

if(cn==4)
{cn=0;}
}

getch();
}