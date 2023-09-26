#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // string *s = new string;
    // *s = "sourin sarkar";
    // cout << *s << '\n';

    vector<string> str;
    str.push_back("Shantanu");
    str.push_back("Yudhisthir");
    str.push_back("Bheem");
    str.push_back("Arjun");
    str.push_back("Nakul");
    str.push_back("Shahdev");
    // cout << str[0] << '\n';
    for(int i = 0; i < str.size(); i++) {
        cout << str[i] << ' ';
    }
    cout << '\n';
    
    for(int i = 0; i < str.size(); i++) {
        sort(str.begin(), str.end());
        cout << str[i] << ' ';
    }
    cout << '\n';

    string str_1 = "sourin";
    sort(str_1.begin(), str_1.end());
    cout << str_1 << '\n';

    //str_1.push_back(index);
    //str_1.substr(2);
    //str_1.substr(2,3);
    //string s = to_string(xyz-integer);
    //int a = atoi(xyz-string); 

    return 0;
}