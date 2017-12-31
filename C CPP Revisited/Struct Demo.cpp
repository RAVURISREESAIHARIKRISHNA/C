#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

struct Person{
	string name;
	int age;	
};

int main(){
	Person p;
	p.name = "Hari Krishna";
	p.age = 19;
	cout<<p.name<<endl<<p.age;
	getch();
	return 0;
}