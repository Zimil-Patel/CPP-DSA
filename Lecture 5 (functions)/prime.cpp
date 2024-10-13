#include <iostream>
using namespace std;

// function definition for check for prime
bool isPrime(int n){ // parameter copy of arguments
    
    bool isPrime = true;

    for (int i = 2; i*i <=n; i++){
    
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
        
    }

    return isPrime;

}


// function to get all primes between 2 to n
void getPrimes(int n){ // parameter copy of arguments
    
    cout << "Prime number between 2 to " << n << " : ";

    for (int i = 2; i <= n; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }

    cout << endl;
}

int main(){

    // function calling / invokr
    getPrimes(50); // argument : actual value passed in funtion 

    return 0;
}   