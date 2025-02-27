#include <iostream>
#include <string>

using namespace std;

int add(int num1, int num2){
    // int result = num1 + num2;
    // return result;
    return num1 += num2;
}

int main(){
    // int 1class
    // int -var
    // for, namespace ,class,if
    int val = 1;
    char str1[] = "hello gnit";
    cout << str1[0];
    unsigned int num = 2, num2 = 3;
    long num3 = 4;
    unsigned short num4 = 6;
    float fl = 2.5;
    double dbl = 200.5;
    char ch = 'a';
    bool bl = true; // false
    string str = "hello gnit";
    cout << add(2,3);
    cout << str;
    return 0;
}