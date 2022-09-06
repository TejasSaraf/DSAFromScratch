#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int target)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][3];
    cout << "Enter array elements:";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    int target;
    cout << "Enter target element:";
    cin >> target;
    bool ans = linearSearch(arr, target);
    if (ans == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}