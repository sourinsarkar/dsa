#include <bits/stdc++.h>

using namespace std;

void topicPair() {
    pair<int, int> p = {1,2};
    cout << p.first << " and " << p.second << '\n';

    pair<int, pair<int, int>> p1 = {3, {4,5}};
    cout << p1.first << '(' << p1.second.first << " and "<< p1.second.second << ')' << '\n';
    cout << p1.first << '(' << to_string(p1.second.first) + " and "+ to_string(p1.second.second) << ')' << '\n';
}

int main() {
    topicPair();
}