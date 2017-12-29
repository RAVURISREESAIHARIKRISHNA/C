#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    wchar_t ch;
    ch = L'₹';
    cout<<ch;
    cout<<"Size of `ch` is "<<sizeof(ch);
    getch();
    return 0;
}
