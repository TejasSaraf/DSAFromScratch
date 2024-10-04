#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "Love";
    cout << str << endl;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    // cout<<s.top();
    // s.pop();
    // cout<<s.top();
    // s.pop();
    // cout<<s.top();
    // s.pop();
    // cout<<s.top();
    // s.pop();
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    cout << "String:" << ans << endl;

    return 0;
}
