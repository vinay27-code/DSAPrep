#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;  //cin is a part of iostream library which is used to take input from the user. 

    //if-else if statement is used to execute a block of code if a specified condition is true. It is a part of control statements in C++.

    if(marks>=90){  //if the marks are greater than or equal to 90
        cout<<"You got A grade.";  //then print "You got A grade."
    }
    else if(marks>=80){  //if the marks are greater than or equal to 80
        cout<<"You got B grade.";  //then print "You got B grade."
    }
    else if(marks>=70){  //if the marks are greater than or equal to 70
        cout<<"You got C grade.";  //then print "You got C grade."
    }
    else if(marks>=60){  //if the marks are greater than or equal to 60
        cout<<"You got D grade.";  //then print "You got D grade."
    }
    else{  //if the marks are less than 60
        cout<<"You got F grade.";  //then print "You got F grade."
    }

    return 0;
}