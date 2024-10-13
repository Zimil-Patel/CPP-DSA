// hallow diamond pattern

// pyramid pattern
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        
        // stars
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }

        // space
        for (int j = 0; j < 2 * (n - i) - 2; j++){
            cout << "  ";
        }

        // stars
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }

        cout << endl;    
        
    }


     for (int i = 0; i < n; i++){
        
        // stars
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }

        // space
        for (int j = 0; j < 2 * i; j++){
            cout << "  ";
        }

          // stars
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }

        cout << endl;    
        
    }



    return 0;
}