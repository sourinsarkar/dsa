#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& v) {
    for(size_t i = 1; i < v.size(); i++) {
        // int j = i;
        // while(j > 0 && v[j - 1] > v[j]) {
        //     swap(v[j - 1], v[j]);
        //     j--;
        // }
        // int j = i;
        // while(j > 0) {
        //     if(v[j-1] > v[j]) {
        //         swap(v[j-1], v[j]);
        //         j--;
        //     }
        // }
        for(int j = i; j > 0 && v[j-1] > v[j]; j--) {
            swap(v[j-1], v[j]);
        }
    }
}

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(70);
    v.push_back(5);

    for(auto i : v) { 
        cout << i << ' ';
    }
    cout << '\n';

    insertionSort(v);

    for(auto i : v) { 
        cout << i << ' ';
    }
    cout << '\n';
}