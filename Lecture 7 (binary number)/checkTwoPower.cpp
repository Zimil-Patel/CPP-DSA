#include<iostream>
using namespace std;

// << - a * 2(pow - b)
// >> - a / 2(pow - b)

// CODE TO CHECK IF NUMBER IS POWER OF TWO
bool isPowerOfTwo(int n){

    if (n == 0)
        return 0;

    while (n != 1){
        if (n % 2 != 0){
            return 0;
        }

        n /= 2;
    }

    return 1;

}


// CODE TO CHECK IF NUMBER IS POWER OF TWO (USING BITWISE)
bool isPowerOfTwoUsingBit(int n){

    // IF THIS BIT COUNT = 1 THEN IT IS POWER OF TWO ELSE NOT
    int bitCount = 0;

    if (n == 0)
        return 0;
    
    while (n > 0){

        if ((n & 1) == 1){
            bitCount++;
        }

        n = n >> 1;

    }

    if (bitCount == 1)
        return 1;

    return 0;

}


int main(){
    
    cout << isPowerOfTwo(32) << endl;
    cout << isPowerOfTwoUsingBit(32) << endl;

    return 0;
}