#include<iostream>
#include<conio.h>

using namespace std;
/*
CONST For Args.Specify that the Function should not modify the arguments..
If it tries to modify them,it produces an error;
*/

int add(const int* , const int*);

int main(){
	int a,b;
	cout<<"Enter a\n";
	cin>>a;
	cout<<"Enter b\n";
	cin>>b;
	cout<<add(&a,&b);
	_getch();
	return 0;
}

int add(const int*a,const int*b){
    // *a = 5;  COMPILE TIME ERROR
	return *a+*b;
}