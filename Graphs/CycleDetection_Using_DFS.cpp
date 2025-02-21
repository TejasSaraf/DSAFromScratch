#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

bool isCyclicDfs(int node, int parent, vector<bool> visited, vector<int> adjList[])
{
    visited[node] = 1;

    for (auto neighbour : adjList[node])
    {
        if (!visited[neighbour])
        {
            bool CycleDetected = isCyclicDfs(neighbour, node, visited, adjList);
            if (CycleDetected)
                return true;
        }
        else if (neighbour != parent)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    const int vertices = 5;
    int node = 0;
    vector<int> adjList[vertices];
    vector<bool> visited(vertices, false);

    addEdge(adjList, 0, 1);
    addEdge(adjList, 1, 0);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 1);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 2);
    addEdge(adjList, 3, 4);
    addEdge(adjList, 4, 1);
    addEdge(adjList, 4, 3);

    bool ans = isCyclicDfs(node, -1, visited, adjList);
    if (ans == 1)
    {
        cout << "Cycle Detected!" << endl;
    }
    else
    {
        cout << "Cycle Not Present!" << endl;
    }
    return 0;
}