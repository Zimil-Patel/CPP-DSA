#include <iostream>
using namespace std;

// function definition for minumum of 2
double getMinimum(double num1, double num2){ // parameter copy of arguments
    return num1 < num2 ? num1 : num2;
}

int main(){

    // function calling / invokr
    cout << getMinimum(10.5, 0.5) << endl; // argument : actual value passed in funtion 

    return 0;
}   