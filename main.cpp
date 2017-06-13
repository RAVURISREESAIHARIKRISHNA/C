#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class hari
{
private:
    int x,y;
public:
   // hari(int,int);
    hari(int x,int y);
    hari(int x);
    void putdata(void)
    {
        cout<<endl<<"x="<<x<<endl<<"y="<<y<<endl<<endl;
    }
};
void main()
{
    system("cls");
    hari a(1,1);
    hari b(5,);
    hari c(7);
    a.putdata();
    b.putdata();
    c.putdata();
   // _getch();
}
hari::hari(int x)
{
    this->x=x;
    this->y=x;
}
hari::hari(int x,int y=0)
{
    this->x=x;
    this->y=y;
}
