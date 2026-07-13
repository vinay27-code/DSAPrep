#include<iostream>
using namespace std;

int main(){
    int n;
    for(int i=0;i<n;i=i*2){             //The time complexity of this loop is infinite, 
                                        // because the value of i will always be 0, and it will never reach n. 
                                        // Therefore, the loop will run indefinitely.
        cout<<i;
    }
    return 0;
}