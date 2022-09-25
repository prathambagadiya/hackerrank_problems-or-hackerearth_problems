#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adjList[], int source, int distance);
void showGraph(vector<int> adjList[], int V);
int main() {
  int V = 5;
  vector<int> adjList[V];

  addEdge(adjList, 0, 1);
  addEdge(adjList, 0, 2);
  addEdge(adjList, 0, 3);
  addEdge(adjList, 1, 2);
  showGraph(adjList, V);
}
void showGraph(vector<int> adjList[], int V) {
  for (int i= 0; i < V; ++i) {
    cout << "Vertex "<< i << ":";
    for (auto &x : adjList[i]) cout << "-" << x;
    cout<<endl;
  }
}

void addEdge(vector<int> adjList[], int source, int distance) {
  adjList[source].push_back(distance);
  adjList[distance].push_back(source);
}
