#include<iostream>
using namespace std;

int main(){


    int num;
    cout<<"Enter the number to find its factorial: ";
    cin>>num;

    if(num==0||num==1){
        cout<<"The factorial of "<<num<<" is: 1";
        return 0;
    }
    
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
    }


    cout<<"The factorial of "<<num<<" is: "<<fact<<endl;

    return 0;
}