#include <iostream>
using namespace std;

int binaryToDec(int num){
    int decimal = 0;
    int rem;
    int pow = 1;
    while(num > 0){
        decimal += (num % 10) * pow;
        num = num / 10;
        pow *= 2;
    }

    return decimal;
}


int main(){

    // function calling / invokr
    // cout << "Binary : " << decToBinary(10) << endl; // argument : actual value passed in funtion 

    int binary = 1111;

    cout << "Decimal of " << binary << " : " << binaryToDec(binary) << endl;


    return 0;
}   