#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    int hash[26] = {0};
    for(int i = 0; i < s.length(); i++) {
        hash[s[i] - 'a'] += 1;
    }

    int k;
    cin >> k;
    while(k--) {
        char c;
        cin >> c;

        cout << hash[c - 'a'] << '\n';
    }
}