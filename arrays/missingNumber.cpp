#include<iostream>
using namespace std;

int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size()+1;
        long long totalSum=(n*(n+1))/2;
        //lets calculate the sum of elements in the given array
        int arrSum=0;
        for(int i=0;i<arr.size();i++){
            arrSum+=arr[i];
        }
        
        return totalSum-arrSum;
    }

int main(){
    vector<int> arr;
    arr={1,2,3,5};
    cout<<"The missing number in the given array is: "<<missingNum(arr)<<endl;
    return 0;
}    