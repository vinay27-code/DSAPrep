//selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning. 
// The algorithm maintains two subarrays in a given array:

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

void sort(vector<int>&arr){
  // Traverse the array one position at a time.
    // In each iteration, we'll place the correct smallest element at index i.
    for (int i = 0; i < arr.size() - 1; i++) {

        // Assume the current element is the smallest.
        // We'll update minIndex if we find a smaller element.
        int minIndex = i;

        // Search for the smallest element in the remaining unsorted part.
        for (int j = i + 1; j < arr.size(); j++) {

            // If a smaller element is found,
            // remember its index.
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Place the smallest element at its correct position.
        swap(arr[i], arr[minIndex]);
    }

    print(arr);
}

int main(){
    vector<int> arr,arr2;
    arr={5,2,6,1,4,3};
    arr2={1,3,3,2,5};
    sort(arr);
    sort(arr2);
    return 0;
}

//The worst case time complexity of the above code is: O(n^2)
// The best case time complexity of the above code is: O(n^2), Even when the given array is sorted, 
// the time complexity of the above code is O(n^2), 
// because we are still comparing each element with rest of the elements in the array.