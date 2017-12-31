#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int xstrlen(string);

int main(){
    string str;
    cout<<"Enter a String\n";
    getline(cin , str);
    cout<<"Length of "<<str<<" is "<<xstrlen(str);
    getch();
    return 0;
}

int xstrlen(string str){
    int len = 0;
    for(;str[len]!='\0';len++);
    return len;
}