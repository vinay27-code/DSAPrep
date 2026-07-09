#include<iostream>
using namespace std;

int search(int arr[], int n, int x) {
    // Code here
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<" is present at index "<<i;
            return i;
        }
    }
    cout<<x<<" is not present";
    return -1;
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    search(arr,7,4);
    return 0;
}