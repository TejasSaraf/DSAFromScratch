#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void dfs(vector<int> adjList[], vector<bool> visited, int node)
{
    visited.at(node) = true;
    cout << node << " ";
    for (auto i : adjList[node])
    {
        if (!visited[i])
        {
            dfs(adjList, visited, i);
        }
    }
}
int main(void)
{
    int vertices = 5;
    int node = 0;
    vector<int> adjList[vertices];
    vector<bool> visited(vertices, false);

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 3, 3);
    addEdge(adjList, 4, 4);
    addEdge(adjList, 2, 2);

    dfs(adjList, visited, node);
}