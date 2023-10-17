#ifndef WEIGHTED_GRAPH_HPP
#define WEIGHTED_GRAPH_HPP

#include <vector>
#include <list>

class WeightedGraph {
public:
    WeightedGraph(int V);
    void addEdge(int v, int w, int weight);
    const std::list<std::pair<int, int>>& getAdjList(int v) const;
    int getVertices() const;    
    
private:
    int V;
    std::vector<std::list<std::pair<int, int>>> adj;
};

#endif  // WEIGHTED_GRAPH_HPP
