#include "../../include/graph/weighted_graph.hpp"

WeightedGraph::WeightedGraph(int V) : V(V), adj(V) {}

int WeightedGraph::getVertices() const {
    return V;
}

void WeightedGraph::addEdge(int v, int w, int weight) {
    adj[v].push_back({w, weight});
    adj[w].push_back({v, weight});
}

const std::list<std::pair<int, int>>& WeightedGraph::getAdjList(int v) const {
    return adj[v];
}