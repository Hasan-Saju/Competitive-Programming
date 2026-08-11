#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int>vis;
public:
    bool dfs(vector<vector<int>>& adj, int node, int pr)
    {

        vis[node] = 1;
        for(auto cur:adj[node])
        {
            if(!vis[cur])
            {
                if(dfs(adj,cur,node))
                    return true;
            }
            else if(cur!=pr)
            {
                return true;
            }
        }
        return false;
    }

    bool validTree(int n, vector<vector<int>>& edges)
    {
        vector<vector<int>>adj(n);
        vis.assign(n, 0);

        for(auto edge: edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        bool cycle = dfs(adj, 0, -1);
        bool connected = true;
        for(int i=0; i<n; i++)
            if(!vis[i])
                connected = false;

        //cout<<cycle<<" "<<connected;
        return !cycle&&connected;

    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,1}, {0,2}, {0,3}, {1,4} };
    cout<<obj.validTree(5, vec);
}

