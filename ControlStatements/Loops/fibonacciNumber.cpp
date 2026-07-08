#include<iostream>
using namespace std;


//num1=0
//num2=1
//num3=0+1 = 1
//num4=1+1 = 2
//num5=2+1 = 3
//num6=3+2 = 5

int main(){
    int first=0,second=1;
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    if(num<=1){
        cout<<num;
        return 0;
    }

    for(int i=2;i<=num;i++){
        int fibonacci=first+second;
        first=second;
        second=fibonacci;
    }

    cout<<second<<endl;
    return 0;
}