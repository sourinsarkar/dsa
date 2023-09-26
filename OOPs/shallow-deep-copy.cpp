#include <iostream>
#include <string.h>

class Person {
private:

public:
    int age;
    char* name;
    // Shallow copy
    // Person(char* name, int age) : name(name), age(age) {}
    
    // Deep Copy
    Person(char* name, int age) {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    Person(const Person& p) {
        this->age = p.age;

        // this->name = p.name; // it will become a shallow copy

        this->name = new char[strlen(p.name) + 1];
        strcpy(this->name, p.name);
    }

    void display() {
        std::cout << "Name: " << name << '\n';
        std::cout << "Age: " << age << '\n';
    }

    ~Person() {
        delete[] name;
    }
};

int main() {
    char name[] = "footext";
    
    std::cout << "P1:" << '\n';
    Person p1(name, 10);
    p1.display();

    // name[6] = 'x';
    
    // std::cout << "P2:" << '\n';
    // Person p2(name, 20);
    // p2.display();

    // std::cout << "P1:" << '\n';
    // p1.display();

    std::cout << "P2: " << '\n';
    Person p2(p1);
    p2.display();

    p2.name[3] = 'x';
    p2.age = 30;
    
    std::cout << "P2: " << '\n';
    p2.display();


    return 0;
}