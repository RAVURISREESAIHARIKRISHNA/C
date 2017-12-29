#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    extern int a;
// extern says the compiler that the associated variables are DECLARED(NOT DEFINED) elsewhere
    cout<<a;

    getch();
    return 0;
}
int a = 10;