#include<iostream.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class hari
{
	int n;
	char name[20];
	public:
	void getdata(void);
	void putdata(void);
}                          ;
char key;
int password(void);
int getkey(void);
void main()
{
	clrscr();
	cout<<"press enter to start program";
	key=getch();
	hari *a;
	int k;
	cout<<"ENTER STRENGTH:  ";
	cin>>k;
	a=(hari*)malloc(k*sizeof(hari));
	int i;
	for(i=0;i<=k-1;i++)
	{
		a[i].getdata();
	}
	cout<<"\n\nENTERED DATA IS:\n\n";
	for(i=0;i<=k-1;i++)
	{
		a[i].putdata();
	}
	getch();
	free(a);

}
void hari::getdata(void)
{
	if(password()!=0)
	{cout<<"WRONG PASSWORD!";
	return;   }

	cout<<"\n";
	cout<<"enter employee number\n";
	cin>>n;
	cout<<"\nenter employee name\n";
	scanf("%s",name);
	return;
}
void hari::putdata(void)
{
	cout<<"\n\n";
	cout<<"employee number ="<<n<<"\nemployee name="<<name;
}

int password(void)
{
	char c,b[20],a[]={"password"};
	cout<<"\nenter password :  ";
	int i;
	for(i=0;i<=19;i++)
	{
		c=getch();
		if(c!=key)
		{b[i]=c;
		cout<<"*";  }
		else
		break;
	}
	return(strcmp(a,b));
}
int getkey(void)
{
	union REGS i,o;
	while(!kbhit());
	i.h.ah=0;
	int86(22,&i,&o);
	return(o.h.ah);
}
