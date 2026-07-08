#include<iostream>  //iostream is a header file that contains input and output stream objects. It is used to perform input and output operations in C++.
using namespace std;  //namespace is a declarative region that provides a scope to the identifiers

int main(){             // main function is the entry point of the program. It is the first function that is executed when the program starts to run.
    int a=10;           //int is a data type that is used to store integer values. It is a part of the C++ Standard Library and is defined in the <iostream> header file.
    float b= 22.5;      //float is a data type that is used to store decimal values. It is a part of the C++ Standard Library and is defined in the <iostream> header file.
    char c='a';         //char is a data type that is used to store single characters. It is a part of the C++ Standard Library and is defined in the <iostream> header file.
    bool d=true;        //bool is a data type that is used to store boolean values. It is a part of the C++ Standard Library and is defined in the <iostream> header file.

    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;  //cout is a part of iostream library which is used to print the output on the console.

    cout<<sizeof(a)<<endl;  //sizeof is an operator that returns the size of a variable or data type in bytes. It is used to determine the amount of memory allocated for a variable or data type.
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;

    //size of an int variable is 4 bytes, size of a float variable is 4 bytes, size of a char variable is 1 byte and size of a bool variable is 1 byte.

    string str="Vinay Babu Machha";  //string is a data type that is used to store a sequence of characters. It is a part of the C++ Standard Library and is defined in the <string> header file.

    cout<<sizeof(str)<<endl;  //sizeof is an operator that returns the size of a variable or data type in bytes. It is used to determine the amount of memory allocated for a variable or data type.

    cout<<str.length()<<endl;  //length() is a member function of the string class that returns the number of characters in the string. It is used to determine the length of a string.
    return 0;       //return 0; statement is used to indicate that the program has executed successfully. It is a way to communicate with the operating system that the program has completed its execution without any errors.

}

//difference between sizeof() and length() function is that sizeof() returns the size of a variable or data type in bytes, whereas length() function returns the number of characters in a string.

//c++ code is converted into .exe file which is an executable file. This file can be run on any machine without the need of c++ compiler.
