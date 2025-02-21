#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

void addEdge(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

bool isCyclicBfs(int node, vector<bool> visited, vector<int> adjList[])
{
    unordered_map<int, int> parent;

    parent[node] = -1;
    visited[node] = 1;
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (auto neighbour : adjList[front])
        {
            if (visited[neighbour] == true && neighbour != parent[front])
            {
                return true;
            }
            else if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = front;
            }
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

    bool ans = isCyclicBfs(node, visited, adjList);
    if (ans == 1)
    {
        cout << "Cycle Detected!" << endl;
    }
    else
    {
        cout << "Cycle Not present!" << endl;
    }

    return 0;
}