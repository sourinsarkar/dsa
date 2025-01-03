// Code to check palindrome

#include <iostream>
#include <string>

using namespace std;

// Way 1 - check by reverse
bool checkPalindrome1(int n) {
    int temp = n;
    int r_num = 0;
    
    while(n > 0) {
        r_num = r_num * 10 + n % 10;
        n /= 10;
    }

    bool result = r_num == temp ? true : false;
    return result;
}

// Way 2 - two pointer
bool checkPalindrome2(int n) {
    string num = to_string(n);
    
    for(int i = 0; i < num.length() / 2; i++) {
        if(num[i] != num[num.length() - i - 1])
            return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(checkPalindrome2(n) == true) {
        cout << "True" << '\n';
    } else { 
        cout << "False" << '\n';
    }

    return 0;
}