Problem Description: Reachable Vertices in a Directed Graph

You are given a directed graph represented by a set of vertices and directed edges. The vertices are labelled with uppercase letters 'A' to 'Z'. Your task is implementing a program that can answer queries about reachable vertices from a specified starting vertex using Breadth-First Search (BFS).

Input:

The input consists of the following components:

1. An integer `t` (1 <= t <= 26): The number of vertices in the graph.
2. `t` uppercase letters representing the vertices of the graph.
3. An integer `a` (0 <= a <= 1000): The number of directed edges in the graph.
4. `a` lines, each containing two uppercase letters `x` and `y` representing a directed edge from vertex `x` to vertex `y`.
5. If `line` is 1, it represents a query for reachable vertices.
     - A single uppercase letter `a' represents the query's starting vertex.

Output:

For each query of type 1, output a space-separated list of vertices that are reachable from the specified starting vertex in lexicographically increasing order.

Constraints:

- The number of vertices `t` is in the range 1 to 26.
- Each directed edge (x, y) indicates that there is an edge from vertex `x` to vertex `y`.
- The type of query `line` is either 1 or 2.
- The vertices and edges are represented by uppercase letters.
- The output should be in lexicographically increasing order.
- The graph may not be connected, and there may be isolated vertices.
- The starting vertex for a query is always a valid vertex in the graph.
