//OOP
// -class (main component)
// -inheritance
// -encapsulation
// -polymorphism
// -abstraction
#include<iostream>
#include<string>

using namespace std;

class Car{
   public:
      string brand;
      string model;
      int year;
    
    Car(string bnd, string mdl, int yr){
        brand = bnd;
        model = mdl;
        year = yr;
        cout << "constructor called";
    }
    ~Car(){
        cout << "destructor called";
    }
    void display(){
        cout << "brand is: " << brand << endl;
        cout << "model is: " << model << endl;
        cout << "year is: " << year << endl;
    }
};

//encapsulation
class BankAccount{
    private:
       double balance;
    public:
       BankAccount(double b){
           balance = b;
       }
    double withdraw(double amount){
        if( amount > balance ){
            cout << "Don't have enough balance!" << endl;
        }else{
            balance -= amount;
            return balance;
        }
    } // getter

    void deposit(double amount){
        balance += amount;
        cout << "Your total balance is :" << balance << endl;
    }//setter
};

//inheritance
class Animal{ // base class
    public:
       void eat(){
        cout << "animal is eating.." << endl;
       }
       void walk(){
        cout << "animal is walking.." << endl;
       }
};

class Dog : public Animal{ // derived class
    public:
       void bark(){
        cout << "Dog is barking" << endl;
       }
       void walk(){
        cout << "dog is walking" << endl;
       }
};

class A{
    public: 
    void funcA(){
        cout << "this is function A" << endl;
    }
};

class B{
    public: 
    void funcB(){
        cout << "this is function B" << endl;
    }
};

class C : public A, public B{
    public:
    void funcC(){
        cout << "this is function C" << endl;
    }
};

//polymorphism


int main(){
    // Car m1("Tesla", "cyber truck", 2023);
    // m1.display();
    // BankAccount account(1000);
    // account.deposit(500);
    Dog d;
    Animal a;
    d.bark();
    d.eat();
    a.walk();
    d.walk();

    C c;
    c.funcA();
    c.funcB();
    c.funcC();
    return 0;
}