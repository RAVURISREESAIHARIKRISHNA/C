#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
/*
=> A static function can have access to only other static members declared in the same class.
=> Static functions do not have this pointer
=> A static member function CANNOT be VIRTUAL
=> A static member function CANNOT be Declared CONST or VIRTUAL or BOTH
*/
class Integer{
  public:
    static int x;
    static int parseInt(string src){
        return stoi(src);
    }
    /*
    static int myX(){
        return this->x; //COMPILE TIME ERROR SEE NOTE 2
    }
    */
};

int main(){
    cout<<Integer::parseInt("12a3");
    Integer obj;
    obj.x = 5;
    // cout<<endl<<Integer::myX()<<endl;
    _getch();
    return 0;
}