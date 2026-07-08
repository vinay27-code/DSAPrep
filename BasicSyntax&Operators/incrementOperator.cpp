#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    //pre-increment operator is used to increment the value of a variable by 1 before using it in an expression. It is denoted by ++a   . Here, the value of a is incremented by 1 before it is printed.
    cout<<"Pre-incremented value of a: "<<++a<<endl;
    //post-increment operator is used to increment the value of a variable by 1 after using it in an expression. It is denoted by a++   . Here, the value of a is printed first and then incremented by 1.
    cout<<"Post-incremented value of a: "<<a++<<endl;
    return 0;
}