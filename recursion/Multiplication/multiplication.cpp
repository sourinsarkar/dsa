#include <iostream>
using namespace std;
 
int multiply(int n, int m) {
    if(n == 0 || m == 0)
        return 0;

    int smallOutput = multiply(n, m - 1);
    int result = n + smallOutput; 
    return result;
}

int main() {
    cout << multiply(2,4);
 
    return 0;
}