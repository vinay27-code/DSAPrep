#include<iostream>
using namespace std;

int findMin(vector<int>& nums) {

    int n = nums.size();

    // If the array is already sorted,
    // the first element is the minimum.
    if(nums[0] <= nums[n - 1]){
        return nums[0];
    }

    // Search for the minimum element.
    int start = 0, end = n - 1;

    // Store the minimum element found so far.
    int minElement;

    while(start <= end){

        // Find the middle element.
        int mid = start + (end - start) / 2;

        // If mid belongs to the left sorted part,
        // the minimum must be on the right.
        if(nums[mid] >= nums[0]){
            start = mid + 1;
        }

        // Otherwise, mid belongs to the right sorted part.
        // It can be the minimum, but continue searching left
        // to see if there is an even smaller element.
        else{
            minElement = nums[mid];
            end = mid - 1;
        }
    }

    // Return the minimum element.
    return minElement;
}

/*
Time Complexity:
Best Case  : O(1)
- If the array is already sorted, we return immediately.

Worst Case : O(log n)
- Binary Search halves the search space in every iteration.

Space Complexity:
O(1)
- Only a few variables are used.
*/

int main(){
    vector<int> arr,arr1,arr2;
    arr={5,6,7,8,1,2,3};
    arr1={1,2,3,4,5,6,7,8,9};
    arr2={0};
    cout<<"Tge minimum Element in the given array is: "<<findMin(arr)<<endl;
    cout<<"Tge minimum Element in the given array is: "<<findMin(arr1)<<endl;
    cout<<"Tge minimum Element in the given array is: "<<findMin(arr2)<<endl;
    return 0;
}