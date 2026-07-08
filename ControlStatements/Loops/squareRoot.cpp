#include<iostream>
using namespace std;

int main(){
    int number, ans;
    cout<<"enter any number to find its integral square root: ";
    cin>>number;

    if(number==0){
        cout<<"The square root of "<<number<<" is: "<<0<<endl;
        return 0;
    }

    for(int i=1;i*i<=number;i++){
        ans=i;
    }

    cout<<"The square root of "<<number<<" is: "<<ans<<endl;
    return 0;
}