#include <iostream>
using namespace std;

// Brut Force
int lcm(int n, int m) {
    int result = max(n, m);
    
    while(true) {
        if(result % n == 0 && result % m == 0) break;
        result++;
    }

    return result;
}

//

int main() {
    int n, m;
    cout << "Enter values: ";
    cin >> n >> m;

    cout << lcm(n, m) << '\n';
    return 0;
}