#include <iostream>
using namespace std;
 
int power(int n, int m) {
    if(m == 0)
        return 1;

    int smallOutput = power(n, m - 1);
    return n * smallOutput;
}

int main() {
    cout << power(5,3);
    return 0;
}