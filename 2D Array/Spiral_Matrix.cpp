#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = (row * col);

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < total)
        {
            for (int i = startingCol; count < total && i <= endingCol; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            for (int i = startingRow; count < total && i <= endingRow; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            for (int i = endingCol; count < total && i >= startingCol; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            for (int i = endingRow; count < total && i >= startingRow; i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> vec{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    Solution s;
    vector<int> v = s.spiralOrder(vec);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}