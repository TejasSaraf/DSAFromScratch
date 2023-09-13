#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveSubsequence(int n, int a[])
{
    set<int> s;
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        s.insert(a[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (s.find(a[i] - 1) != s.end())
        {
            continue;
        }
        else
        {
            int x = a[i];
            int count = 0;
            while (s.find(x) != s.end())
            {
                count++;
                x++;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << longestConsecutiveSubsequence(n, a);
}