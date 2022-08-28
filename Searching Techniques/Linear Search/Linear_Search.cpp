#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {3, 5, 2, 7, 6, 8};
    int index = linearSearch(arr, 6, 7);
    cout << "Index of 7 is:" << index << endl;
    return 0;
}