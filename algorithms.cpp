#include "algorithms.h"
#include <iostream>
#include <queue>
#include <stack>
#include <climits>
#include <chrono>
using namespace std;
using namespace chrono;

//BFS Visualizer
void BFS(Graph &g,int start){
    if(start<0 || start>=g.V){ cout<<"Invalid start node\n"; return; }
    auto begin = high_resolution_clock::now();
    vector<bool> visited(g.V,false);
    queue<int> q; q.push(start); visited[start]=true;
    cout<<"\nBFS Visualization\n";
    while(!q.empty()){
        int u=q.front(); q.pop();
        cout<<"Visited: "<<u<<endl;
        for(auto &e:g.adj[u]){
            int v=e.first;
            if(!visited[v]){
                visited[v]=true;
                cout<<" Exploring "<<u<<" -> "<<v<<endl;
                q.push(v);
            }
        }
    }
    auto end = high_resolution_clock::now();
    cout<<"Runtime(ms): "<<duration_cast<milliseconds>(end-begin).count()<<endl;
}

//DFS Visualizer
void DFS(Graph &g,int start){
    if(start<0 || start>=g.V){ cout<<"Invalid start node\n"; return; }
    auto begin = high_resolution_clock::now();
    vector<bool> visited(g.V,false);
    stack<int> st; st.push(start);
    cout<<"\nDFS Visualization\n";
    while(!st.empty()){
        int u=st.top(); st.pop();
        if(!visited[u]){
            visited[u]=true;
            cout<<"Visited: "<<u<<endl;
            for(auto &e:g.adj[u]){
                int v=e.first;
                if(!visited[v]){
                    cout<<" Exploring "<<u<<" -> "<<v<<endl;
                    st.push(v);
                }
            }
        }
    }

    auto end = high_resolution_clock::now();
    cout<<"Runtime(ms): "<<duration_cast<milliseconds>(end-begin).count()<<endl;
}


//Dijkstra Visualizer
void Dijkstra(Graph &g,int src){
    if(src<0 || src>=g.V){ cout<<"Invalid start node\n"; return; }
    auto begin = high_resolution_clock::now();
    vector<int> dist(g.V,INT_MAX);
    dist[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    cout<<"\nDijkstra Visualization\n";
    while(!pq.empty()){
        int u=pq.top().second; pq.pop();
        for(auto &e:g.adj[u]){
            int v=e.first,w=e.second;
            if(dist[u]!=INT_MAX && dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                cout<<" Relax "<<u<<" -> "<<v<<" new dist "<<dist[v]<<endl;
                pq.push({dist[v],v});
            }
        }
    }
    auto end = high_resolution_clock::now();
    cout<<"\nFinal Distances:\n";
    for(int i=0;i<g.V;i++) cout<<i<<" : "<<dist[i]<<endl;
    cout<<"Runtime(ms): "<<duration_cast<milliseconds>(end-begin).count()<<endl;
}

//BellmanFord Visualizer
void BellmanFord(Graph &g,int src){
    if(src<0 || src>=g.V){ cout<<"Invalid start node\n"; return; }
    auto begin = high_resolution_clock::now();
    vector<int> dist(g.V,INT_MAX);
    dist[src]=0;
    cout<<"\nBellman-Ford Visualization\n";
    for(int i=1;i<g.V;i++){
        for(int u=0;u<g.V;u++){
            for(auto &e:g.adj[u]){
                int v=e.first,w=e.second;
                if(dist[u]!=INT_MAX && dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                    cout<<" Relax "<<u<<" -> "<<v<<" new dist "<<dist[v]<<endl;
                }
            }
        }
    }
    auto end = high_resolution_clock::now();
    cout<<"\nFinal Distances:\n";
    for(int i=0;i<g.V;i++) cout<<i<<" : "<<dist[i]<<endl;
    cout<<"Runtime(ms): "<<duration_cast<milliseconds>(end-begin).count()<<endl;
}