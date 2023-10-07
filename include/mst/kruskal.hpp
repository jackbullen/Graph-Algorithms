#ifndef KRUSKAL_HPP
#define KRUSKAL_HPP

#include "graph/weighted_graph.hpp"
#include <vector>

std::vector<std::pair<int, std::pair<int, int>>> kruskalMST(const WeightedGraph& graph);

#endif
