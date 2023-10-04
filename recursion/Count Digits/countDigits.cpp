#include <iostream>
using namespace std;
 
int countDigits(long long int n) {
    if(n == 0)
        return 0;
    
    long long int smallOutput = countDigits(n/10);  

    return smallOutput + 1 ;
}

int main() {
    cout << countDigits(6344322324);
 
    return 0;
}