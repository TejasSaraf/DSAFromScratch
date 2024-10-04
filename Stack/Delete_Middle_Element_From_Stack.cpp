#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int n)
{
    if (count == n / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // RECURSIVE CALL
    solve(inputStack, count + 1, n);

    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    deleteMiddle(s, 5);
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.top() << " ";
    return 0;
}