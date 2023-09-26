#include <iostream>

// int add(int& a, int& b) {
//     b = 40;
//     return a + b;
// }

void add(int& a, int& b) {
    b = 40;
    std::cout << a + b << '\n';
}

int main() {
    int a = 10, b = 20;
    // std::cout << add(a,b) << '\n';
    add(a, b);
    std::cout << "a: " << a << '\n';    
    std::cout << "b: " << b << '\n';
    return 0;
}