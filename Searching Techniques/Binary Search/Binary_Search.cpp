#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter Size of Array:";
    cin >> size;
    int arr[size];
    cout << "Enter Array Elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter Key to Search:";
    cin >> key;
    int index = binarySearch(arr, size, key);
    cout << "Index of " << key << " is:" << index << endl;
    return 0;
}