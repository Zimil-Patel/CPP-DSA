#include<iostream>
#include<vector>
using namespace std;

// FUNCTION TO REVERSE VECTOR
void reverseVec(vector<int>& vec){
    int start = 0, end = vec.size() - 1;

    while (start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}


int main(){

    vector<int> vec = {1, 4, 6, 11, 55,78};

    cout << "Before reverse: " << endl;

    for (int val : vec){
        cout << val << " ";
    }

    reverseVec(vec);

    cout << endl << "After reverse: " << endl;

    for (int val : vec){
        cout << val << " ";
    }
    return 0;
}
