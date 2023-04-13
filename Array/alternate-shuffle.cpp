#include <iostream>
using namespace std;

void print(int poo[], int n) {
    for(int i = 0; i < n; i++) {
        cout << poo[i] << ' ';
    }
}

void swapTwo(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void swapThree(int &a, int &b, int &c) {
    a = a ^ b ^ c; 
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;
}

void rearrangeArray(int poo[], int n) {
    if(n % 2 == 0) { // 1 pe odd | 0 pe even
        for(int i = 0; i < n - 1; i+=2) {
            swapTwo(poo[i], poo[i + 1]);
        }
    }
    else {
        for(int i = 0; i < n - 3; i+=2) {
            swapTwo(poo[i], poo[i + 1]);
        }

        swapThree(poo[n - 1], poo[n - 2], poo[n - 3]);
    }

    print(poo, n);
}

int main() {
    int poo[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(poo) / sizeof(poo[0]);
    rearrangeArray(poo, size);

    return 0;
}