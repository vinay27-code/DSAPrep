#include<iostream>
using namespace std;

int main(){
    int n;
    //case 1

    for(int i=1;i<n;i=i*2){             //The time complexity of this loop is O(log n base 2), 
                                        // because the value of i is doubled in each iteration, and it will reach n in logarithmic time.
        cout<<i;
    }
//case 2
 for(int i=1;i<n;i=i*3){             //The time complexity of this loop is O(log n base 3), 
                                        // because the value of i is tripled in each iteration, and it will reach n in logarithmic time.
        cout<<i;
    }

    //case 3
    for(int i=1;i<n;i=i/2){         //The time complexity of this loop is O(log n base 2), 
                                        // because the value of i is halved in each iteration, and it will reach n in logarithmic time.
        cout<<i;
    }

    //case 4
    for(int i=1;i<n;i=i/3){         //The time complexity of this loop is O(log n base 3), 
                                        // because the value of i is in each iteration, and it will reach n in logarithmic time.
        cout<<i;
    }

    return 0;
}