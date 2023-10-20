#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// Simple rule: Store indexes and not the values

// void selectionSort(int arr[], int n)
void selectionSort(int *arr, int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int smallest = i;

        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }

        if (smallest != i) // Optimized
        {
            swap(arr[i], arr[smallest]);
        }
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];

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

    delete[] arr;
}