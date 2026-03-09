#include "generator.h"
#include <cstdlib>
#include <ctime>
#include <set>
#include <vector>
using namespace std;

Graph generateRandomConnectedGraph(int V,int E){
    Graph g(V,false);
    srand(time(0));

    set<pair<int,int>> existingEdges;

    //Connecting all nodes in a chain
    for(int i=0;i<V-1;i++){
        int w = rand()%10 + 1;
        g.addEdge(i,i+1,w);
        existingEdges.insert({min(i,i+1), max(i,i+1)});
    }

    //adding remaining edges randomly
    int extra = E-(V-1);
    while(extra>0){
        int u = rand()%V;
        int v = rand()%V;
        if(u==v) continue;

        pair<int,int> edge = {min(u,v), max(u,v)};
        if(existingEdges.find(edge)!=existingEdges.end()) continue;

        int w = rand()%10 + 1;
        g.addEdge(u,v,w);
        existingEdges.insert(edge);
        extra--;
    }

    return g;
}