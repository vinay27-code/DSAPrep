#include<iostream>
using namespace std;

int search(vector<int>& nums, int target) {

    int n = nums.size();

    // Search in the entire array.
    int start = 0, end = n - 1;

    while(start <= end){

        // Find the middle element.
        int mid = start + (end - start) / 2;

        // Target found.
        if(nums[mid] == target){
            return mid;
        }

        // Check if the left half is sorted.
        else if(nums[mid] >= nums[0]){

            // If the target lies in the left sorted half,
            // search on the left.
            if(target >= nums[start] && target < nums[mid]){
                end = mid - 1;
            }

            // Otherwise, search on the right.
            else{
                start = mid + 1;
            }
        }

        // Otherwise, the right half is sorted.
        else{

            // If the target lies in the right sorted half,
            // search on the right.
            if(target > nums[mid] && target <= nums[end]){
                start = mid + 1;
            }

            // Otherwise, search on the left.
            else{
                end = mid - 1;
            }
        }
    }

    // Target not found.
    return -1;
}

/*
Time Complexity:
Best Case  : O(1)
- Target is found at the middle in the first comparison.

Worst Case : O(log n)
- Binary Search halves the search space in every iteration.

Space Complexity:
O(1)
- Only a few variables are used.
*/

int main(){
    vector<int> arr1,arr2,arr3;
    arr1={5,6,7,8,9,1,2,3,4};
    arr2={5,1,3};
    arr3={6,1,2,3};
    cout<<search(arr1,3)<<endl;
    cout<<search(arr2,3)<<endl;
    cout<<search(arr3,2)<<endl;
    cout<<search(arr1,12)<<endl;
    return 0;
}