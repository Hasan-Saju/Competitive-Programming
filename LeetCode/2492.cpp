#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int Dijkstra(int src, int n, vector<vector<pair<int, int>>>& adj)
    {
        vector<int>dist(n+1, INT_MAX);
        multiset<pair<int, int>>ms;

        ms.insert({INT_MAX, src});

        while(!ms.empty())
        {
            pair<int, int>temp;
            temp = *(ms.begin());
            ms.erase(ms.begin());

            int u = temp.second;
            for(int i=0; i<adj[u].size(); i++)
            {
                int v = adj[u][i].second;
                int cost = adj[u][i].first;

                if(dist[v]>min(dist[u], cost))
                {
                    dist[v] = min(dist[u], cost);
                    ms.insert({cost, v});
                    cout<<v<<" "<<cost<<"\n";
                }
            }
        }
        return dist[n];
    }
    int minScore(int n, vector<vector<int>>& roads)
    {
        //vector<vector<pair<int, int>>> adj(n + 1, vector<pair<int, int>>(n + 1, {0, 0}));
        vector<vector<pair<int, int>>> adj(n + 1);

        for(auto road:roads)
        {
            adj[road[0]].push_back({road[2], road[1]});
            adj[road[1]].push_back({road[2], road[0]});
        }

        return Dijkstra(1, n, adj);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2,9},{2,3,6},{2,4,5},{1,4,7}};
    cout<<obj.minScore(4, vec);
}

