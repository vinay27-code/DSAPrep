#include<iostream>
using namespace std;

int main(){
    int marks[6]={67,98,22,56,77,99};
    int low=marks[0];
    //if we also want to find the index of lowest marks, we can use another variable to store the index of lowest marks.
    int index=0;        //since we considered lowest to be index 0
    for(int i=1;i<6;i++){
        if(low>marks[i]){
            low=marks[i];
            index=i;
        }
    }
    cout<<"The least marks is: "<<low<<endl;
    cout<<"The index is: "<<index<<endl;
    return 0;

}