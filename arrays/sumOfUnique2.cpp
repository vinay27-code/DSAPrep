#include<iostream>
#include<vector>
using namespace std;

//In this case, we take the frequency array of numbers 1 to 100
//Depending on the occurence of each number in nums array, we increment the frequency of that index in frequencyArray


int sumOfUnique(vector<int>& nums) {
         int n=nums.size();
        int sum=0;
        vector<int> frequencyArray(101,0);
        for(int i=0;i<n;i++){
            frequencyArray[nums[i]]++;
        }

        for(int i=1;i<101;i++){
            if(frequencyArray[i]==1){
                sum+=i;
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