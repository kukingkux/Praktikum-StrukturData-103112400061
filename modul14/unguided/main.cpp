#include "graph.h"
#include "graph.cpp"
#include <iostream>
using namespace std;

int main() {
    Graph G;
    CreateGraph(G);

    // Tambah node
    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');
    InsertNode(G, 'E');
    InsertNode(G, 'F');
    InsertNode(G, 'G');
    InsertNode(G, 'H');

    cout << "\n=== Struktur Graph (sebelum koneksi)===\n";
    PrintInfoGraph(G);

    // Hubungkan node (graph tidak berarah)
    adrNode NodeA = FindNode(G, 'A');
    adrNode NodeB = FindNode(G, 'B');
    adrNode NodeC = FindNode(G, 'C');
    adrNode NodeD = FindNode(G, 'D');
    adrNode NodeE = FindNode(G, 'E');
    adrNode NodeF = FindNode(G, 'F');
    adrNode NodeG = FindNode(G, 'G');
    adrNode NodeH = FindNode(G, 'H');
    
    ConnectNode(NodeA, NodeB);
    ConnectNode(NodeA, NodeC);
    ConnectNode(NodeB, NodeD);
    ConnectNode(NodeB, NodeE);
    ConnectNode(NodeC, NodeF);
    ConnectNode(NodeC, NodeG);
    ConnectNode(NodeD, NodeH);
    ConnectNode(NodeG, NodeH);
    ConnectNode(NodeE, NodeH);
    ConnectNode(NodeF, NodeH);

    cout << "\n=== Struktur Graph (setelah koneksi)===\n";
    PrintInfoGraph(G);

    cout << "\n=== DFS dari Node A ===\n";
    ResetVisited(G);
    PrintDFS(G, FindNode(G, 'A'));

    cout << "\n\n=== BFS dari Node A ===\n";
    ResetVisited(G);
    PrintBFS(G, FindNode(G, 'A'));

    cout << endl;
    return 0;
}