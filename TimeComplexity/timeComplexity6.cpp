#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<3;i++){           //Time complexity is: 3
        i=i*2;
    }
    return 0;
}

//Since, 3 is a constant, we can write Time Complexity: O(1)