#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int result = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            result = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return result;
}

int lastOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int result = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            result = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return result;
}

int main()
{
    int arr[6] = {1, 2, 3, 3, 3, 5};
    int first = firstOccurrence(arr, 6, 3);
    int last = lastOccurrence(arr, 6, 3);
    cout << "FirstOccurence:" << first << endl;
    cout << "LastOccurrence:" << last << endl;
    int TotalNoOfOccurrences = (last - first) + 1;
    cout << "TotalNoOfOccurrences:" << TotalNoOfOccurrences << endl;
    return 0;
}