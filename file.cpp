#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string studentName, email, year, quite;
    int number;
    ofstream outFile("example.txt");
    if (!outFile)
    {
        cout << "error to open!";
        return 1;
    }
    while (true)
    {
        cout << "want to exit ? [y/n]: ";
        cin >> quite;
        if (quite == "y")
        {
            break;
        }
        else
        {
            cout << "Enter student name: ";
            getline(cin,studentName);
            cout << endl;
            outFile << "student name: " << studentName << endl;
            cout << "Enter student email id: ";
            getline(cin,email);
            cout << endl;
            outFile << "email: " << email << endl;
            cout << "Enter student year: ";
            getline(cin,year);
            cout << endl;
            outFile << "year: " << year << endl;
            cout << "Enter student number: ";
            cin >> number;
            outFile << "phone number: " << number << endl;
        }
    }

    outFile.close();
    cout << "data written.";
    return 0;
}