#include<iostream>
using namespace std;

int main(){
    int num;
    int sum=0;
    cout<<"Enter any number you of which wanna add the digits: ";
    cin>>num;

    while(num){
        int rem=num%10;
        sum+=rem;

        num/=10;
    }

    cout<<sum;
    return 0;
}

