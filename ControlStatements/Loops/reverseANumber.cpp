#include<iostream>
using namespace std;

int main(){

    //while num>0                   num=123                             num=12                      num=1
    //rem=num%10                    rem=123%10 ==3                      rem=12%10 ==2               rem=1%10 ==1              
    //rev=rev*10+rem               rev=0*10+3 ==3                     rev=3*10+2==32                rev=32*10+1 ==321    
    //num=num/10                    num=123/10=12                     num=12/10==1                  num=1/10 ==0

    int number,rev=0,rem;
    cout<<"Enter any number you want to reverse: ";
    cin>>number;

    while(number>0){
        rem=number%10;
        rev=rev*10+rem;
        number/=10;
    }

    cout<<"The reverse of the given number is: "<<rev<<endl;

    return 0;
}