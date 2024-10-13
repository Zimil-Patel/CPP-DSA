#include <iostream>
using namespace std;

// function definition for 1 to n sum
int getFactorial(int n){ // parameter copy of arguments
    if (n > 0){
        return n * getFactorial(n - 1);
    }
    else{
        return 1;
    }
}

int main(){

    // function calling / invokr
    cout << getFactorial(5) << endl; // argument : actual value passed in funtion 

    return 0;
}   