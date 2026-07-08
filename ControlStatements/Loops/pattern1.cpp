//lets print the following pattern using for loop.
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){

    for(int j=1;j<=5;j++){
        for(int i=1; i<=5;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    }

    return 0;

    // A nested for loop is used to print the pattern. The outer loop is used to print the rows and the inner loop is used to print the columns. The outer loop runs 5 times and the inner loop runs 5 times for each iteration of the outer loop. The inner loop prints the numbers from 1 to 5 in each iteration of the outer loop. After printing the numbers, a new line is printed using cout<<endl; to move to the next row.  
}
