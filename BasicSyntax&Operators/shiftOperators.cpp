#include<iostream>
using namespace std;
int main(){
    int a = 10;         // the value of a in binary is 01010
    //Shift operators are used to shift the bits of a number to the left or right. The shift operators are: <<, >>.

    //a=10 in binary is 1010.00000, now when we shift the bits of a to the left by 2 positions, the new value of a will be 101000.00000 which is equal to 40 in decimal. So the output will be 40.
    //a=10 in binary is 1010.00000, now when we shift the bits of a to the right by 2 positions, the new value of a will be 0010.10000 which is equal to 2 in decimal. So the output will be 2.
    cout<<"a << 2: "<<(a<<2)<<endl;  //<< is a shift operator which is used to shift the bits of a number to the left. Here, the bits of a are shifted to the left by 2 positions, so the output will be 40.
    cout<<"a >> 2: "<<(a>>2)<<endl;  //>> is a shift operator which is used to shift the bits of a number to the right. Here, the bits of a are shifted to the right by 2 positions, so the output will be 2.
    return 0;
}