#include <iostream>
using namespace std;

// Recursive Approach
int fibonacci(int n) {
    if(n < 0)
        return -1;

    if (n <= 1)
        return n;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Iterative Approach
int itr_fibonacci(int n) {
    if(n <= 1)
        return n;
    
    int first = 0, second = 1, sum;

    for(int i = 2; i <= n; i++) {
        sum = first + second;
        first = second;
        second = sum;
    }

    return second;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = itr_fibonacci(n);

    if(ans == -1) {
        cout << "Try again!";
    } else {
        cout << ans;
    }
    
 
    return 0;
}