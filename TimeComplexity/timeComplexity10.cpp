#include<iostream>
using namespace std;

int main(){
    int n;

    //The time complexity of the following code is: O(n^3)

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<"hello";
            }
        }
    }
    return 0;
}