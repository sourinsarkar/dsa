#include <iostream>
#include <limits.h>
using namespace std;

void revInt(int n) {
    int ans = 0;
    while(n != 0) {
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)) cout << 0 << '\n';
        ans = (ans * 10) + (n % 10);
        n = n / 10;
    }

    cout << ans << '\n';
}

int main() {
    int n;
    cin >> n;

    revInt(n);

    return 0;
}