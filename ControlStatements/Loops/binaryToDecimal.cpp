#include<iostream>
using namespace std;

int main(){
    int number,ans=0,rem,mul=1;
    cout<<"Enter any number you want to find decimal equivalent of : ";
    cin>>number;

    while(number>0){
        rem=number%10;
        ans=ans+rem*mul;
        number/=10;
        mul*=2;
    }

    cout<<ans<<endl;

return 0;


}
