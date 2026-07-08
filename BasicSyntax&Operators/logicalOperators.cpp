#include<iostream>
using namespace std;
int main(){
    int a = 10;         // the value of a in binary is 01010
    int b = 20;         // the value of b in binary is 10100
    //Logical operators are used to combine two or more conditions. The logical operators are: &&, ||, !.
    cout<<"a && b: "<<(a&&b)<<endl;  //&& is a logical operator which is used to combine two conditions. It returns true if both conditions are true, otherwise it returns false. Here, both conditions are true, so the output will be 1 which means true.
    cout<<"a || b: "<<(a||b)<<endl;  //      || is a logical operator which is used to combine two conditions. It returns true if at least one condition is true, otherwise it returns false. Here, both conditions are true, so the output will be 1 which means true.
    cout<<"!a: "<<(!a)<<endl;        //! is a logical operator which is used to negate a condition. It returns true if the condition is false, otherwise it returns false. Here, the condition is true, so the output will be 0 which means false.
    return 0;
}