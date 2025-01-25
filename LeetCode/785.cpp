#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool graphColoringBFS(int ind, vector<int>& visited, vector<vector<int>>& graph)
    {
        if(visited[ind])
            return true;
        queue<int>Q;
        Q.push(ind);
        visited[ind] = 1;

        while(!Q.empty())
        {
            int x = Q.front();
            Q.pop();

            for(int i=0; i<graph[x].size(); i++)
            {
                int y = graph[x][i];
                if(visited[y] and visited[x]==visited[y])
                    return false;
                if(!visited[y])
                {
                    visited[y] = visited[x]*-1;
                    Q.push(y);
                }

            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        vector<int>visited(graph.size());

        for(int i=0; i<graph.size(); i++)
        {
            if(!graphColoringBFS(i, visited, graph))
                return false;
        }
        return true;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2,3},{0,2},{0,1,3},{0,2}};
    cout<<obj.isBipartite(vec);
}
