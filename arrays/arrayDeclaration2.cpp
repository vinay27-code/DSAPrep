#include<iostream>
#include<vector>
using namespace std;

//There's another way to declare an array in C++ using vector. 
// Vector is a dynamic array which can grow and shrink in size. 
// It is a part of the Standard Template Library (STL) in C++.

void printArray(vector<int>&array, int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    vector<int> array(5);
    array={1,2,3,4,5};
    printArray(array,array.size());

    //we can dynamically add elements to the array , but only at the last index
    array.push_back(6);
     printArray(array,array.size());


return 0;

}

