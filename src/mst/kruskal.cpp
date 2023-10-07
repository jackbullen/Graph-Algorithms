#include "graph/weighted_graph.hpp"


#include <algorithm>
#include <vector>

// Union-Find data structure
class UnionFind {
    std::vector<int> parent, rank;
    int n;

public:
    UnionFind(int n) : n(n), parent(n), rank(n, 0) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u != parent[u]) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    void merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (rank[x] > rank[y]) {
            parent[y] = x;
        } else {
            parent[x] = y;
        }
        if (rank[x] == rank[y]) {
            rank[y]++;
        }
    }
};

std::vector<std::pair<int, std::pair<int, int>>> kruskalMST(const WeightedGraph& graph) {
    int V = graph.getVertices(); 
    UnionFind uf(V);
    std::vector<std::pair<int, std::pair<int, int>>> edges, mst;

    for (int v = 0; v < V; v++) {
    for (auto& [w, weight] : graph.getAdjList(v)) {
        if (v < w) {  // To avoid duplicate edges
            edges.push_back({weight, {v, w}});
        }
    }
}

    std::sort(edges.begin(), edges.end());

    for (auto& [weight, edge] : edges) {
        int u = edge.first;
        int v = edge.second;
        if (uf.find(u) != uf.find(v)) {
            mst.push_back({weight, edge});
            uf.merge(u, v);
        }
    }

    return mst;
}
