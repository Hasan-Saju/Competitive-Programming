#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& vis, int node)
    {
        vis[node] = 1;

        for(auto cur:adj[node])
        {
            if(!vis[cur])
                dfs(adj, vis, cur);
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);

        for(auto edge: edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                dfs(adj, vis, i);
                ans++;
            }
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,1}, {1,2}, {3,4} };
    cout<<obj.countComponents(5, vec);
}

