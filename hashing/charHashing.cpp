#include <iostream>
#include <string>

using namespace std;

int main() {
    // take input
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // pre-compute the hashes
    int hash[13] = {0};
    for(int i = 0; i < s.length(); i++) {
        hash[s[i]] += 1;
    };

    int times;
    cout << "Search times: ";
    cin >> times;

    while(times--) {
        char ch;
        cout << "Enter character" << " 1 : ";
        cin >> ch;

        cout << "Answer: " <<  hash[ch] << '\n';
    }
}