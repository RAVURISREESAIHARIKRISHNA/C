#include<iostream.h>
#include<conio.h>
class hari
{
	int m,n;
	public:
	//hari(int x,int y);
	hari(int x,int y=0);
	hari();
	void display(void);
}                          ;
void main()
{
	clrscr();
	hari x(5,5),y(7),z;
	x.display();y.display();z.display();
	getch();

}
hari::hari(int x,int y)
{
	m=x;n=y;
}
/*hari::hari(int m,int n=0)
{m=m;n=n;}*/
hari::hari()
{
m=8;n=8;
}
void hari::display(void)
{
	cout<<endl<<"m="<<m<<endl<<"n="<<n<<endl<<endl;
}