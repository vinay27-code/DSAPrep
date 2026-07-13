#include<iostream>
using namespace std;

int mySqrt(int x) {

    // Square root of 0 and 1 is the number itself.
    if(x <= 1){
        return x;
    }

    // Search for the square root between 1 and x.
    int start = 1, end = x;

    // Store the closest integer square root found so far.
    int ans;

    while(start <= end){

        // Find the middle element.
        int mid = start + (end - start) / 2;

        // Exact square root found.
        // Using x / mid avoids integer overflow.
        if(mid == x / mid){
            return mid;
        }

        // mid is smaller than the actual square root.
        // Store it as the current answer and search on the right.
        else if(mid < x / mid){
            ans = mid;
            start = mid + 1;
        }

        // mid is larger than the square root.
        // Search on the left.
        else{
            end = mid - 1;
        }
    }

    // Return the floor value of the square root.
    return ans;
}

/*
Time Complexity:
Best Case  : O(1)
- Exact square root is found in the first comparison.

Worst Case : O(log x)
- The search space is divided into half in every iteration.

Space Complexity:
O(1)
- Only a few variables are used.
*/

int main(){
    cout<<mySqrt(25)<<endl;
    cout<<mySqrt(12)<<endl;
    cout<<mySqrt(23)<<endl;
    cout<<mySqrt(98)<<endl;
    return 0;
}