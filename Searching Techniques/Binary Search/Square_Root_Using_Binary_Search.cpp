#include <iostream>
using namespace std;

int sqrt(int n)
{
    int start = 0;
    int end = n;
    long long int mid = (start + end) / 2;
    long long int result = -1;
    while (start < end)
    {
        long long int square = (mid * mid);
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            result = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return result;
}
int main()
{
    int n = 25;
    long long int ans = sqrt(n);
    cout << "Square Root of " << n << " :" << ans << endl;
    return 0;
}