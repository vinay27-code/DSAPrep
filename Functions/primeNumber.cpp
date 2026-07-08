#include<iostream>
using namespace std;

void primeNumber(int n){
    if(n<2){
        cout<<n<<" is not a prime number";
        return;
    }
    if(n==2){
        cout<<n<<" is a prime number";
        return;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
        cout<<n<<" is not a prime number";
        return;
        }
    }
    cout<<n<<" is a prime number";
}

int main(){
    int number;
    cout<<"Enter any number to find if it's a prime number or not: ";
    cin>>number;
    primeNumber(number);
    return 0;
}