#include<iostream>
using namespace std;
int main(){
    int a=5;                        // = is an assignment operator which is used to assign a value to a variable. Here, the value 5 is assigned to the variable a.
    cout<<"a = "<<a<<endl;
    a+=5;  // a = a + 5             // += is an assignment operator which is used to add a value to a variable and assign the result to the same variable. Here, the value 5 is added to the variable a and the result is assigned to the variable a.
    cout<<"a = "<<a<<endl;
    a-=5;  // a = a - 5             // -= is an assignment operator which is used to subtract a value from a variable and assign the result to the same variable. Here, the value 5 is subtracted from the variable a and the result is assigned to the variable a.
    cout<<"a = "<<a<<endl;
    a*=5;  // a = a * 5             // *= is an assignment operator which is used to multiply a value with a variable and assign the result to the same variable. Here, the value 5 is multiplied with the variable a and the result is assigned to the variable a.
    cout<<"a = "<<a<<endl;
    a/=5;  // a = a / 5             // /= is an assignment operator which is used to divide a variable by a value and assign the result to the same variable. Here, the variable a is divided by the value 5 and the result is assigned to the variable a.
    cout<<"a = "<<a<<endl;
    a%=5;  // a = a % 5             // %= is an assignment operator which is used to find the remainder of division of a variable by a value and assign the result to the same variable. Here, the remainder of division of the variable a by the value 5 is assigned to the variable a.
    cout<<"a = "<<a<<endl;
    return 0;
}