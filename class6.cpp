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

int main(){
    Student s1,s2;
    Data d;
    s1.studentName = "Student1";
    s1.age = 22;
    s1.stream = "food tech";
    s1.rollNo = 12;

    cout << s1.studentName << endl;
    return 0;
}

// https://github.com/SayanjitDas-web/cppClassGNIT

// structure :-
// 1. can be manipulated;
// 2. can contain multiple types;
// 3. it can hold functions;
// 4. by default all members are public;
// 5. each members hold separate memory space;