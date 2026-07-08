#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;

    //Comparison operators are used to compare two values. The comparison operators are: ==, !=, >, <, >=, <=.
    cout<<"a == b: "<<(a==b)<<endl;  //== is a comparison operator which is used to compare two values. It returns true if the values are equal, otherwise it returns false. Here, the values of a and b are not equal, so the output will be 0 which means false.
    cout<<"a != b: "<<(a!=b)<<endl;  //!= is a comparison operator which is used to compare two values. It returns true if the values are not equal, otherwise it returns false. Here, the values of a and b are not equal, so the output will be 1 which means true.
    cout<<"a > b: "<<(a>b)<<endl;    //> is a comparison operator which is used to compare two values. It returns true if the value on the left is greater than the value on the right, otherwise it returns false. Here, the value of a is not greater than the value of b, so the output will be 0 which means false.
    cout<<"a < b: "<<(a<b)<<endl;    //< is a comparison operator which is used to compare two  values. It returns true if the value on the left is less than the value on the right, otherwise it returns false. Here, the value of a is less than the value of b, so the output will be 1 which means true.
    cout<<"a >= b: "<<(a>=b)<<endl;  //>= is a comparison operator which is used to compare two values. It returns true if the value on the left    is greater than or equal to the value on the right, otherwise it returns false. Here, the value of a is not greater than or equal to the value of b, so the output will be 0 which means false.
    cout<<"a <= b: "<<(a<=b)<<endl;  //<= is a comparison operator which is used to compare two values. It returns true if the value on the left is less than or equal to the value on the right, otherwise it returns false. Here, the value of a is less than or equal to the value of b, so the output will be 1 which means true.
    return 0;
}