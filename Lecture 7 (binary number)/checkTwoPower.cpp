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


int main(){
    
    cout << isPowerOfTwo(33) << endl;

    return 0;
}