#include<iostream>
using namespace std;

int searchInsert(vector<int>& nums, int target) {

    int n = nums.size();

    // Search in the entire array.
    int start = 0, end = n - 1;

    int mid;

    while(start <= end){

        // Find the middle element.
        mid = start + (end - start) / 2;

        // Target found.
        if(target == nums[mid]){
            return mid;
        }

        // Search in the left half.
        else if(target < nums[mid]){
            end = mid - 1;
        }

        // Search in the right half.
        else{
            start = mid + 1;
        }
    }

    // If the target is smaller than nums[mid],
    // it should be inserted at the current middle position.
    if(target < nums[mid]){
        return mid;
    }

    // Otherwise, insert it after the current middle.
    return mid + 1;
}

/*
Time Complexity:
Best Case  : O(1)
Worst Case : O(log n)

Space Complexity:
O(1)
*/

int main(){
    vector<int> arr;
    arr={1,3,5,6};
    cout<<searchInsert(arr,5)<<endl;
    cout<<searchInsert(arr,2)<<endl;
    cout<<searchInsert(arr,7)<<endl;
    return 0;
}    