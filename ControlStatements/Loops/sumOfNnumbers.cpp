#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number upto which you want to find the sum of n numbers: ";
    cin>>number;
    int sum=0;

    //let's print sum of n numbers
    for(int i=0;i<=number;i++){
        sum+=i;
    }

    cout<<"The sum of 0 to "<<number<<" is: "<<sum<<endl;

    return 0;
}