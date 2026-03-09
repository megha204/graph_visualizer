#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include "graph.h"
void BFS(Graph &g,int start);
void DFS(Graph &g,int start);
void Dijkstra(Graph &g,int src);
void BellmanFord(Graph &g,int src);
#endif