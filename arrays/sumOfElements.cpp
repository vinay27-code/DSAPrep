#include<iostream>
using namespace std;

int main(){
    int arr[7]={12,13,11,10,33,21,87};
    int sum=0;
    for(int i=0;i<7;i++){
        sum+=arr[i];
    }
    cout<<"The sum of all the elements in an array: "<<sum<<endl;
    return 0;
}