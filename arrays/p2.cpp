//lets get to know more about arrays in C++.

#include<iostream>
using namespace std;

int main(){
    int arr1[3];  //Here, the array is not initialized. So, the values of the array will be garbage values.
    for(int i=0;i<3;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl; 

    int arr2[3]={1,2,3};  //Here, the array is initialized. So, the values of the array will be 1,2,3.
    for(int i=0;i<3;i++){
        cout<<arr2[i]<<" ";
    }

    cout<<endl; 

    int arr3[3]={1};             //Here, the array is initialized only with the first value. So, the values of the array will be 1,0,0.
    for(int i=0;i<3;i++){
        cout<<arr3[i]<<" ";
    }

    cout<<endl; 
    
    int arr4[3]={1,2};             //Here, the array is initialized only with the first two values. So, the values of the array will be 1,2,0.
    for(int i=0;i<3;i++){
        cout<<arr4[i]<<" ";
    }
    return 0;
}