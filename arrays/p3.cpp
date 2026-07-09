//In this program, lets get to know about why indexing starts from 0 in arrays in C++.
//Basically, the index of an array is the offset from the base address of the array. 
// The base address is the address of the first element of the array. 
// So, the index of the first element is 0, the index of the second element is 1, and so on.
// We calculate the address of an element in an array using the following formula:
// Address of arr[i] = Base address of arr + index * size of data type

#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    cout<<"The base address of the array is: "<<arr<<endl;
    cout<<"The address of the first element is: "<<&arr[0]<<endl;
    cout<<"The address of the second element is: "<<&arr[1]<<endl;
    cout<<"The address of the third element is: "<<&arr[2]<<endl;
    cout<<"The address of the fourth element is: "<<&arr[3]<<endl;
    cout<<"The address of the fifth element is: "<<&arr[4]<<endl;

    return 0;
}

// The base address of the array is: 0x16bab28e0
// The address of the first element is: 0x16bab28e0
// The address of the second element is: 0x16bab28e4
// The address of the third element is: 0x16bab28e8
// The address of the fourth element is: 0x16bab28ec
// The address of the fifth element is: 0x16bab28f0