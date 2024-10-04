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
int main()
{
    int arr[6] = {8, 23, 25, 28, 6, 7};
    int index = findPivot(arr, 6);
    cout << "Pivot element is:" << index << endl;
}