#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<char> chars = {'a', 'b', 'a', 'c', 'b', 'a', 'd'};

    map<char, int> chars_map;

    // for(auto i : chars) {
    //     chars_map[i] += 1;
    // }

    for(int i = 0; i < chars.size(); i++) {
        chars_map[chars[i]]++;
    }

    for(auto i : chars_map) {
        cout << i.first << " -> " << i.second << '\n';
    }
}