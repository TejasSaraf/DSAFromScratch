#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int indexOfMin;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
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
    selectionSort(arr, 5);
    printArray(arr, 5);

    return 0;
}