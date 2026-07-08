//lets print the following pattern using for loop.
//1
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1

#include<iostream>
using namespace std;

int main(){

    for(int row=1;row<=5;row++){
        
        bool num=row%2;

        for(int column=1;column<=row;column++){
            cout<<num<<" ";
            num=!num;
        }
        cout<<endl;
    }

    return 0;
}