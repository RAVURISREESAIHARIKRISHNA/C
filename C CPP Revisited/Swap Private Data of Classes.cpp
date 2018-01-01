#include<iostream>
#include<conio.h>

using namespace std;

class SecondClass;

class FirstClass{
    int x;
    public:
        FirstClass(int x){
            this->x = x;
        }
        void display();
        int getX();
        void setX(int);
        friend void exchange(FirstClass & , SecondClass &);
};

class SecondClass{
    int y;
    public:
        SecondClass(int y){
            this->y = y;
        }
        void display();
        void setY(int);
        int getY();
        friend void exchange(FirstClass& , SecondClass&);
};

int main(){
    FirstClass firstclass(1);
    SecondClass secondclass(9);
    exchange(firstclass,secondclass);
    firstclass.display();
    secondclass.display();
    _getch();
    return 0;
}

void exchange(FirstClass& f, SecondClass &s){
    int temp = f.getX();
    f.setX(s.getY());
    s.setY(temp);
}

int FirstClass::getX(){
    return this->x;
}

void FirstClass::setX(int x){
    this->x = x;
}

int SecondClass::getY(){
    return this->y;
}

void SecondClass::setY(int y){
    this->y = y;
}

void FirstClass::display(){
    cout<<"FirstClass"<<this->x<<endl;
}

void SecondClass::display(){
    cout<<"SecondClass"<<this->y<<endl;
}