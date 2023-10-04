#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &arr, int &key)
{
    int size = arr.size();
    int start = 0, end = size - 1;

    // for (int i = 0; i <= size - 1; i++)
    while(start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {10, 30, 60, 70, 80, 40, 20, 50};
    int key;
    cout << "Enter an element to find: ";
    cin >> key;

    sort(arr.begin(), arr.end());

    int ans = binarySearch(arr, key);

    if (ans == -1)
    {
        cout << "Key not found.";
    }
    else
    {
        cout << "Key found at the index " << ans;
    }

    return 0;
}