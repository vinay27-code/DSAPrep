#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    //pre-decrement operator is used to decrement the value of a variable by 1 before using it in an expression. It is denoted by --a   . Here, the value of a is decremented by 1 before it is printed.
    cout<<"Pre-decremented value of a: "<<--a<<endl;
    //post-decrement operator is used to decrement the value of a variable by 1 after using it in an expression. It is denoted by a--   . Here, the value of a is printed first and then decremented by 1.
    cout<<"Post-decremented value of a: "<<a--<<endl;
    return 0;
}