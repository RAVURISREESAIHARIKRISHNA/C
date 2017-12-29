#include<iostream>
#include<conio.h>

using namespace std;

bool isPrime(int);
int main(){
    cout<<"Enter a MIN Number(Inclusive) : ";
    int a;
    cin>>a;
    cout<<"\nEnter a MAX Number(Inclusive) : ";
    int b;
    cin>>b;
    cout<<"\n\nThe Prime Numbers are...\n";
    for(int i=a;i<=b;i++){
        if(isPrime(i))
            cout<<i<<endl;
    }
    getch();
    return 0;
}

bool isPrime(int a){
    if(a<=0) return false;
    if(a==1) return true;
    if(a==2) return true;
    for(int i=2;i<=a-1;i++){
        if(a%i == 0){
            return false;
        }
    }return true;
}