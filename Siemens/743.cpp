#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<pair<int, int>>adj[105];
    int vis[105];
    int dis[105];
public:
    void dijkstra(int src)
    {
        memset(vis, 0, sizeof(vis));

        for(int i=0; i<105; i++)
            dis[i] = INT_MAX;

        multiset<pair<int,int>>ms;

        vis[src]=1;
        dis[src]=0;
        ms.insert({0, src});

        while(!ms.empty())
        {
            pair<int, int> ele = *(ms.begin());
            ms.erase(ms.begin());
            int u = ele.second;

            for(auto [cost, v]:adj[u])
            {
                cout<<cost<<" "<<v<<endl;
                vis[v] = 1;

                if(dis[u]+cost<dis[v])
                {
                    dis[v] = dis[u]+cost;
                    ms.insert({cost, v});
                }
            }
        }

    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k)
    {
        for(int i=0; i<times.size(); i++)
        {
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];

            adj[u].push_back({w,v});
        }
        dijkstra(k);

        bool unreachable = false;
        int ans = INT_MIN;
        for(int i=1; i<=n; i++)
        {
            if(!vis[i])
                unreachable = true;

            ans = max(dis[i], ans);
        }

        return unreachable ? -1: ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {2,1,1}, {2,3,1}, {3,4,1} };
    cout<<obj.networkDelayTime(vec, 4, 2);
}


