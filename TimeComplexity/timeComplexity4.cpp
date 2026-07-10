#include<iostream>
using namespace std;

int main(){
    int n;
    for(int i=0;i<n;i+2){           //Time complexity is: n/2
        i=i*2;
    }
    for(int i=0;i<n;i+4){           //Time complexity is: n/4
        i=i*2;
    }
    return 0;
}

//
//Time Complexity: n/2+n/4 = 3n/4 => O(n)