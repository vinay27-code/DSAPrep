#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;  //cin is a part of iostream library which is used to take input from the user.

    //if statement is used to execute a block of code if a specified condition is true. It is a part of control statements in C++.
    if(age>=18){  //if the age is greater than or equal to 18
        cout<<"You are eligible to vote.";  //then print "You are eligible to vote."
    }
    else{  //if the age is less than 18
        cout<<"You are not eligible to vote.";  //then print "You are not eligible to vote."
    }   
    return 0;  //return 0; statement is used to indicate that the program has executed successfully. It is a way to communicate with the operating system that the program has completed its execution without any errors.
}