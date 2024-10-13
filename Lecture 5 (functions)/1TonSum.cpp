#include <iostream>
using namespace std;

// function definition for 1 to n sum
int getTotal(int n){ // parameter copy of arguments
    if (n > 0){
        return n + getTotal(n - 1);
    }
    else{
        return 0;
    }
}

int main(){

    // function calling / invokr
    cout << getTotal(10) << endl; // argument : actual value passed in funtion 

    return 0;
}   