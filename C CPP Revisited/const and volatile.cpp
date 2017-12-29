#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    // const Variables cannot be changed
    const int a = 10;

    // volatile
    // volatile is used so as for compiler not to make any optimizations of that variable.
    // If optimization was done,we cannot change the value of the variable from outside the code
    // Consider....We have a variable which should be changed by another program while the current code is running
    // this can be done by volatile keyword
    // const and volatile can be used together as... const

    // Now ... Interestingly in const volatile....
    // We cannot change value because it is const
    // Then what is the use of volatile?
    
    // Well....This means that the current code cannot change the value of the variable as it is const
    // but any other program can change it...
    // This is used in Embedded Programs
    

    getch();
    return 0;
}