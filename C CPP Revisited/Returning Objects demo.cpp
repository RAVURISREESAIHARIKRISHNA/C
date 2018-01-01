#include<iostream>
#include<conio.h>

using namespace std;

class Complex{
    int real,img;
    public:
        Complex(int real,int img){
            this->real = real;
            this->img = img;
        }
        int getReal() const;
        int getImg() const;

        static void display(Complex c1){
            cout<<endl<<"REAL : "<<c1.getReal()<<endl<<"IMAGINARY : "<<c1.getImg()<<endl;
        }
        
};

Complex sum(Complex,Complex);

int main(){
    Complex complex1(2,3);
    Complex complex2(2,3);
    Complex add = sum(complex1,complex2);
    
    Complex::display(add);
    _getch();
    return 0;
}

Complex sum(Complex c1,Complex c2 ){
    Complex c3(c2.getReal() + c1.getReal() , c2.getImg() + c1.getImg());
    return c3;
}

int Complex::getReal() const{
    return this->real;
}

int Complex::getImg() const{
    return this->img;
}