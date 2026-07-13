#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    //Lets reverse the array by using another array

    int reverseArray[5];            //Here, we are using another array to store the reversed array, 
                                    // so the space complexity of this code is: O(n), where n is the size of the array.
    int j=0;                        //Here, we are using another variable j to store the index of the reversed array, 
                                    // so the total space complexity of this code is: O(n+1), where n is the size of the array.
                                    // However, we can ignore the constant factor and write the space complexity as O(n).
    for(int i=4;i>=0;i--){
        reverseArray[j]=arr[i];
        j++;
    }
}

//Space Complexity: O(n)