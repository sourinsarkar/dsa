#include <iostream>
using namespace std;

int countDigits(int puff) {
    int counter = 0;
    while(puff > 0) {
        puff /= 10;
        counter++;
    }

    return counter;
}

int countLetters(const string& str) {
    int counter = 0;
    for (char c : str) {
        if (isalpha(c)) {
            counter++;
        }
    }
    return counter;
}

int main() {
    cout << countDigits(4565465);
}