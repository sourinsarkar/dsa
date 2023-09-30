#include <iostream>
#include <vector>
using namespace std;

void linearSearch(vector<int> &arr, const int &value)
{
    int i = 0;
    int size = arr.size();
    bool found = false;

    while (size--)
    {
        if (arr.at(i) == value)
        {
            cout << "Present at " << i + 1 << " position.";
            found = true;
            break;
        }
        i++;
    }

    if (!found)
    {
        cout << "Sorry";
    }
}

int main()
{
    int value;
    cout << "Enter value to find: ";
    cin >> value;

    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};

    linearSearch(arr, value);

    return 0;
}