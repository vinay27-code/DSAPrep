#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int target){

    int n = arr.size();

    // Start searching from the entire array.
    int start = 0, end = n - 1;

    // Keep searching until the search space becomes empty.
    while(start <= end){

        // Find the middle index.
        int mid = (start + end) / 2;

        // Target found.
        if(target == arr[mid]){
            cout << "The element is found at index: " << mid << endl;
            return mid;
        }

        // Search in the right half.
        else if(target > arr[mid]){
            start = mid + 1;
        }

        // Search in the left half.
        else{
            end = mid - 1;
        }
    }

    // Target does not exist.
    cout << "The element is not found." << endl;
    return -1;
}

/*
Time Complexity:
Best Case  : O(1)
- Target is found at the middle in the first comparison.

Worst Case : O(log n)
- The search space is divided into half in every iteration.

Space Complexity:
O(1)
*/


int main(){
    vector<int> arr,arr2,arr3;
    arr={1,2,3,4,5,6,7,8};
    arr2={1,2,6,7,10};
    arr3={-11,0,2,3,4,5};
    binarySearch(arr,6);
    binarySearch(arr2,2);
    binarySearch(arr3,-1);

    return 0;
}