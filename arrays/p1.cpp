//lets print the marks of the 5 students using an array.
//An array is a collection of similar data types. 
// It is a data structure that can hold a fixed number of values of the same type. 
// The values are stored in contiguous memory locations and can be accessed using an index.

#include<iostream>
using namespace std;

int main(){
    int marks[5]={50,70,90,67,100};
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}