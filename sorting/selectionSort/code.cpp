#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(40);
    v.push_back(70);
    v.push_back(20);
    v.push_back(60);
    v.push_back(30);

    for(auto i : v) {
        cout << i << ' ';
    }
    cout << '\n';

    // sort(v.begin(), v.end());
    // for(auto i : v) {
    //     cout << i << ' ';
    // }
    // cout << '\n';
    
    for(size_t i = 0; i < v.size() - 1; i++) {
        size_t smallest = i;
        for(size_t j = i + 1; j < v.size(); j++) {
            if(v[j] < v[smallest]) {
                smallest = j;
            }
        }
        if(smallest != i) {
            swap(v[i], v[smallest]);
        }
    }
    
    for(auto i : v) {
        cout << i << ' ';
    }
    cout << '\n';



}