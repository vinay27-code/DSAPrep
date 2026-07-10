#include<iostream>
#include<vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        //find largest number
        int largest=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }

        int secondLargest=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==largest){
                continue;
            }
            else if(arr[i]>secondLargest){
                secondLargest=arr[i];
            }
        }
        return secondLargest;
    }

    int main(){
        vector<int> arr,arr2;
        arr={10,20,25,11,24,12};
        arr2={10,10,10};
        cout<<"The second largest element in the given array is: "<<getSecondLargest(arr)<<endl;
        cout<<"The second largest element in the given array is: "<<getSecondLargest(arr2)<<endl;
        return 0;
    }