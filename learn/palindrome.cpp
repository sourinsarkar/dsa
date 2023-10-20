#include <iostream>
#include <vector>
#include <algorithm>
#include "rin.hpp"

using namespace std;
using namespace rin;

// Solution 1

int reverse(int n) {
    int reversed = 0;
    while(n != 0) {
        int temp = n % 10;
        reversed = reversed * 10 + temp;
        n /= 10;
    }

    return reversed;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int reversedNumber = reverse(n);
    if (reversedNumber == n)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}