#include <iostream>
using namespace std;

void Bubble(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Array Size:";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Bubble(arr, n);
    printArray(arr, n);
    return 0;
}