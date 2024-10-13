#include <iostream>
using namespace std;

// function definition for sum of digit in number
int getSum(int num){ // parameter copy of arguments
    int sum = 0;

    while (num > 0){
        sum += (num % 10);
        num = num / 10;
    }

    return sum;
   
}   

int main(){

    // function calling / invokr
    cout << getSum(121) << endl; // argument : actual value passed in funtion 

    return 0;
}   