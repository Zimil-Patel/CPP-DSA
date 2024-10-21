#include<iostream>
using namespace std;

// << - a * 2(pow - b)
// >> - a / 2(pow - b)

// CODE TO REVERSE NUMBER
int reverseOf(int n){

    int reverse = 0;
    int rem;

    while (n > 0){
        rem = n % 10;
        reverse = rem + (reverse * 10);
        n /= 10;
    }

    return reverse;

}



int main(){
    
    cout << reverseOf(32) << endl;

    return 0;
}