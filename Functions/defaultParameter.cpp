#include<iostream>
using namespace std;

void print(int a=10){           //10 is the default parameter. Thsi function prints any parameter that is passed. If not, it prints the default value 10.
    cout<<a<<endl;
}

int main(){
    int num1=15;
    print(num1);        //prints 15
    print();            //prints the default value 10, since there is no argument passed.
    return 0;
}