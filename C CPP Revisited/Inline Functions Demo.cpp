#include<iostream>
#include<conio.h>

using namespace std;

/*
Request to make a Function Inline may be rejected if...
1.For Functions Returning values,IF a LOOP or SWITCH or GOTO Exists.
2.For Functions NOT Returning values,IF a RETURN Statement Exists
3.IF Functions CONTAIN STATIC VARIABLES
4.IF Inline Functions ARE RECURSIVE
*/

inline float multiply(float , float );
// IF YOU WANT TO MAKE A Class Function Inline...
// You must add the Keyword INLIINE AT THE FUNCTION DEFINITION(NO @ DECLARATION)

int main(){
	cout<<"Enter a Number\n";
	float a,b;
	cin>>a;
	cout<<"Enter another Number\n";
	cin>>b;
	cout<<multiply(a,b);
	_getch();
	return 0;
}

inline float multiply(float a, float b){
	return a*b;
}