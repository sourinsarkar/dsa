#include <iostream>
#include "class2.cpp"
using namespace std;

int main() {
    // Student *s = new Student;
    // s->setReg(12006422);

    // s->display();
    // cout << s->getReg() << '\n';

    // // --------------------------------------------------------------------------------------------------

    // Student *sa = new Student(26);
    // sa->display1();

    // Student *saa = new Student(200,2);
    // saa->display2();

    // ----------------------------------------------------------------------------------------------

    Student s1(10, 100);
    Student s2(20, 200);
    Student *s3 = new Student(30, 300);

    s2 = s1;
    *s3 = s1;
    s2 = *s3;

    delete s3;
}