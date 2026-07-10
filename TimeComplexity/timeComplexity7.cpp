#include<iostream>
using namespace std;

//lets add the first 10 natural numbers by 2 methods, and calculate their time complexity


int main(){
    //Method 1
    int sum=0;
    for(int i=1;i<=10;i++){           //Time complexity is: 10
        sum+=i;
    }

    cout<<sum<<endl;

    //Method 1

    int formulaSum=10*(10+1)/2;     //Time complexity is: 1

    cout<<formulaSum<<endl;
    return 0;
}

//Since, 3 is a constant, we can write Time Complexity: O(1)