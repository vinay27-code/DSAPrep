#include<iostream>
using namespace std;

//lets try to find a given element in an array and calculate the time complexity of the code


int main(){
    int element=22;

    //The worst case is: the element is not present in the array or the element is present at the last index of the array. 
    // In both cases, we have to traverse the entire array to find the element. 
    // Therefore, the time complexity of this code is O(n), where n is the size of the array.
    //For the worst case scenario, we use Big O notation to represent the time complexity of the code, which is O(n).

    int arr1[]={1,2,3,4,5,6,7,8,9,10,22};
    for(int i=0;i<11;i++){
        if(arr1[i]==element){
            cout<<"Element found at index: "<<i<<endl;
            return i;
        }
    }

    //The best case is: the element is present at the first index of the array.
    // In this case, we have to traverse only one element to find the element.
    // Therefore, the time complexity of this code is O(1), where n is the size of the array.
    //For the best case scenario, we use omega notation to represent the time complexity of the code, which is Ω(1).

    int arr1[]={22,2,3,4,5,6,7,8,9,10,1};
    for(int i=0;i<11;i++){
        if(arr1[i]==element){
            cout<<"Element found at index: "<<i<<endl;
            return i;
        }
    }

    //The average case is: the element is present at the middle index of the array.
    // In this case, we have to traverse half of the array to find the element.
    // Therefore, the time complexity of this code is O(n/2), where n is the size of the array.
    // However, we can ignore the constant factor and write the time complexity as O(n).
    //For the average case scenario, we use theta notation to represent the time complexity of the code, which is Θ(n).

    int arr1[]={1,2,3,4,5,22,7,8,9,10,6};
    for(int i=0;i<11;i++){
        if(arr1[i]==element){
            cout<<"Element found at index: "<<i<<endl;
            return i;
        }
    }

    cout<<"Element not found in the array"<<endl;
}

//The summary is:
//Worst case time complexity: O(2^n) valid for most of the cases.   UPPER BOUND
//Best case time complexity: Ω(1) valid for most of the cases.   LOWER BOUND
//Average case time complexity: Θ(n) valid for most of the cases.   EXACT BOUND