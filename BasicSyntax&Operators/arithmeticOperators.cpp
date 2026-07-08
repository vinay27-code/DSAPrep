#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;                         //cin is a part of iostream library which is used to take input from the user.
    cout<<"You entered: "<<a;

    int b;
    cout<<"\nEnter another number: ";
    cin>>b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b;
    cout<<"\nThe difference of "<<a<<" and "<<b<<" is: "<<a-b;
    cout<<"\nThe product of "<<a<<" and "<<b<<" is: "<<a*b;
    cout<<"\nThe quotient of "<<a<<" and "<<b<<" is: "<<a/b;
    cout<<"\nThe remainder of "<<a<<" and "<<b<<" is: "<<a%b;

    //Arithmetic operators are used to perform mathematical operations on variables and values. The arithmetic operators are: +, -, *, /, %.
    //+ is used to add two values, - is used to subtract two values, * is used to multiply two values, / is used to divide two values and % is used to find the remainder of division of two values.    

    return 0;
}