#include<iostream>
using namespace std;

//do-while loop is similar to while loop but the only difference is that in do-while loop the condition is checked after executing the statements inside the loop. So, the statements inside the do-while loop will be executed at least once even if the condition is false.   

int main(){
    int i=1;

    do{
        cout<<i<<" ";
        i++;
    }while(i<=10);

    return 0;
}