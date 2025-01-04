// Find factorial

#include <iostream>

using namespace std;

// Loop
int findFactorial1(int n) {
    if(n == 0 || n == 1)
        return 1;

    int ans = 1;
    
    while(n >= 2) {
        ans *= n;
        n--;
    }

    return ans;
}

// Recursive
int findFactorial2(int n) {
    if(n == 0 || n == 1)
        return 1;
    
    return n * findFactorial2(n - 1);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << findFactorial1(n) << '\n';
    cout << findFactorial2(n) << '\n';

    return 0;
}