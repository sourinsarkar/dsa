#include <iostream>
using namespace std;
 
int sumOfDigits(int n) {
    if(n == 0) {
        return 0;
    }

    int smallOutput = sumOfDigits(n/10);
    int sum = smallOutput + n % 10;

    return sum;
}

int main() {
    cout << sumOfDigits(3434);
 
    return 0;
}