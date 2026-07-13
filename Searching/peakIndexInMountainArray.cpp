#include<iostream>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }

        return -1;
    }

int main(){
    vector<int> arr={1,2,3,4,3,2,1};
    cout<<"The index of the peak element is: "<<peakIndexInMountainArray(arr);
    return 0;
}    