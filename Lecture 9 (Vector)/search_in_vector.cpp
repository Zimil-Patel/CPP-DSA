#include<iostream>
#include<vector>
using namespace std;

// FUNCTION TO SEARCH VALUE IN VECTOR
int serchVal(vector<int>& vec, int search){
    for (int i = 0; i < vec.size(); i++){
        if ((search ^ vec[i]) == 0){
            return i;
        }
    }
    return -1;
}


int main(){

    vector<int> vec = {1, 4, 6, 11, 55,78};

    int search = 0;

    cout << "found at : " << serchVal(vec, search) << endl; 

    return 0;
}
