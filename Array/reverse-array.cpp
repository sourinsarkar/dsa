#include <iostream>
using namespace std;

int main() {
    // Approach 1 -------------

    int poo[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(poo) / sizeof(poo[0]);

    cout << "Before reverse: ";
    for (int i = 0; i < size; i++)
        cout << poo[i] << ' ';

    // reverse(poo, poo + size);

    // cout << "\nAfter reverse: ";
    // for(int i = 0; i < size; i++) cout << poo[i] << ' ';

    // Approach 2 ---------------

    int start = 0, end = size - 1;
    while(start <= end) {
        swap(poo[start], poo[end]);
        start++;
        end--;
    }

    cout << "\nAfter reverse: ";
    for (int i = 0; i < size; i++)
        cout << poo[i] << ' ';

    return 0;
}