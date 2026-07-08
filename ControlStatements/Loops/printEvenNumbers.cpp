#include<iostream>
using namespace std;
int main(){
    //lets print the even numbers from 1 to 10 using for loop.
    for(int i=1;i<=10;i++){
        if(i%2==0){
            cout<<i<<" is an even number"<<endl;
        }
    }

    //we can optimize the above code by starting the loop from 2 and incrementing by 2 in each iteration. This way we can avoid the if condition and directly print the even numbers.
    for(int i=2;i<=20;i+=2){
        cout<<i<<" is an even number"<<endl;
    }
    return 0;
}