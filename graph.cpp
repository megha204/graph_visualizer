#include "graph.h"
#include <iostream>
using namespace std;

Graph::Graph(int vertices,bool dir){
    V=vertices;
    directed=dir;
    adj.resize(V);
}

void Graph::addEdge(int u,int v,int w){
    if(u==v || u<0 || v<0 || u>=V || v>=V) return; // no self loops and invalid nodes 

    // Checking if edge already exists
    for(auto &p: adj[u]){
        if(p.first==v) return; // already exists means return
    }
    adj[u].push_back({v,w});

    if(!directed){
        for(auto &p: adj[v]){
            if(p.first==u) return;
        }
        adj[v].push_back({u,w});
    }
}

void Graph::printGraph(){
    cout<<"\nGraph Representation:\n";
    for(int i=0;i<V;i++){
        cout<<i<<" -> ";
        for(auto &p: adj[i]) cout<<"("<<p.first<<","<<p.second<<") ";
        cout<<endl;
    }
}