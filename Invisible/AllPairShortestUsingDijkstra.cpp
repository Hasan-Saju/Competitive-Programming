#include<bits/stdc++.h>
using namespace std;

const int N = 100005;
int nodes, edges;
vector<pair<int, int>> adj[N];
int dist[N];
tuple<int, int, int> ansPair;
int subGraphNodes;
vector<int>subGraph;

void Dijkstra(int src)
{
    multiset<pair<int, int>> ms;

    for (int i = 0; i <= nodes; i++)
        dist[i] = INT_MAX;

    dist[src] = 0;
    ms.insert({0, src});

    while (!ms.empty())
    {
        pair<int, int> temp;
        temp = *(ms.begin());
        ms.erase(ms.begin());

        int u = temp.second;
        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i].second;
            int cost = adj[u][i].first;

            if (dist[v] > dist[u] + cost)
            {
                dist[v] = dist[u] + cost;
                ms.insert({cost,v});
            }
        }
    }

    for(auto node: subGraph)
    {
        if(node==src)
            continue;
        if(dist[node] < get<2>(ansPair))
        {
            ansPair = make_tuple(src, node, dist[node]);
        }
    }
}

int main()
{
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }


    cin>>subGraphNodes;
    for(int i=0; i<subGraphNodes; i++)
    {
        int x;
        cin>>x;
        subGraph.push_back(x);
    }

    for(auto node: subGraph)
    {
        Dijkstra(node);
    }

    cout<<"Shortest path with minimum weight cost in the Subgraph: ("<< get<0>(ansPair)<<","<<get<1>(ansPair)<<") \n";

    cout << endl;
}
