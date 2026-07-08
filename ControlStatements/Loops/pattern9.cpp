//lets print aplphabet pattern using for loop.
//A
//A B 
//A B C
//A B C D
//A B C D E

#include<iostream>
using namespace std;

int main(){

    // for(char i='A';i<'B';i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // for(char i='A';i<'C';i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // for(char i='A';i<'D';i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(char i='A';i<'E';i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    for(int rows=1;rows<=5;rows++){
        for(char i='A';i<('A'+rows);i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}