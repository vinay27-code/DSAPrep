#include<iostream>
using namespace std;

int main(){
    int n;
    for(int i=0;i<n;i+2){           //Time complexity is: n/2
        for(int j=0;j<n;j+4){           //Time complexity is: n/4
        i=i*2;
    }
    }
    return 0;
}

//
//Time Complexity: n/2 * n/4 = n^2/8 => O(n^2)