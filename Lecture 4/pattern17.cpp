// hallow diamond pattern

// pyramid pattern
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        
        //space
        for (int j = 0; j < (n - i - 1); j++){
            cout << "  ";
        }


        // star
        cout << "* ";

        if (i != 0){

            // space
            for (int j = 0;  j < (2 * i - 1); j++){
                cout << "  ";
            }

            // star
            cout << "* ";

        }

        cout << endl;
        
    }

    for (int i = 0; i < (n - 1); i++){
        // space
        for (int j = 0; j < (i + 1); j++){
            cout << "  ";
        }

        cout << "* ";

        if (i != n - 2){
            //space
            for (int j = 0; j < 2*(n - i) - 5; j++){
                cout << "  ";
            }


            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}