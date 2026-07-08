#include<iostream>
using namespace std;

//pass by reference= value is not copied, actual value is shared. any changes made are reflected on the actual variable

void increment(int &n){      //n takes the actual value of a
    n++;                    //the value of n is incremented by 1. since n is pointing at the same memory location of a, a also increments.
    cout<<"The value of n now is: "<<n<<endl;
}

int main(){
    int a=10;
    increment(a);
    cout<<"The value of a now is: "<<a<<endl;        //The value if a actually changes to 11.
    return 0;
}