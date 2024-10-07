#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<int> numbers = {10, 30, 20, 40, 30, 30, 20, 30, 40, 50, 100};
    
    map<int, int> numbers_map;

    for(auto i: numbers) {
        numbers_map[i] += 1;
    }

    for(auto i: numbers_map) {
        cout << i.first << " -> " << i.second << '\n';
    }

    int n;
    cout << "How many searches you want to do: ";
    cin >> n;

    while(n--) {
        int number;
        int chance = 1;
        cout << chance << "st chance: ";
        cin >> number;
        
        cout << number << " -> " << numbers_map[number] << '\n';
        chance++;
    }


    return 0;
}