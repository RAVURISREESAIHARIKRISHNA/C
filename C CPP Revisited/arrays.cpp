#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    
    int a[100];
    int *ptr;
    ptr = a;
    a[3] = 3;
    cout<<*(ptr+3)<<endl;
    getch();
    return 0;
}