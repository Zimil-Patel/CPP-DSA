#include<iostream>
#include <limits.h>
using namespace std;

int main(){
    
    int marks[5];
    int size = 5;
    int largest = INT_MIN;
    int largestIndex;
    
     for (int i = 0; i < size; i++){
        cout << "Enter value of marks[" << i << "] : ";
        cin >> marks[i];
    }

    for (int i = 0; i < size; i++){
        cout << "Value of marks[" << i << "] : " << marks[i] << endl;
        if (marks[i] > largest){
            largest = marks[i];
            largestIndex = i;
        }
    }

    cout << "Largest value index : " << largestIndex;



    return 0;
}