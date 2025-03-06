#include<iostream>
#include<string>

using namespace std;

struct Student{
   string studentName;
   int age;
   string stream;
   int rollNo;
};

union Data{
  int val1;
  float val2;
  char val3;
};

//enumeration
enum Colour{
    RED = true,
    BLUE = 200,
    YELLOW = 300,
    GREEN = 400
};

typedef unsigned int uint;
typedef string str;

int main(){
    float fl = 23.33;
    int inte = (int) fl;
    str str1 = "this is string";
    cout << inte << endl;
    uint num = -22;
    cout << num << endl;
    Student s1,s2;
    Data d;
    Colour c = GREEN;
    cout << c << endl;
    s1.studentName = "Student1";
    s1.age = 22;
    s1.stream = "food tech";
    s1.rollNo = 12;

    cout << s1.studentName << endl;
    return 0;
}

// https://github.com/SayanjitDas-web

// structure :-
// 1. can be manipulated;
// 2. can contain multiple types;
// 3. it can hold functions;
// 4. by default all members are public;
// 5. each members hold separate memory space;