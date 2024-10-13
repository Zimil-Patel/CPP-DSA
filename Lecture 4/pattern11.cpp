// floyd's triangle

#include<iostream>
using namespace std;

int main(){

    int n;
    int count = 1;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << count++ << " "; 
        }
        cout << endl;
    }

    return 0;
}