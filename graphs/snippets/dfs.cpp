#include <bits/stdc++.h>

class Solution {
    void dfs(
        int init, const std::vector<std::vector<int>> &adj,
        std::vector<bool> &visited, std::vector<int> &dfs_res

    ) {
        visited[init] = true;
        dfs_res.push_back(init); 

        for (auto node : adj[init]) {
            if (!visited[node]) {
                dfs(node, adj, visited, dfs_res);
            }
        }
    }
public:
    std::vector<int> dfsOfGraph(const std::vector<std::vector<int>>& adj) {
        std::vector<int> dfs;
        std::vector<bool> visited(adj.size(), false);
        
        this->dfs(0, adj, visited, dfs);

        return dfs;
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

    std::vector<int> dfs = (new Solution())->dfsOfGraph(adj); 

    for (auto val : dfs) std::cout << val << " ";
}
