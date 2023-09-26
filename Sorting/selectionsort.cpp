#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int smallest = INT_MAX;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if(arr[j] < smallest) {
                smallest = arr[j];
            }
        }

        if(arr[i] > smallest) {
            swap(arr[j], arr[i]);
        }
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter all the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}