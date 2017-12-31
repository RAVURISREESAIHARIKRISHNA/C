#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Person{
	private:
		string name;
		int age;

	public:
		void setName(string);
		void setAge(int);
		string getName();
		int getAge();
};

int main(){
	Person p;
	p.setName("Hari");
	p.setAge(19);
	cout<<p.getName()<<endl<<p.getAge();
	_getch();
	return 0;
}

void Person::setName(string name){
	this->name = name;
}
void Person::setAge(int age){
	this->age = age;
}
string Person::getName(){
	return this->name;
}
int Person::getAge(){
	return this->age;
}