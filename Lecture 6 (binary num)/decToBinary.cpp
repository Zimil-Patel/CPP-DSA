#include <iostream>
using namespace std;

int decToBinary(int num){
    int binary = 0;
    int rem;
    int pow = 1;
    while(num > 0){
        binary += (num % 2) * pow;
        num = num / 2;
        pow *= 10;
    }

    return binary;
}


int main(){

    // function calling / invokr
    // cout << "Binary : " << decToBinary(10) << endl; // argument : actual value passed in funtion 

    for (int i = 1; i <= 10; i++){
        cout << "Binary of " << i << " : " << decToBinary(i) << endl;
    }

    return 0;
}   