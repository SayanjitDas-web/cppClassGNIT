#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "hello gnit!"; //c++
    //char str2[] = "hello gnit"; //c
    // cout << str << " how are you all !";
    // str.append(" how are you all !");
    cout << str << endl;
    cout << str.length()<< endl;
    cout << str.substr(0,5)<< endl;
    cout << str.at(0);
    reverse(str.begin(),str.end());
    cout << str;
    return 0;
}