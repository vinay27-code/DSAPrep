#include<iostream>
using namespace std;
int main(){

    int a='a'+1;            // here 'a' is a character and it is converted into its ASCII value which is 97. Then 1 is added to it and the result is 98 which is the ASCII value of 'b'. So the output will be 98.
    cout<<a<<endl;          

    char b= 'a'+1;          // here 'a' is a character and it is converted into its ASCII value which is 97. Then 1 is added to it and the result is 98 which is the ASCII value of 'b'. So the output will be 'b'.
    cout<<b<<endl;

    //endl is a manipulator which is used to insert a new line in the output. It is used to flush the output buffer and move the cursor to the next line.

    return 0;
}