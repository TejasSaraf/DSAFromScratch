#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string p)
{
          int ls = s.length();
          int lp = p.length();
          string ans;
          int start_idx = -1;
          int windowSize;
          int min_size = INT_MAX;
          if (lp > ls)
          {
                    return "";
          }
          int fs[256] = {0};
          int fp[256] = {0};
          for (int i = 0; i < lp; ++i)
          {
                    char ch = p[i];
                    fp[ch]++;
          }

          int count = 0;
          int start = 0;
          for (int i = 0; i < ls; ++i)
          {
                    char ch = s[i];
                    fs[ch]++;
                    if (fp[ch] != 0 && fs[ch] <= fp[ch])
                    {
                              count++;
                    }
                    if (count == lp)
                    {
                              char c = s[start];
                              while (fs[c] > fp[c] || fp[c] == 0)
                              {
                                        fs[c]--;
                                        start++;
                                        c = s[start];
                              }

                              windowSize = i - start + 1;
                              if (windowSize < min_size)
                              {
                                        min_size = windowSize;
                                        start_idx = start;
                              }
                    }
          }
          if (start_idx == -1)
                    return "";
          ans = s.substr(start_idx, min_size);
          return ans;
}

int main()
{
          string s;
          cin >> s;
          string pattern;
          cin >> pattern;

          cout << minWindow(s, pattern);
}