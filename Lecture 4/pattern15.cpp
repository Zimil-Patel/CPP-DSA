// inverted triangle

#include<iostream>
using namespace std;

int main(){

    int n;
    char count = 'A';
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){


        for (int j = 0; j < i; j++){
            cout << "  ";
        }

        for (int j = 0; j < n - i; j++){
            cout << (char)count << " ";
        }
        count++;
        cout << endl;
    }

    return 0;
}