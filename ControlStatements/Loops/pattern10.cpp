//lets print the following alphabet pattern using for loop.
//A
//B B
//C C C
//D D D D
//E E E E E

#include<iostream>
using namespace std;

int main(){
    // for(int i=1;i<2;i++){
    //     cout<<'A'<<" ";
    // }

    // cout<<endl;

    // for(int i=1;i<3;i++){
    //     cout<<'B'<<" ";
    // }

    // cout<<endl;

    //  for(int i=1;i<4;i++){
    //     cout<<'C'<<" ";
    // }

    // cout<<endl;

    //  for(int i=1;i<5;i++){
    //     cout<<'D'<<" ";
    // }

    // cout<<endl;

    for(int rows=1;rows<=5;rows++){
        for(int i=1;i<=rows;i++){
            cout<<char('A'+rows-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}