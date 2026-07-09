#include<iostream>
using namespace std;

bool isSorted(vector<int>& arr) {
        // code here
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]>arr[i]){
                cout<<"Array is not sorted\n";
                return false;
            }
        }
        cout<<"Array is sorted\n";
        return true;
    }

int main(){
    vector<int> arr1,arr2,arr3;
    arr1={1,2,3,4,5};
    arr2={1,1,2,2,3,4,5};
    arr3={1,6,3,5,10};
    isSorted(arr1);
    isSorted(arr2);
    isSorted(arr3);
    return 0;
}    