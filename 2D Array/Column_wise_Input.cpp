#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    cout << "Enter array elements:";
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < 3; row++)
    {

        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}