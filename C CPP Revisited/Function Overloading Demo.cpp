#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
/*
FUNCTION SELETION INVOLVES FOLLOWING STEPS:
1.The Compiler first tries to find an exact match in which the types of actual arguments are the same,and use
that function.

2.If an exact match is not found,the compiler uses the integral promotions to the actual arguments,such as
	char TO int
	float TO double
to find a match.

3.When either of them fails,the comiler tries to use the built-in conversions(the implicit assignment conversions)
to the actual arguments and then uses the function whose match is unique.If the conversion is possible to hae multiple matches,then
the compiler will generate an error message.Suppose we use the following two functions
	long square(long n);
	double square(double x);

	A function call such as
	square(10)

	will cause an error because `int` argument can be converted to either `long` or `double`.

4.If all the steps fail,then the compiler will try the user-defined conversions in combination with 
integral promotions and built-in conversions to find a unique match.User-defined convertions are often used in handling class objects.
*/
float volume(float);
float volume(float,float,float);
float volume(float,float);

int main(){
	float s,l,b,h,r,h1;
	cout<<"Enter s\n";
	cin>>s;
	cout<<volume(s)<<endl;
	cout<<"Enter l\n";
	cin>>l;
	cout<<"Enter b\n";
	cin>>b;
	cout<<"Enter h\n";
	cin>>h;
	cout<<volume(l,b,h)<<endl;
	cout<<"Enter r\n";
	cin>>r;
	cout<<"Enter h\n";
	cin>>h1;
	cout<<volume(r,h1);
	_getch();
	return 0;
}

float volume(float s){
	return s*s*s;
}

float volume(float l, float b, float h){
	return l*b*h;
}

float volume(float r, float h){
	return M_PI * r * r * h;
}