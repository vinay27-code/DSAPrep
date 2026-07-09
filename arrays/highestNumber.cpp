#include<iostream>
using namespace std;

int main(){
    int marks[6]={67,98,22,56,77,99};
    int high=marks[0];
    //if we also want to find the index of highest marks, we can use another variable to store the index of highest marks.
    int index=0;        //since we considered highest to be index 0
    for(int i=1;i<6;i++){
        if(high<marks[i]){
            high=marks[i];
            index=i;
        }
    }
    cout<<"The highest marks is: "<<high<<endl;
    cout<<"The index is: "<<index<<endl;
    return 0;

}