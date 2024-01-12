#include <iostream>
using namespace std;

// Brute force
bool isPrime(int n)
{   
    if(n == 1) return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// opt solution
// TC: O(sqrt(n))
bool opt_isPrime(int n)
{   
    if(n == 1) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool opt1_isPrime(int n) {
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i++) {
        if(n % i == 0 || n * (i ))
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;

    // if(isPrime(n))   
    // if(opt_isPrime(n))
    if(opt1_isPrime(n))
        cout << "Prime" << '\n';
    else
        cout << "Not Prime" << '\n';

    return 0;
}