#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>& fooV) {
    int size = fooV.size();
    for(int i = 0; i <= size - 1; i++) {
        int flag = 0;
        for(int j = 0; j <= size - 2; j++) {
            if(fooV[j] > fooV[j+1]) {
                swap(fooV[j], fooV[j+1]);
                flag = 1;
            }
        }

        if(flag == 0) {
            break;
        } 
    }
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> fooV(n);
    for(int i = 0; i < n; i++) {
        cin >> fooV.at(i);
    }

    int size = fooV.size();

    bubbleSort(fooV);

    for(int i = 0; i < n; i++) {
        cout << fooV.at(i) << ' ';
    }

    return 0;
}