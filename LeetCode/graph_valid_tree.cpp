#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<bool>vis;
    vector<vector<int>>graph;
    void dfs(int s)
    {
        cout<<s<<" ";
        vis[s] = true;
        for(auto x:graph[s])
        {
            if(vis[x])
                continue;
            dfs(x);
        }
    }
public:
    bool validTree(int n, vector<vector<int>>& edges)
    {
        graph.resize(n);
        vis.resize(n, false);
        for(auto edge: edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        dfs(0);
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
                return false;
        }

        return n-1 == edges.size() ? true:false;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0, 1}, {0, 2}, {0, 3}, {1, 4}};
    cout<<obj.validTree(5, vec);
}

