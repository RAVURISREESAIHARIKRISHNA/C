#include<iostream.h>
#include<conio.h>
class complex
{
	float real;
	float imagin;
	public:
	complex(float x,float y)
	{
		real=x;
		imagin=y;
	}
	void getdata();
	void display();
	friend complex add(complex,complex);
};
void main()
{
	clrscr();
	complex a,b;
	a.getdata();
	a.display();
	b.getdata();
	b.display();
	complex c;
	c=add(a,b);
	c.display();
	getch();

}
void complex::getdata()
{
	cout<<"Enter Real Part:\n";
	cin>>real;
	cout<<"Enter Imaginary part:\n";
	cin>>imagin;
}
void complex::display()
{
	cout<<"\nthe complex number is:\n"<<real;
	if(imagin>0)
	{
		cout<<" +"<<imagin<<" i";
	}
	else
	{
		cout<<" "<<imagin<<" i";
	}

}
complex add(complex a,complex b)
{
	return((a.real+b.real),(a.imagin+b.imagin));
}