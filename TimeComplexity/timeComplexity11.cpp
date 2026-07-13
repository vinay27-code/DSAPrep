#include<iostream>
using namespace std;

int main(){
    int n;

    //The time complexity of the following code is: O(n^3)

    for(int i=1;i<n;i++){           //Time complexity of outer loop is: n
        //the inner loop will run for i*i times, so the time complexity of the inner loop is: i*i. 
        // Since i is running from 1 to n, the time complexity of the inner loop will be: 1*1 + 2*2 + 3*3 + ... + n*n = n(n+1)(2n+1)/6 = O(n^3)
        for(int j=0;j<i*i;j++){           
        cout<<"Hello";
    }
    }
    return 0;
}

//Time Complexity: O(n^3)