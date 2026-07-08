#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number upto which you want to find the sum of squares of n numbers: ";
    cin>>number;
    int sum=0;

    //let's print sum of squares of n numbers
    for(int i=0;i<=number;i++){
        sum+=i*i;
    }

    cout<<"The sum of squares of 0 to "<<number<<" is: "<<sum<<endl;
    return 0;
}