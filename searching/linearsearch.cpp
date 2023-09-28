#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int value;
    cout << "Enter value to find: ";
    cin >> value;

    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};
    int i = 0;
    int size = arr.size();
    bool found = false;

    while(size--) {
        if(arr.at(i) == value) {
            cout << "Present";
            found = true;
            break;
        }
        i++;
    }

    if(!found) {
        cout << "Sorry";
    }
    
    return 0;
}