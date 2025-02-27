#include <iostream>
#include <string>

using namespace std;

int findMax(int arr[], int size){
    int maxVal = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main()
{
    // dataType arrayName[size] = {};
    // int intArr[3];
    // intArr[1] = 11;
    // intArr[0] = 22;
    // intArr[2] = 33;
    // int intArr[10] = {1,2,3};
    // intArr[3] = 11;
    // intArr[4] = 22;
    // intArr[5] = 33;
    // for(int i = 0; i < 6; i++){
    //     cout << intArr[i] << endl;
    // }
    int twoDArr[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };
    for (int i = 0; i < 2; i++)
    {
        // string row = "";
        for (int j = 0; j < 3; j++)
        {
            // row += " " + twoDArr[i][j];
            cout << twoDArr[i][j] << " ";
        }
        cout << endl;
    }

    int threeDArr[3][3][3] = {
        {
            {1,2,3},{4,5,6},{7,8,9}
        },
        {
            {10,11,12},{13,14,15},{16,17,18}
        },
        {
            {19,20,21},{22,23,24},{25,26,27}
        },
    };
    for(int i = 0; i < 3; i++){
        cout << "in layer: " << i <<endl;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3;k++){
                cout << threeDArr[i][j][k] << "\t";
            }
            cout << endl;
        }
    }

    int arr[] = {12,33,42,50,20};
    cout << findMax(arr,5);

    int num = 22;
    int* ptr = &num;
    cout << *ptr;
    return 0;
}