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

void rev_print_name(int i, int count) {
    if(i == count) return;
    cout << "Maker" << '\n';
    i++;
    rev_print_name(i, count);
}

void print_numbers(int i, int n) {
    if(i > n) return;

    cout << i << '\n';
    i++;

    print_numbers(i++, n);
}

void rev_print_numbers(int i, int n) {
    if(i == n) return;

    cout << i << '\n';
    i++;
    rev_print_numbers(i, n);
}

void print_numbers_reverse(int i, int n) {
    if(i < 1) return;

    cout << i << '\n';

    print_numbers_reverse(i - 1, n);
}

void print_numbers_reverse2(int i, int n) {
    if(n < i) return;

    cout << n << '\n';
    n--;

    print_numbers_reverse2(i, n--);
}

int main() {
    // print_name("Sourin");
    // cout << "\nAnother code: " << '\n';
    // print_name2(0, 3);
    // print_numbers(1, 5);
    // cout << '\n';
    // print_numbers_reverse(5, 5);
    // cout << '\n';
    // print_numbers_reverse2(1, 5);
    // return 0;

    // ----REVISE-----

    // print_name("Maker");
    // rev_print_name(0, 5);   
    // rev_print_numbers(1, 5);   
}