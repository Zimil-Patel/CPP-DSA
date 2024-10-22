#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> vec = {1, 4, 5, 3, 10};

    
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

    

    vec.emplace(vec.begin(), 25);
    cout << endl << "Added 25 at start using emplace" << endl;

    // vec.assign(2, 100); // clear and make vector with 2 size and value 100

    int size = vec.size();
    
    // vec.resize(size);

    for (int i: vec){
        cout << i << " ";
    }

    vec.erase(vec.begin() + vec.size() - 1);

    cout << endl;

    for (int i: vec){
        cout << i << " ";
    }


    cout << endl << "size : " << vec.size();

    cout << endl << "capacity : " << vec.capacity();

    vec.clear();

    cout << endl << "is Empty : " << vec.empty();


    return 0;
}