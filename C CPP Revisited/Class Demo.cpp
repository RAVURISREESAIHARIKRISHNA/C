#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Person{
    private:
    string name;
    int age;
    
    public:
    Person(){
        cout<<"Default Constructor Called";
    }
    string getName(void){
        return this->name;
    }
    
    int getAge(void){
        return this->age;
    }

    void setName(string name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }

};


int main(){
    Person p;
    p.setName("Hari");
    p.setAge(19);
    cout<<p.getName();
    cout<<endl<<p.getAge();
    getch();
    return 0;
}