#include<iostream>
using namespace std;

int missingNumber(vector<int>&arr){
    int size=arr.size();
    int n=size+1;

    int totalXOR=0;
    int arrayXOR=0;
    for(int i=0;i<size;i++){
        arrayXOR^=arr[i];
    }

    for(int i=1;i<=n;i++){
        totalXOR^=i;
    }

    return totalXOR^arrayXOR;
}

int main(){
    vector<int> arr;
    arr={1,2,3,5};
    cout<<"The missing number is: "<<missingNumber(arr);
    return 0;

}