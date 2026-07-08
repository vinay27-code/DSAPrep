//let's print palindromic pattern using for loop.
//    1
//   121
//  12321
// 1234321  
//123454321

//4 space 1 number
//3 space then 12 then 1
//2 space then 123 then 21
//1 space then 1234 then 321
//0 space then 12345 then 4321

#include<iostream>
using namespace std;

int main(){
    for(int rows=4;rows>=0;rows--){
        for(int spaces=0;spaces<rows;spaces++){
            cout<<" ";
        }
        for(int numbers=1;numbers<=5-rows;numbers++){
            cout<<numbers;
        }
        for(int decreasingNumbers=5-rows-1;decreasingNumbers>=1;decreasingNumbers--){
            cout<<decreasingNumbers;
        }
        cout<<endl;
    }
    return 0;
} 