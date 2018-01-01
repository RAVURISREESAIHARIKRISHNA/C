#include<iostream>
#include<conio.h>

using namespace std;

class MyClass;  //Forward Declaration

class FriendClass{
    public:
        void display(MyClass);
};

class MyClass{
    private:
        int a,b;
    public:
        MyClass(int a, int b){
            this->a = a;
            this->b = b;
        }
        friend class FriendClass;
};
int main(){
    MyClass myclass(2,3);
    FriendClass friendclass;
    friendclass.display(myclass);
    _getch();
    return 0;
}

void FriendClass::display(MyClass obj){
    cout<<endl<<obj.a<<endl<<obj.b;
}
