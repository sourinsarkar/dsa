#include <iostream>
using namespace std;
 
// Iterative Approach
int itr_countZeroes(long long int n) {
    if(n == 0) return 1;

    int count = 0;
    while(n>0) {
        int temp = n % 10;
        if(temp == 0) count++;
        n/=10;
    }

    return count;
}

int rec_countZeroes(long long int n) {
    // base
    if(n == 0) return 0;

    // recursive
    int smallOutput = rec_countZeroes(n/10);

    // calculation
    int lastDigit = n % 10;
    if(lastDigit == 0) {
        return smallOutput + 1;
    } else {
        return smallOutput;
    }
}

int main() {
    cout << "Total Zeroes(Iterative Appraoch): " << itr_countZeroes(6040000350) << '\n';
    cout << "Total Zeroes(Recursive Appraoch): " << rec_countZeroes(6040000350) << '\n';
 
    return 0;
}