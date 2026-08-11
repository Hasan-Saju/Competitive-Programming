#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int>vis;
    bool dfs(int node, int pr, vector<vector<int>>& adj)
    {
        vis[node]=1;

        for(auto cur: adj[node])
        {
            if(!vis[cur])
            {
                if(dfs(cur, node, adj))
                    return true;
            }
            else if(cur!=pr)
                return true;
        }
        return false;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges)
    {
        vector<vector<int>>adj(n);
        vis.assign(n,0);

        for(auto e:edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        int cycle = dfs(0, -1, adj);
        int connected = true;
        for(int i=0; i<n; i++)
            if(!vis[i])
                connected=false;

        return connected&&!cycle;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,1}, {0,2}, {0,3}, {1,4} };
    obj.validTree(5, vec);
}

