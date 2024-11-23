#include <bits/stdc++.h>

class Solution {
private:
    std::queue<int> q;
public:
    const std::vector<int> bfsOfGraph(const std::vector<std::vector<int>> &adj) {
        std::vector<bool> visited(adj.size(), false);
        visited[0] = true;
        q.push(0);

        std::vector<int> bfs;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            bfs.push_back(node);

            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }

        return bfs;
    }
};

int main() {
    std::vector<std::vector<int>> adj = {
                                            {2, 3, 1},
                                            {0},
                                            {0, 4},
                                            {0},
                                            {2}
                                        };

    std::vector<int> bfs = (new Solution())->bfsOfGraph(adj);
    for (auto node : bfs) std::cout << node << " ";
}

