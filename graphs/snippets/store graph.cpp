#include <iostream>

int main() {
    // if its a directed graph then just use only adj[u].push_back(v) 
    // as only edge will be in the way like u ----> v 

    // for the undirected graph; 
    // adjacency matrix
    int n, m;
    std::cin >> n >> m;

    int adj[n+1][n+1];

    for (int i = 0; i < m; i++) {
        int u, v;

        std::cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // adjacency list
    std::vector<int> adj[n+1];
    
    for (int i = 0; i < m; i++) {
        int u, v;
        std::cin >> u >> v;

        adj[u].push_bac(u);
        adj[v].push_back(v);
    }
}

std::vector<std::pair<int, int>> adj[n+1]; // for the directed graph with the edge weights
