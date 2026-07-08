#include<iostream>
using namespace std;

int square(int n);

int main(){
    int number;
    cout<<"Enter the number you want to find the square root of: ";
    cin>>number;
    square(number);
    return 0;
}

int square(int n){
    cout<<"The square of "<<n<<" is: "<<n*n<<endl;
}