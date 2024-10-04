#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void printVec(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr;
    int element;
    cout << "Enter Vector elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    printVec(arr, 5);
    bubbleSort(arr, 5);
    printVec(arr, 5);
}