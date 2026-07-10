#include<iostream>
#include<vector>
using namespace std;

int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else if(nums[i]==nums[j]){
                    found=true;
                    break;
                }
            }
            if(found==false){
                sum+=nums[i];
            }
        }
        return sum;
    }

int main(){
    vector<int> arr;
    arr={1,2,3,4,1,2};
    cout<<"The sum of unique elements are: "<<sumOfUnique(arr);
    return 0;
}    