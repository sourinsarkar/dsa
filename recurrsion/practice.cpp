#include <iostream>
using namespace std;

void function(int n)
{
    if(n == 0) return;
    cout << n << '\n';
    function(n - 1);
    cout << n << '\n';
}

int main()
{
    function(3);
    return 0;
}