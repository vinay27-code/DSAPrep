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

        //push all elements into new array except the largest number
        vector<int> newArr;
        for(int i=0;i<n;i++){
            if(arr[i]!=largest){
                newArr.push_back(arr[i]);
            }
        }
        
        //if there is no new largest number, the size of new array would be zero
        if(newArr.size()==0){
            return -1;
        }
        
        //now we'll find the largest number in this new array. It will be second largest
        int newlargest=newArr[0];
        for(int i=1;i<newArr.size();i++){
            if(newArr[i]>newlargest){
                newlargest=newArr[i];
            }
        }
        
        return newlargest;
    }

    int main(){
        vector<int> arr,arr2;
        arr={10,20,25,11,24,12};
        arr2={10,10,10};
        cout<<"The second largest element in the given array is: "<<getSecondLargest(arr)<<endl;
        cout<<"The second largest element in the given array is: "<<getSecondLargest(arr2)<<endl;
        return 0;
    }