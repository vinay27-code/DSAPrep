//let's check if a number is prime or not using for loop.
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number to check if it's a prime number or not: ";
    cin>>number;

    if(number<2){
        cout<<number<<" is not a prime number";
    }
     if(number==2){
                cout<<number<<" is a prime number";
            }
    for(int i=2;i<number;i++){
                if(number%i==0){
                    cout<<number<<" is not a prime number";
                    break;
            }
            else{
                cout<<number<<" is a prime number";
                break;
            }
        }
}