#include "graph/weighted_graph.hpp"

#include "mst/kruskal.hpp"
#include <iostream>

int main() {
    // WeightedGraph graph(4);

    // graph.addEdge(0, 1, 10);
    // graph.addEdge(0, 2, 6);
    // graph.addEdge(0, 3, 5);
    // graph.addEdge(1, 3, 15);
    // graph.addEdge(2, 3, 4);

    WeightedGraph graph(7); 

    graph.addEdge(0, 1, 7);   
    graph.addEdge(0, 3, 5);   
    graph.addEdge(1, 2, 8);  
    graph.addEdge(1, 3, 9);   
    graph.addEdge(1, 4, 7);  
    graph.addEdge(2, 4, 5);  
    graph.addEdge(3, 4, 15); 
    graph.addEdge(3, 5, 6);  
    graph.addEdge(4, 5, 8); 
    graph.addEdge(4, 6, 9);  
    graph.addEdge(5, 6, 11); 


    // WeightedGraph graph(6); 

    // graph.addEdge(0, 1, 4); 
    // graph.addEdge(0, 5, 2);
    // graph.addEdge(1, 2, 6);
    // graph.addEdge(1, 5, 5);
    // graph.addEdge(2, 3, 3);
    // graph.addEdge(2, 5, 1);
    // graph.addEdge(2, 4, 5);
    // graph.addEdge(3, 4, 4);
    // graph.addEdge(4, 5, 2);


    std::vector<std::pair<int, std::pair<int, int>>> mst = kruskalMST(graph);

    std::cout << "Edges of the Minimum Spanning Tree:" << std::endl;
    for (auto& [weight, edge] : mst) {
        std::cout << edge.first << " - " << edge.second << " (Weight: " << weight << ")" << std::endl;
    }

    

    return 0;
}
