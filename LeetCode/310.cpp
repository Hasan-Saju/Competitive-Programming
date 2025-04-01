#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>graph;
    vector<int>vis;
    vector<int>dis;
    int maxDepth(int src)
    {
        vis[src] = 1;
        queue<int>Q;
        Q.push(src);
        int mxDepth = INT_MIN;
        while(!Q.empty())
        {
            int x = Q.front();
            Q.pop();

            for(auto n: graph[x])
            {
                //cout<<" in "<<n<<" "<<vis[n]<<endl;
                if(!vis[n])
                {
                    //cout<<"here\n";
                    vis[n] = 1;
                    dis[n] = dis[x]+1;
                    mxDepth = max(mxDepth, dis[n]);
                    Q.push(n);
                }
            }
        }
        return mxDepth;
    }
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges)
    {
        graph.resize(n);
        vector<int>depth(n,-1);
        for(auto edge: edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        int mnHeight = INT_MAX;
        for(int i=0; i<n; i++)
        {
            vis.assign(n, 0);
            dis.assign(n, 0);
            depth[i] = maxDepth(i);
            mnHeight = min(mnHeight, depth[i]);
            //cout<<depth[i]<<endl;
        }


        vector<int>mnHeightTrees;
        for(int i=0; i<n; i++)
        {
            if(depth[i]==mnHeight)
                mnHeightTrees.push_back(i);
        }

        return mnHeightTrees;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,0},{1,2},{1,3}};
    vector<int>ans = obj.findMinHeightTrees(4, vec);

    for(auto x:ans)
        cout<<x<<" ";
}

