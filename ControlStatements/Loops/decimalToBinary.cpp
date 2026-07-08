#include<iostream>
using namespace std;

int main(){
//num,ans=0;                    num=12                          num=6                       num=3                   num=1                      num=0                     
//rem=num%2                     rem=12%2=0                      rem=6%2=0                   rem=3%2 ==1             rem=1%2 ==1
//ans=ans*10+rem;               ans=0*10+0 ==0                  ans=0*10+0 ==0              ans=0*10+1 ==1          ans=1*10+1 ==11
//num/=2;                       num=12/2 ==6                    num=6/2 ==3                 num=3/2 ==1             num=1/2 ==0

int number,ans=0,rem,mul=1;
    cout<<"Enter any number you want to find binary equivalent of : ";
    cin>>number;

    while(number>0){
        rem=number%2;
        ans=ans+rem*mul;
        number/=2;
        mul*=10;
    }

    cout<<ans<<endl;

return 0;


}