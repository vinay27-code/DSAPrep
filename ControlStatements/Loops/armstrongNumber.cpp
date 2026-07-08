#include<iostream>
using namespace std;

int main(){
    //153 =  1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
    //remainder
    //remainder^3

    int number,rem,armstrong=0,temp;
    cout<<"Enter any number to check if it's an armstrong number: ";
    cin>>number;
    temp=number;
    while(number>0){
        rem=number%10; //rem=153%10 = 3
        armstrong+=(rem*rem*rem); //armstrong=0+3*3*3=27
        number/=10;
    }

    if(temp==armstrong){
        cout<<temp<<" is an armstrong number"<<endl;
        return 0;
    }



    cout<<temp<<" is not an armstrong number"<<endl;
    return 0;
}