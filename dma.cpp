#include<iostream>
#include<string>

using namespace std;

int main(){
    int size;
    cout<<"enter size of the array: ";
    cin >> size;

    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        cout << "enter value to add in position:["<< i <<"]:";
        cin >> arr[i];
    }
    // string formatedArr = "[";
    cout << "[";
    for(int j = 0; j < size; j++){
    
        cout << arr[j] << ",";
    }
    cout << "]";

    delete[] arr;
    return 0;
}