#include <iostream>
#include "graph.h"
#include "algorithms.h"
#include "generator.h"
using namespace std;
int main(){
    cout<<"Graph Algorithm Visualizer\n";
    int V,E;
    cout<<"Vertices: "; cin>>V;
    cout<<"Edges: "; cin>>E;
    if(E < V-1){
        cout<<"Number of edges must be >= V-1 to ensure connectivity\n";
        return 0;
    }
    Graph g = generateRandomConnectedGraph(V,E);
    g.printGraph();
    int choice,start;
    while(true){
        cout<<"\nMENU\n1 BFS\n2 DFS\n3 Dijkstra\n4 Bellman Ford\n5 Exit\n";
        cin>>choice;
        if(choice==5) break;
        cout<<"Enter start node: "; cin>>start;
        if(start<0 || start>=V){
            cout<<"Invalid start node! Must be between 0 and "<<V-1<<endl;
            continue;
        }
        switch(choice){
            case 1: BFS(g,start); break;
            case 2: DFS(g,start); break;
            case 3: Dijkstra(g,start); break;
            case 4: BellmanFord(g,start); break;
            default: cout<<"Invalid choice\n";
        }
    }
}