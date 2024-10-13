#include <iostream>
using namespace std;

// STL - standard template library

// function definition for sum of 2
double getSum(double num1, double num2){
    return num1 + num2;
}

void changeX(int x){
    cout << "x changed 5 to 10 in function\n";
    x = 10;
    cout << "x in function = (" << x << ")\n";
}

int main(){
    int x = 5;

    // function calling / invokr
    cout << "x in main = (" << x << ") - Before function call\n";

    changeX(x);

    cout << "x in main = (" << x << ") - After function call\n";

    return 0;
}   