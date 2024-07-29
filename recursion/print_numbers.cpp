#include <iostream>

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

int main() {
    print_name("Sourin");
    cout << "\nAnother code: " << '\n';
    print_name2(0, 3);
    return 0;
}