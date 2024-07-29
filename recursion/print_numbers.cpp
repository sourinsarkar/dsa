#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_name(string name, int count = 0) {
    if (count == 5) return;
    count++;

    cout << name << '\n';
    print_name(name, count);

}

void print_name2(int i, int count) {
    if( i == count) return;

    cout << "Sourin 2" << '\n';
    i++;
    print_name2(i, count);
}

void print_numbers(int i, int n) {
    if(i > n) return;

    cout << i << '\n';
    i++;

    print_numbers(i++, n);
}

int main() {
    print_name("Sourin");
    cout << "\nAnother code: " << '\n';
    print_name2(0, 3);
    print_numbers(1, 5);
    return 0;
}