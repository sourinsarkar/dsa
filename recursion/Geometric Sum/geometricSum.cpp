#include <iostream>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
        return 1;

    int smallOutput = power(n, m - 1);
    return n * smallOutput;
}

double geometricSum(int n)
{
    if (n == 0)
        return 1;

    double smallOutput = geometricSum(n - 1);

    return smallOutput + 1.0 / power(2, n);
}

int main()
{
    cout << geometricSum(3);

    return 0;
}