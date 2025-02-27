#include <iostream>

using namespace std;

int main(){
    bool isLoggedin = false;
    int add, sub; 
    int check = 0;
    cout << "Enter your choice: ";
    cin >> check;
    switch (check)
    {
    case 1:
        int num1, num2;
        cout << "please enter first num: ";
        cin >> num1;
        cout << "please enter second num: ";
        cin >> num2;
        cout << "Addition is :" << num1 + num2;
        break;
    case 2:
        cout << "in the case 2";
        break;
    default:
        break;
    }
    return 0;
}