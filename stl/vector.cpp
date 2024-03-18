#include <bits/stdc++.h>

using namespace std;

void topicVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(1);

    vector<pair<string, string>> vec_p;
    // vec_p.push_back({"Hello", "World"});
    vec_p.push_back(make_pair("Hello", "World")); // alternative
    vec_p.emplace_back("Some", "Thing");

    vector<int> v1(5, 100);  //Five times 100
    vector<int> v1(5);  //Five 0 --compiler dependent

    vector<int> v2(v1);

}

int main() {
    topicVector();

}