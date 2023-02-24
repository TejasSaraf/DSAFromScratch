#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void bfs(vector<int> adjList[], vector<bool> &visitedVertices, int node)
{
    queue<int> q;
    q.push(node);
    visitedVertices[node] = 1;
    
    while (!q.empty())
    {
        int frontNode = q.front();
        cout << frontNode << " ";
        q.pop();
        for (auto i : adjList[frontNode])
        {
            if (!visitedVertices[i])
            {
                q.push(i);
                visitedVertices[i] = 1;
            }
        }
    }
}

int main()
{
    const int Vertices = 5;
    int node = 0;
    vector<int> adjList[Vertices];
    vector<bool> visitedVertices(Vertices, false);
    addEdge(adjList, 0, 4);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 1);
    addEdge(adjList, 3, 2);
    addEdge(adjList, 4, 3);
    bfs(adjList, visitedVertices, node);

    return 0;
}