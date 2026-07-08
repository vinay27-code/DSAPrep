#include<iostream>
using namespace std;

int main(){

    int tableNumber;
    cout<<"Enter the number for which you want to print the multiplication table: ";
    cin>>tableNumber;

    int range;
    cout<<"Enter the range upto which you want to print the multiplication table: ";
    cin>>range;

    //lets print the multiplication table of the given number upto the given range using for loop.
    for(int i=0;i<=range;i++){
        cout<<tableNumber<<" * "<<i<<" = "<<tableNumber*i<<endl;
    }

    return 0;
}