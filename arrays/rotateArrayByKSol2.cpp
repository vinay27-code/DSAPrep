#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

//lets reverse the given array first                            [7,6,5,4,3,2,1]
//lets reverse the first k elements                             [5,6,7,4,3,2,1]
//lets reverse remaining elements from index k                  [5,6,7,1,2,3,4]
// This code only works when k<n.
// When k>n, which implies the positions to be rotated is more than the size of the array which is like a cycle.
// so when k>n, we use k=k%n
void rotate(vector<int>& nums, int k) {
         int n=nums.size();
         // so when k>n, we use k=k%n
         if(k>n){
            k%=n;
        }


        //  /lets reverse the given array first                            [7,6,5,4,3,2,1]

         int i=0,j=n-1;
         while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
         }

         //lets reverse the first k elements                             [5,6,7,4,3,2,1]

        i=0,j=k-1;
         while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
         }

         //lets reverse remaining elements from index k                  [5,6,7,1,2,3,4]

         i=k,j=n-1;
         while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
         }

        print(nums);
    }

    int main(){
        vector<int> arr;
        arr={1,2,3,4,5,6,7};
        int k=3;
        rotate(arr,k);
        return 0;
    }