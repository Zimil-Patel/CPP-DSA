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

// function definition for get NCR
double getNCR(int n, int r){ // parameter copy of arguments

    double nFact = getFactorial(n);
    double rFact = getFactorial(r);
    double nMinusrFact = getFactorial(n-r);

    return nFact / (rFact * nMinusrFact);
   
}   



int main(){

    // function calling / invokr
    cout << getNCR(8, 2) << endl; // argument : actual value passed in funtion 

    return 0;
}   