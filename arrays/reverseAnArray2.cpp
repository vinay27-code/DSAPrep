#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[], int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printArray(arr,n);
    cout<<endl;
}

int main(){
    int array1[5]={1,2,3,4,5};
    int array2[8]={1,2,3,4,5,6,7,8};
    reverseArray(array1,5);
    reverseArray(array2,8);
    return 0;

}