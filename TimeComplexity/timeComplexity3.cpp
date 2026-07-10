#include<iostream>
using namespace std;

int main(){
    int n;
    for(int i=0;i<n;i++){           //Time complexity is: n
        i=i*2;
    }
    for(int i=0;i<n;i+2){           //Time complexity is: n/2
        i=i*2;
    }
    return 0;
}

//
//Time Complexity: n+n/2 = 3n/2 => O(n)