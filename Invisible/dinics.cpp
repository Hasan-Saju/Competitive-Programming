#include <iostream>
#include <vector>
#include <list>
#include<bits/stdc++.h>
using namespace std;
// code implentation from: https://geeksforgeeks.org/dinics-algorithm-maximum-flow
struct Edge {
    int v;      // Vertex v (or "to" vertex)
    // of a directed edge u-v. "From"
    // vertex u can can be obtained using
    // index in adjacent array.

    float flow;   // flow of data in edge

    float C;      // capacity

    int rev;    // To store index of reverse
    // edge in adjacency list so that
    // we can quickly find it.
};

// Residual Graph
class Graph{
    int V; // number of vertex
    int *level; // stores level of a node
    vector<Edge> *adj;
public:
    Graph(int V){
        adj = new vector<Edge>[V];
        this->V = V;
        level = new int[V];
    }

    // add edge to the graph
    void addEdge(int u, int v,float C){

        // Forward edge: 0 flow and C capacity

        Edge a;
        a.v = v;
        a.flow = 0.0f;
        a.C = C;
        a.rev =  static_cast<int>(adj[v].size());

        Edge b;
        b.v = u;
        b.flow = 0.0f;
        b.C = 0.0f;
        b.rev =  static_cast<int>(adj[v].size());



       // Edge a{v, 0.0f, C, static_cast<int>(adj[v].size())};

        // Back edge : 0 flow and 0 capacity
        //Edge b{u, 0.0f, 0.0f, static_cast<int>(adj[u].size())};

        adj[u].push_back(a);
        adj[v].push_back(b); // reverse edge


        // Print the edges to verify their properties

    }


    bool BFS(int s, int t);
    float sendFlow(int s, float flow, int t, int prt[]);
    float DinicMaxFlow(int s, int t);
};

// Finds if more flow can be sent from s to t.
// Also assigns levels to the nodes.
bool Graph::BFS(int s, int t){
    for (int i = 0; i < V; i++)
        level[i] = -1;

    level[s] = 0;   // Level of source vertex

    // Create a queue, enqueue source vertex
    // and mark source vertex as visited here
    // level[] array works as visited array also.
    list<int> q;
    q.push_back(s);

    vector<Edge>::iterator i;
    while (!q.empty()){
        int u = q.front();
        q.pop_front();
        for (i = adj[u].begin(); i != adj[u].end(); i++){
            Edge &e = *i;
            if (level[e.v] < 0 && e.flow < e.C){
                // Level of current vertex is,
                // level of parent + 1
                level[e.v] = level[u] + 1;

                q.push_back(e.v);
            }
        }
    }

    // IF we can not reach to the sink we
    // return false else true
    return level[t] < 0 ? false : true;
}

// A DFS based function to send flow after BFS has
// figured out that there is a possible flow and
// constructed levels. This function called multiple
// times for a single call of BFS.
// flow: Current flow send by parent function call
// start[]: To keep track of next edge to be explored.
//          start[i] stores count of edges explored
//          from i.
// u : Current vertex
// t : Sink
float Graph::sendFlow(int u, float flow, int t, int start[]){
    // Sink reached
    if (u == t)
        return flow;


    // Traverse all adjacent edges one -by - one.
    for (; start[u] < adj[u].size(); start[u]++){
        // Pick new edge from adjacency list of u
        Edge &e = adj[u][start[u]];
         cout<<"bla "<<" "<<e.C<<" "<<e.flow<<"\n";

        if (level[e.v] == level[u]+1 && e.flow < e.C){
            // find minimum flow from u to t
            float curr_flow = () min(flow, e.C - e.flow);
            cout<<"cr "<<curr_flow<<" "<<flow<<" "<<e.C<<" "<<e.flow<<"\n";

            float temp_flow = sendFlow(e.v, curr_flow, t, start);

            // flow is greater than zero
            if (temp_flow > 0.0){

                // add flow to current edge
                e.flow += temp_flow;

                // subtract flow from reverse edge
                // of current edge
                adj[e.v][e.rev].flow -= temp_flow;
                return temp_flow;
            }
        }
    }
    return 0.0f;
}

// Returns maximum flow in graph
float Graph::DinicMaxFlow(int s, int t){
    // Corner case
    if (s == t)
        return -1.0f;

    float total = 0.0f;  // Initialize result

    // Augment the flow while there is a path
    // from source to sink
    while (BFS(s, t)){
        // store how many edges are visited
        // from V { 0 to V }
        int *start = new int[V+1] {0};

        // while flow is not zero in graph from S to D
        while (float flow = sendFlow(s, numeric_limits<float>::max(), t, start)) {

            // Add path flow to overall flow
            total += flow;
            //cout<<total<<"\n";
        }
    }

    //return maximum flow
    return (float)total;
}

// Driver code
int main() {

    Graph g(6);
    g.addEdge(0, 1, 16.1f);
    g.addEdge(0, 2, 13.1f);
    g.addEdge(1, 2, 10.0f);
    g.addEdge(1, 3, 12.0f);
    g.addEdge(2, 1, 4.0f);
    g.addEdge(2, 4, 14.0f);
    g.addEdge(3, 2, 9.0f);
    g.addEdge(3, 5, 20.0f);
    g.addEdge(4, 3, 7.0f);
    g.addEdge(4, 5, 4.0f);

    cout << " Maximum flow " << g.DinicMaxFlow(0, 5) << endl;
    return 0;
}
