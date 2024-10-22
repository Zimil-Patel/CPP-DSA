#include<iostream>
#include <limits.h>
#include<vector>
using namespace std;

// FUNCTION TO SQURE ARRAY ELEMENTS
void changeArr(int arr[], int size){
    cout << "Called Function" << endl;
    for (int i = 0; i < size; i++){
        arr[i] *= arr[i];
    }

}

// FUNCTION TO REVERSE ARRAY ELEMENTS
void reverseArr(int arr[], int size){
    cout << "Called Function for reverse" << endl;
    int start = 0, end = size - 1;
    for (int i = 0; i < size; i++){

        if (start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }

    }

}

int main(){

    vector<int> vc = {1,2,3};
    
    int marks[5];
    int size = 5;
    int largest = INT_MIN;
    int largestIndex;
    
     for (int i = 0; i < size; i++){
        cout << "Enter value of marks[" << i << "] : ";
        cin >> marks[i];
    }

    // changeArr(marks, size);
    reverseArr(marks, size);

    for (int i = 0; i < size; i++){
        cout << "Value of marks[" << i << "] : " << marks[i] << endl;
        if (marks[i] > largest){
            largest = marks[i];
            largestIndex = i;
        }
    }

    // cout << "Largest value index : " << largestIndex;





    return 0;
}