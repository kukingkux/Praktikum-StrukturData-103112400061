#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#define Nil NULL
#include <queue>
#include <stack>
#include <iostream>

typedef char infoGraph;
typedef struct ElmNode *adrNode;
typedef struct ElmEdge *adrEdge;

struct ElmNode {
    infoGraph info;
    int visited;
    adrEdge firstEdge;
    adrNode Next;
};

struct ElmEdge {
    adrNode Node;
    adrEdge Next;
};

struct Graph {
    adrNode first;
};

void CreateGraph(Graph &G);
void InsertNode(Graph &G, infoGraph X);
void ConnectNode(adrNode &N1, adrNode &N2);
void PrintInfoGraph(Graph G);
adrNode FindNode(Graph G, infoGraph X);
void ResetVisited(Graph &G);
void PrintDFS(Graph &G, adrNode N);
void PrintBFS(Graph &G, adrNode N);

#endif