//time complexity is defined as the time taken by an algorithm to run as a function of the length of the input. 
// It is denoted using big O notation. 
// The time complexity of an algorithm is a measure of the amount of time it takes to complete as a function of the length of the input. 
// It is usually expressed in terms of the size of the input, n, and is often used to compare the efficiency of different algorithms.

//lets find the time complexity of the following code snippet
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"The sum of the given array is: "<<sum;
    return 0;
}

//In the above code snippet, we have a for loop that iterates over the array of size 5.
// The time complexity of this code snippet is O(n), where n is the size of the array. 
// This is because the for loop runs n times, and each iteration takes constant time O(