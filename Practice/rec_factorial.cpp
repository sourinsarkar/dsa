#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    int smallFactorial = factorial(n - 1);
    return n * smallFactorial;
}

int main()
{
    cout << factorial(5) << '\n';

    return 0;
}