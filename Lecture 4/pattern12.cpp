#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;


    for (int i = 65; i <= (65 + n); i++){
        for (int j = i; j >= 65; j--){
            cout << (char)j << " ";
        }
        cout << endl;
    }

    return 0;
}