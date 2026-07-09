#include<iostream>
using namespace std;

//note that when you pass an array as an argument, the copy of that array is NOT created. it shares the same array address
//so whatever changes you make are visible on the actual array.

void printArray(int arr[], int size){
    cout<<"The elements of the given array are as follows: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[7]={1,2,3,4,5,6,7};
    printArray(arr1, 5);
    printArray(arr2, 7);
    return 0;
}