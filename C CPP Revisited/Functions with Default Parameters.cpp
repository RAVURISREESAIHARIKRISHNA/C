#include<iostream>
#include<conio.h>

using namespace std;

int add(int ,int ,int=0);
// int add(int , int); =>AMBIGUITY

int main(){
	cout<<add(1,2);
	
	_getch();
	return 0;
}

// int add(int a, int b){
// 	cout<<"@ 2 Parameter Function"<<endl<<(a+b)<<endl;
// }
int add(int a,int b,int c){
	cout<<"@ 3 Parameter Function"<<endl;
	return a+b+c;
}