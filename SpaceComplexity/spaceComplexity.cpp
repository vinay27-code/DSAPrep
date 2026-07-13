#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //The space complexity of the following code is: O(1)
    //This is because we are just using i variable to store the value of the loop counter, and it is not dependent on the size of the input n.

    for(int i=0;i<n;i++){
        cout<<i;
    }
}

//Space Complexity: O(1)