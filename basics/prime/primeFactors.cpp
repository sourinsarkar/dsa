#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
};

// Brut Force
// TC: O(n log n)
void primeFactors(int n) {
    for(int i = 2; i < n ; i++) {
        if(isPrime(i)) {
            int x = i;
            while(n % x == 0)
            {
                cout << i << ' ';  
                x = x * i;
            }
        }
    }  
}

// Optimised
void opt_primeFactors(int n) {
    if(n <= 1) return;

    for(int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            cout << i << ' ';
            n /= i;
        }
    }

    if(n > 1) cout << n;
}

// Further Optimised
void opt1_primeFactors(int n)
{
    if(n <= 1) return;
    if(n % 2 == 0)
    {
        cout << 2 << ' ';
        n /= 2;
    }

    if(n % 3 == 0)
    {
        cout << 3 << ' ';
        n /= 3;
    }

    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0)
        {
            cout << i << ' ';
            n /= i;
        }

        if(n % (i + 2) == 0)
        {
            cout << i << ' ';
            n /= (i + 2);
        }
    }

    if(n > 3)
        cout << n;
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    primeFactors(n);

    return 0;
}