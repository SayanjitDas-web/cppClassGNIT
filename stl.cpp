//STL - Standard Template Library
// or STL container

//components of stl
//1. Containers
// -vector
// -set
// -list
// -array
// -stack
// -queue

//2. Algorithms
//3. Iterators
//4. Functions

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.size();
    v.insert(v.begin() + 3,55);
    v.erase(v.begin() + 1);

    for(int i: v){
        cout << i << endl;
    }
    return 0;
}