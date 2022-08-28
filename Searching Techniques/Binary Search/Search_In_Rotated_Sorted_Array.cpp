#include <iostream>
using namespace std;

int findPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

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
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {8, 7, 9, 1, 2, 3};
    int n = 6;
    int key = 3;
    int pivot = findPivot(arr, 6);
    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        cout << "Element:" << binarySearch(arr, pivot, n - 1, key) << endl;
        ;
    }
    else
    {
        cout << "Element:" << binarySearch(arr, 0, pivot - 1, key) << endl;
    }
    return 0;
}