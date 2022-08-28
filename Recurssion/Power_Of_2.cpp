#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;

    return 2 * factorial(n - 1);
}
int main()
{
    int n;
    cout << " :";
    cin >> n;
    int result = factorial(n);
    cout << result;
    return 0;
}