#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter a day number (1-7): ";
    cin>>day;  //cin is a part of iostream library which is used to take input from the user.
    //switch statement is used to execute a block of code based on the value of a variable. It is a part of control statements in C++.
    switch(day){  //switch statement
        case 1: //if the value of day is 1
            cout<<"Monday";  //then print "Monday"
            break;  //break statement is used to exit the switch statement.
        case 2: //if the value of day is 2
            cout<<"Tuesday";  //then print "Tuesday"
            break;  //break statement is used to exit the switch statement.
        case 3: //if the value of day is 3
            cout<<"Wednesday";  //then print "Wednesday"            
            break;  //break statement is used to exit the switch statement.
        case 4: //if the value of day is 4
            cout<<"Thursday";  //then print "Thursday"
            break;  //break statement is used to exit the switch statement.
        case 5: //if the value of day is 5
            cout<<"Friday";  //then print "Friday"
            break;  //break statement is used to exit the switch statement.
        case 6: //if the value of day is 6
            cout<<"Saturday";  //then print "Saturday"
            break;  //break statement is used to exit the switch statement.
        case 7: //if the value of day is 7
            cout<<"Sunday";  //then print "Sunday"
            break;  //break statement is used to exit the switch statement.
        default:  //if the value of day is not between 1 and 7
            cout<<"Invalid day number";  //then print "Invalid day number"
    }
    
    return 0;  //return 0; statement is used to indicate that the program has executed successfully. It is a way to communicate with the operating system that the program has completed its execution without any errors.
}