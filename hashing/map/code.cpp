#include <iostream>
#include <vector>
// #include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(30);
    v.push_back(90);

    

    // for(int item : v) {
    //     cout << item << " ";
    // }
    // cout << '\n';

    // for_each(v.begin(), v.end(), [](int item) {
    //     cout << item << " ";
    // });
    // cout << '\n';

    map<int, int> mpp;

    for(auto item : v) {
        mpp[item] += 1;
    }

    for(auto i : mpp) {
        cout << i.first << " -> " << i.second << '\n';X
    }
    
    // for(int i = 0; i < v.size(); i++) {
    //     mpp[v[i]] += 1;
    // }

    int n;
    cout << "How many elements do you want to search for\nEnter here: ";
    cin >> n;

    while(n--) {
        int number;
        cin >> number;

        cout << "Frequency: " << mpp[number] << '\n';
    }

    return 0;
}