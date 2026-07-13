#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(vector<int>& arr) {

    int n = arr.size();

    // Start from the second element.
    // Assume the first element is already sorted.
    for(int i = 1; i < n; i++) {

        // Move the current element towards the left
        // until it reaches its correct position.
        for(int j = i; j > 0; j--) {

            // If the current element is smaller than the previous one,
            // swap them.
            if(arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }

            // If the current element is already in the correct position,
            // no need to compare further.
            else {
                break;
            }
        }
    }

    print(arr);
}

int main(){
    vector<int> arr,arr2,arr3;
    arr={5,2,6,1,4,3};
    arr2={1,3,3,2,5};
    arr3={1,2,3,4,5};
    insertionSort(arr);
    insertionSort(arr2);
    insertionSort(arr3);
    return 0;
}

/*
Time Complexity:
Best Case  : O(n)
- The array is already sorted.
- Only one comparison is made for each element.

Worst Case : O(n²)
- The array is in reverse order.
- Every element moves all the way to the beginning.

Space Complexity:
O(1) (In-place sorting)
*/