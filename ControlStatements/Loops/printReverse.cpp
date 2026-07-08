#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number upto which you want to print the numbers in reverse order: ";
    cin>>number;

    for(int i=number;i>=0;i--){
        cout<<i<<" ";
    }

    return 0;
}