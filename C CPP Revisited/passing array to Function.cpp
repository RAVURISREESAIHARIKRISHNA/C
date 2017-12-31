#include<iostream>
#include<conio.h>

using namespace std;

void passByPointer(int*);
void passBySizedArray(int[5]);
void passByUnsizedArray(int[]);

int main(){
    int x[]={1,2,3,4,5};
    passByPointer(x);
    passBySizedArray(x);
    passByUnsizedArray(x);
    getch();
    return 0;
}

void passByPointer(int*x){
    cout<<"passByPointer()"<<endl;
    for(int i=0;i<=4;i++){
        cout<<x[i]<<endl;
    }
    return;
}

void passBySizedArray(int x[5]){
    cout<<"passBySizedArray()"<<endl;
    for(int i=0;i<=4;i++){
        cout<<x[i]<<endl;
    }
    return;
}

void passByUnsizedArray(int x[]){
    cout<<"passByUnsizedArray()"<<endl;
    for(int i=0;i<=4;i++){
        cout<<x[i]<<endl;
    }
    return;
}