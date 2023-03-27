#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Wrong way -----------------------------------

    // int notes100 = n / 100;
    // int remainingNotes = n % 100;
    // int notes50 = n / 50;
    // remainingNotes = n % 50;
    // int notes30 = n / 30;
    // remainingNotes = n % 30; 
    // int notes1 = n / 1;

    // Correct way ---------------------------------

    int notes100 = n / 100;
    int remains = n % 100;
    int notes30 = remains / 30;
    remains = remains % 30;

    cout << "100 Notes: " << notes100 << '\n'; 
    // cout << "50 Notes: " << notes50 << '\n'; 
    cout << "30 Notes: " << notes30 << '\n'; 
    // cout << "1 Notes: " << notes1 << '\n'; 
}