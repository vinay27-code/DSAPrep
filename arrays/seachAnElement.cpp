#include<iostream>
using namespace std;

int main(){
    int marks[6]={67,98,22,56,77,99};
    int findNum;
    cout<<"Enter any number you want to find if it's present in the array: "<<endl;
    cin>>findNum;
    for(int i=0;i<6;i++){
        if(marks[i]==findNum){
            cout<<findNum<<" is present at index "<<i<<endl;
            return 0;
        }
    }
    cout<<findNum<<" is not present in the array"<<endl;
    return 0;
}