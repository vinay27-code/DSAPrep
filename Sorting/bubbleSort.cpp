// Bubble Sort:
// Repeatedly compare adjacent elements and swap them if they are in the wrong order.
// In every pass, the largest element moves to the end. So we need not compare last element at every iteration

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

void bubbleSort(vector<int>& arr) {

    // Repeat the sorting process.
    for(int j = 0; j < arr.size() - 1; j++) {

        bool swapped = false;

        // Compare neighboring elements.
        // No need to check the last 'j' elements because they are already sorted.
        for(int i = 0; i < arr.size() - 1 - j; i++) {

            // If the left element is bigger, swap them.
            if(arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // If no swap happened, the array is already sorted.
        if(!swapped) {
            break;
        }
    }

    print(arr);
}

int main(){
    vector<int> arr,arr2,arr3;
    arr={5,2,6,1,4,3};
    arr2={1,3,3,2,5};
    arr3={1,2,3,4,5};
    bubbleSort(arr);
    bubbleSort(arr2);
    bubbleSort(arr3);
    return 0;
}

//Worst case time complexity: O(n^2)
//Best case time complexity: O(n)