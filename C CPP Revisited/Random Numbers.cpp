#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    for(int i=0;i<=10;i++){
        cout<<rand()<<endl;
    }
    cout<<"RAND_MAX : "<<RAND_MAX;
    getch();
    return 0;
}
