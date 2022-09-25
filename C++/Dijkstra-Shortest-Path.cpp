#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int, int>> graph_[], int u, int v, int wt)
{
    graph_[u].push_back(make_pair(v, wt));
    graph_[v].push_back(make_pair(u, wt));
}

vector<int> shortest_path(vector<pair<int, int>> graph_[], vector<int> path_, int V, int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push(make_pair(0, src));
    path_[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto &x : graph_[u])
        {
            int v = x.first;
            int weight = x.second;

            if (path_[v] > path_[u] + weight)
            {
                path_[v] = path_[u] + weight;
                pq.push(make_pair(path_[v], v));
            }
        }
    }

    return path_;
}

int main()
{
    int V = 9;

    vector<pair<int, int>> graph_[V];
    vector<int> path_(V, INT_MAX);

    addEdge(graph_, 0, 1, 4);
    addEdge(graph_, 0, 7, 8);
    addEdge(graph_, 1, 2, 8);
    addEdge(graph_, 1, 7, 11);
    addEdge(graph_, 2, 3, 7);
    addEdge(graph_, 2, 8, 2);
    addEdge(graph_, 2, 5, 4);
    addEdge(graph_, 3, 4, 9);
    addEdge(graph_, 3, 5, 14);
    addEdge(graph_, 4, 5, 10);
    addEdge(graph_, 5, 6, 2);
    addEdge(graph_, 6, 7, 1);
    addEdge(graph_, 6, 8, 6);
    addEdge(graph_, 7, 8, 7);

    path_ = shortest_path(graph_,path_, V, 0);

    cout<<"Vertex\tDistance :-"<<endl;
    for (int i = 0; i < V; ++i) cout<<i<<"\t "<<path_[i]<<endl;

    return 0;
}