#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> vec = {1, 4, 5, 3, 10};

    cout << "size: " << vec.size() << endl;
    
    cout << "Adding 24 at end" << endl;
    vec.push_back(24);

    for (int i: vec){
        cout << i << " ";
    }

    cout << endl << "Removing 24 from end" << endl;
    vec.pop_back();

    for (int i: vec){
        cout << i << " ";
    }


    cout << endl << "back : " << vec.back();
    
    cout << endl << "front : " << vec.front();

    cout << endl << "value at index 3 : " << vec.at(2);

    return 0;
}