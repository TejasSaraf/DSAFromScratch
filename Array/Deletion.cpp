#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8};
    int size = 5, index = 1;
    printArray(arr, size);
    deletion(arr, size, index);
    size -= 1;
    printArray(arr, size);
    return 0;
}