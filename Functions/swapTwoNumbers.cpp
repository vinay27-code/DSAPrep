#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int num1=10,num2=20;
    swap(num1,num2);
    cout<<"The value of num1 now is: "<<num1<<endl;
    cout<<"The value of num2 now is: "<<num2<<endl;
    return 0;
}