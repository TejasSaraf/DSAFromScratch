#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

bool checkCycleDfs(int node, vector<int> adjList[], vector<bool> &visited, unordered_map<int, bool> &dfsVisited)
{
    visited[node] = true;
    dfsVisited[node] = true;

    for (auto neighbour : adjList[node])
    {
        if (!visited[neighbour])
        {
            bool cycleDetected = checkCycleDfs(neighbour, adjList, visited, dfsVisited);
            if (cycleDetected)
            {
                return true;
            }
            else if (dfsVisited[neighbour])
            {
                return true;
            }
        }
    }

    dfsVisited[node] = true;
    return false;
}

int main()
{
    const int vertices = 5;
    int node = 0;
    vector<int> adjList[vertices];
    vector<bool> visited(vertices, false);
    unordered_map<int, bool> dfsVisited;

    addEdge(adjList, 0, 1);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 4);
    addEdge(adjList, 4, 1);

    bool cycleFound = checkCycleDfs(node, adjList, visited, dfsVisited);
    if (cycleFound)
    {
        cout << "Cycle Found!" << endl;
    }
    else
    {
        cout << "Cycle Not Found!" << endl;
    }

    return 0;
}