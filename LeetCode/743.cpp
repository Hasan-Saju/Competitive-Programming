#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<pair<int, int>>adj[105];
    int dist[105];
    int vis[105];
    void Dijkstra(int src, int nodes)
    {
        multiset<pair<int, int>>ms;
        memset(vis, 0, sizeof(vis));

        for(int i=0; i<=nodes; i++)
            dist[i] = INT_MAX;

        dist[src] =  0;
        ms.insert({0,src});
        vis[src] = 1;

        while(!ms.empty())
        {
            pair<int, int>temp;
            temp = *(ms.begin());
            ms.erase(ms.begin());

            int u = temp.second;

            for(int i=0; i<adj[u].size(); i++)
            {
                int cost = adj[u][i].first;
                int v = adj[u][i].second;
                vis[v] = 1;

                if(dist[v]>dist[u]+cost)
                {
                    dist[v] = dist[u]+cost;
                    ms.insert({cost, v});
                }
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(int i=0; i<times.size(); i++)
        {
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];
            adj[u].push_back({w, v});
        }
        Dijkstra(k, n);
        int notVisited=0;
        int ans = INT_MIN;

        for(int i=1; i<=n; i++)
        {
            if(!vis[i])
                notVisited = 1;

            ans = max(ans, dist[i]);
        }

        return notVisited ? -1:ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{2,1,1}, {2,3,1}, {3,4,1}};
    cout<<obj.networkDelayTime(vec, 4, 2);
}

