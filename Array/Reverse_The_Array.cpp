#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v, int index)
{
    int start = index;
    int end = v.size() - 1;
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);

    int index = 4;

    print(v);
    reverse(v, index);
    print(v);
    return 0;
}