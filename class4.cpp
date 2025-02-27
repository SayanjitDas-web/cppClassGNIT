#include<iostream>

using namespace std;

int main(){
    int i = 0;
    while(true){
        if( i == 10000){
            break;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}

// for , while , do-while