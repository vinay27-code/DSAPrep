//lets print the following pattern using for loop.
//*****
//****
//***
//**
//*

#include<iostream>
using namespace std;

int main(){

    for(int rows=5;rows>=1;rows--){
        for(int columns=1;columns<=rows;columns++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}