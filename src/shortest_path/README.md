# Dijkstra's algorithm 

Used to find the shortest path from a source vertex to all other vertices
in a weighted graph. It uses a priority queue to select the next vertex with the shortest distance.

```pseudo
Dijkstra(graph G, start vertex s):
    initialize distance of all vertices to infinity
    distance[s] = 0
    create a priority queue Q and insert s with distance 0
    while Q is not empty:
        v = vertex in Q with smallest distance
        remove v from Q
        for each neighbor u of v:
            if distance through v to u is shorter than current distance[u]:
                update distance[u] and update u in Q
```