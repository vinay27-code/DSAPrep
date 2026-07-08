// A function is a block of code that performs a specific task. It can take input parameters, perform operations, and return a value. Functions help in organizing code, promoting reusability, and improving readability.
#include<iostream>
using namespace std;

//declare and define the function "factorial()"
int factorial(int n){                   //n is the parameter of the function "factorial()". It is used to pass the value of the number for which we want to find the factorial.
    int fact=1;
    if(n==0||n==1){
        cout<<"Factorial of "<<n<<" is: 1";
        return 1;
    }
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    return fact;
}

int main(){
    int number;
    cout<<"Enter any number to find its factorial: ";
    cin>>number;
    factorial(number);          //calling the function "factorial()". number is passed as an argument to the function.
    return 0;
}
