#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    //even-odd check is used to check whether a number is even or odd. 
    if(number%2==0){  //if the remainder of division of number by 2 is 0
        cout<<number<<" is even.";  //then print "number is even."
    }
    else{  //if the remainder of division of number by 2 is not 0
        cout<<number<<" is odd.";  //then print "number is odd."
    }
    return 0;
}