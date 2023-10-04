#include <iostream>
#include <limits.h>
using namespace std;

// Recursive Approach
int factorial(int n) {
    if(n < 0)
        return -1;
    
    if(n == 0)
        return 1;

    int result = 1;

    result = factorial(n - 1);
    return n * result;
}

// Iterable Approach
int itr_factorial(int n) {
    if(n < 0)
        return -1;
    
    if(n == 0)
        return 1;

    int result = 1;
    while(n > 1) {
        if(result > INT_MAX / n) {
            return -1;
        }

        result *= n;
        n--;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = factorial(n);
    if (ans == -1)
    {
        cout << "Invalid input";
    }
    else
    {
        cout << ans;
    }

    return 0;
}