#include<iostream>
using namespace std;

int searchInsert(vector<int>& nums, int target) {

    int n = nums.size();

    // Search in the entire array.
    int start = 0, end = n - 1;

    int mid;

    // Assume the target should be inserted at the end.
    // We'll update this if we find a better position.
    int index = n;

    while(start <= end){

        // Find the middle element.
        mid = start + (end - start) / 2;

        // Target found.
        if(target == nums[mid]){
            return mid;
        }

        // Search in the right half.
        else if(target > nums[mid]){
            start = mid + 1;
        }

        // Target is smaller than nums[mid].
        // This position can be the insertion index,
        // but keep searching on the left for an earlier position.
        else{
            index = mid;
            end = mid - 1;
        }
    }

    // Return the correct insertion position.
    return index;
}

/*
Time Complexity:
Best Case  : O(1)
- Target is found at the middle in the first comparison.

Worst Case : O(log n)
- The search space is reduced to half in every iteration.

Space Complexity:
O(1)
- Only a few variables are used.
*/

int main(){
    vector<int> arr;
    arr={1,3,5,6};
    cout<<searchInsert(arr,5)<<endl;
    cout<<searchInsert(arr,2)<<endl;
    cout<<searchInsert(arr,7)<<endl;
    return 0;
}    