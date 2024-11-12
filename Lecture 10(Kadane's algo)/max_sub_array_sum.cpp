#include<iostream>
#include<limits.h>
using namespace std;

int getMaxSubArraySum(int arr[], int size){
    
    // for (int start = 0; start < size; start++){

    //     for (int end = start; end < size; end++){

    //         for (int i = start; i < end; i++){

    //             cout << arr[i];
    //         }

    //         cout << " ";

    //     }
    //     cout << endl;

    // }

    int maxSum = INT_MIN, currentSum = 0;


// BRUTE FORCE APPROCH
    // for (int start = 0; start < size; start++){

    //     currentSum = 0;
        
    //     for (int i = start; i < size; i++){

    //         currentSum += arr[i];
    //         maxSum = max(currentSum, maxSum);

    //     }

    // }
    
// KADANE'S ALGORITHM
    for (int i = 0; i < size; i++){

        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0){
            currentSum = 0;
        }
    }

    return maxSum;
}

int main(){
    int  arr[] = {3, -4, 5, 4, -1, 7, -8};
    
    cout << endl << "Max Subarray srum: " << getMaxSubArraySum(arr, 7);
}   