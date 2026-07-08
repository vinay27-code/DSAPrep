#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b;
    cout<<"\nEnter another number: ";
    cin>>b;
    //There are 3 bitwise operators in C++ which are used to perform bitwise operations on variables and values. The bitwise operators are: &, |, ^.
    //Bitwise AND operator (&) is used to perform bitwise AND operation on two values. It returns 1 if both bits are 1, otherwise it returns 0. Here, the value of a is ANDed with 1 and the result is printed.
    int bitwiseAnd = a & b;
    cout<<"Bitwise AND of "<<a<<" and "<<b<<" is: "<<bitwiseAnd<<endl;
    //Bitwise OR operator (|) is used to perform bitwise OR operation on two values. It returns 1 if at least one bit is 1, otherwise it
    int bitwiseOr = a | b;
    cout<<"Bitwise OR of "<<a<<" and "<<b<<" is: "<<bitwiseOr<<endl;
    //Bitwise XOR operator (^) is used to perform bitwise XOR operation on two values. It returns 1 if the bits are different, otherwise it returns 0.
    int bitwiseXor = a ^ b;
    cout<<"Bitwise XOR of "<<a<<" and "<<b<<" is: "<<bitwiseXor<<endl;
    return 0;
}