#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    print(n - 1); // Tail recurssion

    print(n - 1);
    cout << n << " "; // Head recurssion
}
int main()
{
    int n;
    cout << " :";
    cin >> n;
    print(n);
    return 0;
}