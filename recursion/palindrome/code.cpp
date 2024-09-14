#include <iostream>

using namespace std;

bool isPalindrome(int i, string& name) {
    int n = name.length();

    if(i >= n / 2) return true;
    if(name[i] != name[n - i - 1]) return false;
    
    return isPalindrome(i + 1, name);
}

int main() {
    string name;
    cout << "Enter a string: ";
    cin >> name;

    if(isPalindrome(0, name) == true) {
        cout << "Palindrome" << '\n';
    } else {
        cout << "Non-Palindrome" << '\n';
    }

    return 0;
}