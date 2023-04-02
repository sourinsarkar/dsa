#include <iostream>
using namespace std;

void uniqueElement(int poo[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        int number = poo[i];
        if(count == 1) {
            cout << poo[i] << '\n';
        }

        count++;
    }
}

int main() {
    int poo[] = {1,1,2,4,4,4,7,9,7,7,9};
    int size = sizeof(poo) / sizeof(poo[0]);

    return 0;
}