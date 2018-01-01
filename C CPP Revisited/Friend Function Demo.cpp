#include<iostream>
#include<conio.h>

using namespace std;
/*
A Friend Function Contains following Characterstics:
1. It is not in the scope of the class to which it has been declared as Friend.

2. Since, It is not in the scope of the class,it cannot be called using the object of that class.

3. It can be invoked like a normal function without the help of any object.

4. Unlike member functions,it CANNOT Access the member names directly and has to use an Object name
and dot membership operator with each member name

5. It CAN be DECLARED either in the PUBLIC or PRIVATE,without effecting its meaning.

6. Usually,it has Objects as ARGUMENTS.
*/
class Data{
    private:
        int a,b;
    public:
        Data(int a,int b){
            this->a = a;
            this->b = b;
        }
        friend float avg(Data obj);
};

int main(){
    Data Obj(5,6);
    cout<<avg(Obj);
    _getch();
    return 0;
}

float avg(Data obj){
    return (obj.a+obj.b)/2.0;
}