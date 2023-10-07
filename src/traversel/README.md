# Depth-First Search (DFS) 

A graph traversal algorithm that **explores as far as possible
along each branch** before backtracking. 

Uses a stack (implicitly via recursion) to keep track
of the vertices to be explored.

```pseudo
DFS(graph G, start vertex v):
    mark v as visited
    for each neighbor u of v:
        if u is not visited:
            DFS(G, u)
```

# Breadth-First Search (BFS)

