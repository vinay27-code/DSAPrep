//lets print the following pattern using for loop.
// a b c d e
// a b c d e
// a b c d e 
// a b c d e
// a b c d e 


#include<iostream>
using namespace std;

int main(){

    for(int j=1; j<=5; j++){
        for(char i='a';i<='e';i++){
        cout<<i<<" ";
    }
    cout<<endl;
    }

    return 0;
}
