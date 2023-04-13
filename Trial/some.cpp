#include <bits/stdc++.h>
using namespace std;

int *sortedArray(int len, int *arr) {
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int findMax(int len, int *arr) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int len = 0;
    cin >> len;
    int *arr = new int[len];
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    arr = sortedArray(len, arr);
    int max = findMax(len, arr);
    cout << max;
    return 0;
}