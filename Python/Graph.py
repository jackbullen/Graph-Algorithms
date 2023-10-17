import networkx as nx
import matplotlib.pyplot as plt

class Graph:
    def __init__(self, M):
        self.vertices = [i for i in range(len(M))]
        self.edges = [(i, j, M[i][j]) for i in range(len(M)) for j in range(len(M)) if M[i][j] != 0]

    def plot(self):
        # show graph with directed edges with weights
        G = nx.DiGraph()
        G.add_nodes_from(self.vertices)
        G.add_weighted_edges_from(self.edges)
        pos = nx.spring_layout(G)
        nx.draw_networkx_nodes(G, pos, node_size=500)
        nx.draw_networkx_labels(G, pos)
        nx.draw_networkx_edges(G, pos, edgelist=self.edges, edge_color='r', arrows=True)
        nx.draw_networkx_edge_labels(G, pos, edge_labels=nx.get_edge_attributes(G, 'weight'))
        plt.show()

    def __str__(self):
        return "Vertices: " + str(self.vertices) + "\nEdges: " + str(self.edges)