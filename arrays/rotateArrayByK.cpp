#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

void rotate(vector<int>& nums, int k) {
         int n=nums.size();
         vector<int> newArr(n);
         for(int i=0;i<n;i++){
            newArr[(i+k)%n]=nums[i];
         }
        // vector<int> kArray, newArr;
        // for(int i=n-k;i<n;i++){
        //     kArray.push_back(nums[i]);
        // }
        // for(int i=0;i<n-k;i++){
        //     newArr.push_back(nums[i]);
        //     kArray.push_back(newArr[i]);
        // }
        print(newArr);
    }

    int main(){
        vector<int> arr;
        arr={1,2,3,4,5,6,7};
        int k=3;
        rotate(arr,k);
        return 0;
    }