#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<int>vis;
    vector<vector<int>>graph;
public:
    void dfs(int s)
    {
        vis[s] = 1;
        for(auto x: graph[s])
            if(vis[x]==-1)
                dfs(x);
    }
    int countComponents(int n, vector<vector<int>>& edges)
    {
        vis.resize(n, -1);
        graph.resize(n);
        int ans = 0;
        for(auto edge:edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        for(int i=0; i<n; i++)
        {
            if(vis[i]==-1)
            {
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,1}, {1,2}, {2,3}, {4,5}};
    cout<<obj.countComponents(6, vec);
}

