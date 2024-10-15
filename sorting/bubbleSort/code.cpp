#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& v) {
    for(size_t i = 0; i < v.size() - 1; i++) {
        bool isSorted = true;
        for(size_t j = 0; j < v.size() - 1 - i; j++) {
            if(v[j]  > v[j+1]) {
                swap(v[j], v[j+1]);
                isSorted = false;
            }
        }

        if(isSorted == true) break; 
        cout << "runs\n";
    }
}

int main() {
    vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(40);
    // v.push_back(30);
    // v.push_back(70);
    // v.push_back(5);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(70);
    v.push_back(60);

    for(auto i : v) {
        cout << i << ' '; 
    }
    cout << '\n';

    bubbleSort(v);

    for(auto i : v) {
        cout << i << ' '; 
    }
    cout << '\n';
}