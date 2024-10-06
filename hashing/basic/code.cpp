// Brute force approach to implemet hashing
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Take inputs in array
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Do the processing
    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[v[i]] += 1;
    }
    
    // Gives the answer of all the incremental elements in the array
    // for(int i = 0; i < n; i++) {
    //     cout << hash[i] << '\n';
    // }

    // Way the specifically get the answer for the desired elements
    int k;
    cin >> k;
    while(k--) {
        int number;
        cin >> number;
        cout << hash[number] << '\n';
    }
}