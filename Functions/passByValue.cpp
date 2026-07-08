#include<iostream>
using namespace std;

//pass by value= value is copied, any changes made are not reflected on the actual variable

void increment(int n){      //n takes the value of a
    n++;                    //the value of n is incremented by 1.
    cout<<"The value of n now is: "<<n<<endl;
}

int main(){
    int a=10;
    increment(a);
    cout<<"The value of a now is: "<<a<<endl;         //Note: the value of a does not change. It's the value of n which changes. This is called pass by value.
    return 0;
}