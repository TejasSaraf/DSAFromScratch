#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int j;
        int key = arr[i];
        for (j = i - 1; j >= 0 && arr[j] < key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {5, 4, 1, 8, 10};
    printArray(arr, 5);
    insertionSort(arr, 5);
    printArray(arr, 5);

    return 0;
}