// pyramid pattern
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        
        // left space
        for (int j = 0; j < (n - i - 1); j++){
            cout << "  ";
        }

        // left triangle
        for (int j = 0; j <= i; j++){
            cout << j + 1 << " ";
        }

        for (int j = i; j > 0; j--){
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}