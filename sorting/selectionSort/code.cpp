#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr) {
    for(size_t i = 0; i <= arr.size() - 2; i++) {
        int smallest = i;
        for(size_t j = i + 1; j <= arr.size() - 1; j++) {
            if(arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        if(smallest != i) {
            swap(arr[smallest], arr[i]);
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

    selectionSort(v);

    for(auto i : v) {
        cout << i << ' '; 
    }
    cout << '\n';
}