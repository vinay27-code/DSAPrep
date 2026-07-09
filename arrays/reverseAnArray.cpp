#include<iostream>
using namespace std;

int main(){
    int array[7]={67,98,22,56,77,99,32};
    int reversedArray[7];
    int j=6;
    for(int i=0;i<7;i++){
        reversedArray[j]=array[i];
        j--;
    }

    cout<<"The reversed array is: ";

    for(int i=0;i<7;i++){
        cout<<reversedArray[i]<<" ";
    }
    return 0;

}