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
    return 0;
}