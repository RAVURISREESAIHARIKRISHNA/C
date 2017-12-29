#include<iostream>
#include<conio.h>

using namespace std;

void myFunction(void);

int main(){
    for(int i=0;i<=10;i++)
        myFunction();
    getch();
    return 0;
}

void myFunction(void){
    static int var = 1;
    cout<<endl<<var;
    var++;
    return;
}