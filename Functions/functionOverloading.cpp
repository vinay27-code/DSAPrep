#include<iostream>
using namespace std;

//function overloading is when there's same miltiple functions but with different paramenters or different return types.

int sum(int a, int b){
    cout<<"The sum is: "<<a+b<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"The sum is: "<<a+b+c<<endl;
    return a+b+c;
}

float sum(float a, float b){
    cout<<"The sum is: "<<a+b<<endl;
    return a+b;
}

int main(){
    int num1=3,num2=7,num3=10;
    float a=10.234, b=32.11;
    sum(num1,num2);
    sum(num1,num2,num3);
    sum(a,b);
    return 0;
}