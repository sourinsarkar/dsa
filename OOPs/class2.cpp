#include <iostream>

using namespace std;

class Student {
    int reg;
public:
    int roll;
    int utility() {
        return 0;
    }
    
    void setReg(int x);

    int getReg();

    void display1();

    void display2();

    Student();

    Student(int x);
    
    Student(int x, int y);

    Student(Student &s);

    ~Student() {
        cout << "Destructor called." << '\n';
    }
};

void Student :: setReg(int x) {
    reg = x;
}

int Student :: getReg() {
    return reg;
}

void Student :: display1() {
    cout << reg << '\n';
}

void Student :: display2() {
    cout << reg << ' ';
    cout << roll << '\n';
}
Student :: Student() {
    cout << "Constructor called" << '\n';
}
Student :: Student(int x) {
    reg = x;
}

Student :: Student(int x, int y) {
    reg = x;
    roll = y;
}

Student :: Student(Student &s) {
    reg = s.reg;
    roll = s.roll;
}