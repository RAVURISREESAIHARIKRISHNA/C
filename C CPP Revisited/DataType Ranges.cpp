#include<iostream>
#include<limits.h> //For int,char Macros
#include<float.h>  //For float,double Macros
#include<conio.h>

using namespace std;

int main(){
    cout<<"Char MAX : "<<CHAR_MAX<<endl;
    cout<<"Char MIN : "<<CHAR_MIN<<endl;

    cout<<"Short Char MAX : "<<SCHAR_MAX<<endl;
    cout<<"Short Char MIN : "<<SCHAR_MIN<<endl;

    cout<<"Unsigned Char MAX : "<<UCHAR_MAX<<endl;
    cout<<"Unsigned Char MIN : "<<0<<endl;  //Unisgned <t> has a Min value of 0

    cout<<"Short Integer MAX : "<<SHRT_MAX<<endl;
    cout<<"Short Integer MIN : "<<SHRT_MIN<<endl;
    
    cout<<"Unsigned Short Integer MAX : "<<USHRT_MAX<<endl;
    cout<<"Unsigned Short Integer MIN : "<<0<<endl;  //Unisgned <t> has a Min value of 0

    cout<<"Integer MAX : "<<INT_MAX<<endl;
    cout<<"Integer MIN : "<<INT_MIN<<endl;

    cout<<"Unsigned Integer MAX : "<<UINT_MAX<<endl;
    cout<<"Unsigned Integer MIN : "<<0<<endl;  //Unisgned <t> has a Min value of 0

    cout<<"Long Integer MAX : "<<LONG_MAX<<endl;
    cout<<"Long Integer MIN : "<<LONG_MIN<<endl;

    cout<<"Unsigned Long Integer MAX : "<<ULONG_MAX<<endl;
    cout<<"Unsigned Long Integer MIN : "<<0<<endl;  //Unisgned <t> has a Min value of 0

    cout<<"Long Long Integer MAX : "<<LLONG_MAX<<endl;
    cout<<"Long Long Integer MIN : "<<LLONG_MIN<<endl;

    cout<<"Unsigned Long Long Integer MAX : "<<ULLONG_MAX<<endl;
    cout<<"Unsigned Long Long Integer MIN : "<<0<<endl;  //Unisgned <t> has a Min value of 0

    cout<<"Float MAX : "<<FLT_MAX<<endl;
    cout<<"Float MIN : "<<FLT_MIN<<endl;

    cout<<"Double MAX : "<<DBL_MAX<<endl;
    cout<<"Double MIN : "<<DBL_MIN<<endl;
    getch();
    
    return 0;   
}