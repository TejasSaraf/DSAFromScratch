#include <iostream>
using namespace std;

int largestRowSum(int arr[][3])
{
    int maxi = INT_FAST16_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "Largest sum is :" << maxi << endl;
    return rowIndex;
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
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int ans = largestRowSum(arr);
    cout << "Max row at index:" << ans << endl;
    return 0;
}