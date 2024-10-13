
#include <iostream>
using namespace std;

// function definition for 1 to n sum
void getFibo(int n){ // parameter copy of arguments
    int x = 0, y = 1, z = 0;

    for (int i = 0; i <= n; i++){
        if (i == 0){
            cout << x << " ";
            continue;
        }

        if (i == 1){
            cout << y << " ";
            continue;
        }

        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
    }

    cout << endl;
}

int main(){

    // function calling / invokr
    getFibo(4); // argument : actual value passed in funtion 

    return 0;
}   