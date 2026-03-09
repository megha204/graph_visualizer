#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <utility>
using namespace std;

class Graph {
public:
    int V;
    bool directed;
    vector<vector<pair<int,int>>> adj;

    Graph(int vertices,bool dir=false);
    void addEdge(int u,int v,int w); // fixed to prevent duplicates/self-loops
    void printGraph();
};

#endif