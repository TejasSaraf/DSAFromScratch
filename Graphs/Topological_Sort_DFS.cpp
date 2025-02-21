#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void topoSort(int node, unordered_map<int, bool> &visited, stack<int> &s, vector<int> adjList[])
{
    visited[node] = true;

    for (auto neighbour : adjList[node])
    {
        if (!visited[neighbour])
        {
            topoSort(neighbour, visited, s, adjList);
        }
    }
    s.push(node);
}

int main()
{
    const int vertices = 7;
    int node = 0;

    vector<int> adjList[vertices];
    unordered_map<int, bool> visited;

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 3);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 3, 4);
    addEdge(adjList, 4, 5);
    addEdge(adjList, 4, 6);
    addEdge(adjList, 5, 6);

    stack<int> s;
    topoSort(node, visited, s, adjList);

    vector<int> ans;

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    cout << "Following is Topological sort of given Graph" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}