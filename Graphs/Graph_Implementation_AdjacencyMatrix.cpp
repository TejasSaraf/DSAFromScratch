#include <iostream>
using namespace std;

int main()
{
    int v, e;
    cout << "Enter the number of nodes:";
    cin >> v;
    cout << "Enter the number of edges:";
    cin >> e;
    int g[v + 1][v + 1];

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            g[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;
    }

    for (int i = 1; i <= v; i++)
    {
        cout << i << "--> ";
        for (int j = 1; j <= v; j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}