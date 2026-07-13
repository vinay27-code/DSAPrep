#include<iostream>
#include<vector>
using namespace std;

// Print all elements of a vector.
void print(const vector<int>& arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

vector<int> searchRange(vector<int>& nums, int target) {

    int n = nums.size();

    // If the array is empty, target cannot exist.
    if(n == 0){
        return {-1, -1};
    }

    // ---------------- Find First Occurrence ----------------

    int i = 0, j = n - 1;
    int firstIndex = -1;

    while(i <= j){

        // Find the middle element.
        int mid = i + (j - i) / 2;

        // Target found.
        if(target == nums[mid]){

            // Store the index.
            firstIndex = mid;

            // Continue searching on the left
            // to check if there is an earlier occurrence.
            j = mid - 1;
        }

        // Search in the left half.
        else if(target < nums[mid]){
            j = mid - 1;
        }

        // Search in the right half.
        else{
            i = mid + 1;
        }
    }

    // ---------------- Find Last Occurrence ----------------

    int lastIndex = -1;

    // Search for the last occurrence only
    // if the target exists.
    if(firstIndex != -1){

        i = 0;
        j = n - 1;

        while(i <= j){

            // Find the middle element.
            int mid = i + (j - i) / 2;

            // Target found.
            if(target == nums[mid]){

                // Store the index.
                lastIndex = mid;

                // Continue searching on the right
                // to check if there is a later occurrence.
                i = mid + 1;
            }

            // Search in the left half.
            else if(target < nums[mid]){
                j = mid - 1;
            }

            // Search in the right half.
            else{
                i = mid + 1;
            }
        }
    }

    // Return the first and last positions.
    return {firstIndex, lastIndex};
}

int main(){

    vector<int> arr, arr2, arr3;

    arr = {1,2,3,4,4,4,4,4,5};
    arr2 = {1,2,3,4,5};
    arr3 = {};

    print(searchRange(arr,4));
    print(searchRange(arr,6));
    print(searchRange(arr,0));

    return 0;
}

/*
Time Complexity:
Best Case  : O(log n)
Worst Case : O(log n)

Reason:
- One Binary Search finds the first occurrence.
- Another Binary Search finds the last occurrence.
- O(log n) + O(log n) = O(log n)

Space Complexity:
O(1)
- No extra space is used except a few variables.
*/