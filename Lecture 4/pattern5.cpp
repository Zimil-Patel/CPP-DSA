#include<iostream>
using namespace std;

int main(){

    char count = 'A';
    int n;

    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << count << " ";
            count++; 
        }
        cout << endl;
    }


    return 0;

}