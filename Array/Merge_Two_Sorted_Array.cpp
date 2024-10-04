#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &num1, int m, vector<int> &num2, int n)
    {
        vector<int> v;
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (num1[i] < num2[j])
            {
                v.push_back(num1[i++]);
            }
            else
            {
                v.push_back(num2[j++]);
            }
        }
        while (i < m)
        {
            v.push_back(num1[i++]);
        }
        while (j < n)
        {
            v.push_back(num2[j++]);
        }
        num1 = v;
    }
};
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> num1;
    num1.push_back(1);
    num1.push_back(3);
    num1.push_back(5);
    print(num1);
    vector<int> num2;
    num2.push_back(2);
    num2.push_back(4);
    num2.push_back(6);
    print(num2);
    Solution s;
    s.merge(num1, 3, num2, 3);
    print(num1);
    return 0;
}