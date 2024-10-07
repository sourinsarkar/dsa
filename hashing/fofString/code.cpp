#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    std:string word = "mississippi";

    map<char, int> word_map;

    for(auto i : word) {
        word_map[i]++;
    }

    for(auto i : word_map) {
        cout << i.first << " -> " << i.second << '\n';
    }

    return 0;
}