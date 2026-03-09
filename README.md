# Graph Algorithm Visualizer

A **C++ console-based application** for visualizing key graph algorithms including **BFS, DFS, Dijkstra, and Bellman-Ford**. Designed for learning, debugging, and research-level exploration of graph algorithms.

---

## Features

- **Interactive Visualization:** Step-by-step exploration of nodes and edges during algorithm execution.  
- **Graph Generator:** Creates connected, duplicate-free, and self-loop-free graphs for safe testing.  
- **Algorithm Implementations:**  
  - **BFS (Breadth-First Search)** – explores nodes level by level.  
  - **DFS (Depth-First Search)** – explores nodes depth-wise.  
  - **Dijkstra's Algorithm** – computes shortest paths in weighted graphs.  
  - **Bellman-Ford Algorithm** – supports graphs with negative weights.  
- **Performance Tracking:** Displays runtime in milliseconds for each algorithm.  
- **Extensible Design:** Easily add more algorithms such as **A\***, **Floyd-Warshall**, or advanced visualization features.  

---

## Requirements

- **C++ Compiler** (g++ recommended)  
- **C++11 or above**  

---

## Installation

1. Clone the repository:

```bash
git clone https://github.com/megha204/graph_visualizer.git
cd graph_visualizer
```
2.Compile the project:

```bash
g++ main.cpp graph.cpp algorithms.cpp generator.cpp -o graph_visualizer
```
Run the application:

```bash
./graph_visualizer   # Linux / macOS
graph_visualizer.exe # Windows
```
---
## Usage

- **Enter the number of vertices and edges for your graph.

- **The program generates a connected graph automatically.

- **Select an algorithm from the menu:**

- 1 → BFS

- 2 → DFS

- 3 → Dijkstra

- 4 → Bellman-Ford

- 5 → Exit

- **Enter the start node for traversal or shortest path computation.

- **Observe step-by-step exploration, edge relaxations, and final distances.

---
<img width="705" height="475" alt="Screenshot 2026-03-09 210507" src="https://github.com/user-attachments/assets/4e9de3ca-ca5e-4685-82dc-a5f40f8fffa0" />
<img width="753" height="540" alt="Screenshot 2026-03-09 210515" src="https://github.com/user-attachments/assets/381989dd-8b46-47ce-a9ef-4a80440a330d" />




