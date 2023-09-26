#include <iostream>
#include "class.cpp"

int main() {
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    
    cout << "D1: ";
    d1.print();


    // DynamicArray d2(d1);
    // DynamicArray d3;
    // d3 = d1;
    // DynamicArray d3(d1);
    // d1.add(0,0);
    // d2.add(3000, 4);

    // cout << "D2: ";
    // d2.print();

    // d2.add(100,2);
    // d1.add(200,3);
    
    // cout << "D1: ";
    // d1.print();
    

    // cout << "D2: ";
    // d2.print();

    // cout << "D3: ";
    // d3.print();


    
    return 0;
}