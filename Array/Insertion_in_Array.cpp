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

int insertion(int arr[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[50] = {1, 2, 4, 5, 6};
    int size = 5, capacity, index = 2, element = 3;
    printArray(arr, size);
    int l = insertion(arr, size, element, index, 50);
    size += 1;
    if (l == 1)
    {
        printArray(arr, size);
    }
    else
    {
        cout << "Insertion not happend";
    }
    return 0;
}